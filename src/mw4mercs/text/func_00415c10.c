/*
 * FUN_00415C10 (35 B) — Doubly-linked list node inserter (prepend to head).
 *
 * Called by FUN_00417170 (iterator_ctor.c) to insert the iterator node into
 * the container's doubly-linked node list.  The container's list head is at
 * container+0x04.
 *
 * Node layout:
 *   +0x00  vtable pointer
 *   +0x04  container pointer (back pointer to owning container)
 *   +0x08  next pointer
 *   +0x0C  prev pointer
 *
 * Container layout (relevant fields):
 *   +0x04  head pointer (first node in the doubly-linked list)
 *
 * This function prepends the node (ECX = this) to the container's list:
 *   - Sets this->container = container
 *   - Sets this->next = old_head
 *   - If old_head != NULL: old_head->prev = this
 *   - Sets this->prev = NULL (new head)
 *   - Sets container->head = this
 *
 * __stdcall (RET 0x4), ECX = this (node to insert).
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall node_insert(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]    ; EDX = container pointer (stack param)
        mov     eax, ecx                     ; EAX = this (node to insert)
        mov     ecx, dword ptr [edx + 4]    ; ECX = container->head (old head)
        test    ecx, ecx                     ; Is list empty?
        mov     dword ptr [eax + 4], edx    ; this->container = container
        mov     dword ptr [eax + 8], ecx    ; this->next = old_head
        je      l_empty                     ; If list was empty, skip prev fixup
        mov     dword ptr [ecx + 0xc], eax  ; old_head->prev = this
    l_empty:
        mov     dword ptr [eax + 0xc], 0    ; this->prev = NULL (new head)
        mov     dword ptr [edx + 4], eax    ; container->head = this
        ret     4
    }
}
