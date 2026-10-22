/*
 * FUN_00415C40 (38 B) — Iterator destructor body (real implementation).
 *
 * Called by:
 *   - FUN_004171B0 (iterator_dtor.c) — 5-byte JMP thunk for vtable 0x7725A0
 *   - FUN_004176A0 — another 5-byte JMP thunk (same target)
 *
 * Unlinks the iterator node from the container's singly-linked list.
 * The list is singly-linked (next at +0x08) with prev back-links at +0x0C
 * and a back-pointer to the container at +0x04.
 *
 * Iterator node layout (at ECX):
 *   +0x00: vtable pointer (0x7725A0)
 *   +0x04: container pointer (back-pointer to the owning container)
 *   +0x08: next pointer (next node in list, or NULL)
 *   +0x0C: prev pointer (previous node in list, or NULL for head)
 *
 * Container layout (at container_ptr):
 *   +0x04: head pointer (first node in list, or NULL)
 *
 * Algorithm:
 *   1. If this node is the head (container->field_04 == this),
 *      update container->field_04 = this->next.
 *   2. If this node has a prev (this->field_0c != NULL),
 *      update prev->next = this->next.
 *   3. If this node has a next (this->next != NULL),
 *      update next->field_0c = this->prev (the old prev, or NULL).
 *
 * __thiscall (ECX = this), no stack params, plain RET.
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall iterator_dtor_body(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 4]    /* eax = this->container */
        cmp     dword ptr [eax + 4], ecx    /* if (container->head == this) */
        jne     l_not_head
        mov     edx, dword ptr [ecx + 8]    /* edx = this->next */
        mov     dword ptr [eax + 4], edx    /* container->head = this->next */
    l_not_head:
        mov     eax, dword ptr [ecx + 0xc]  /* eax = this->prev */
        test    eax, eax
        je      l_no_prev
        mov     edx, dword ptr [ecx + 8]    /* edx = this->next */
        mov     dword ptr [eax + 8], edx    /* prev->next = this->next */
    l_no_prev:
        mov     ecx, dword ptr [ecx + 8]    /* ecx = this->next */
        test    ecx, ecx
        je      l_no_next
        mov     dword ptr [ecx + 0xc], eax  /* next->prev = this->prev (old prev) */
    l_no_next:
        ret
    }
}
