/*
 * FUN_00417890 (59 B) — Recursive node-destroy helper (doubly-linked list unlink).
 *
 * Called by:
 *   - FUN_00415380 (base_dtor.c) for each node in the list at this+0x0c
 *   - FUN_00417980 (subobj_dtor_2c.c) for each node in the sub-object's list
 *
 * This function unlinks a node from a doubly-linked list, then tail-calls
 * FUN_00417910 to also remove the node from a separate singly-linked list
 * (the iterator list rooted at owner->field_0c).
 *
 * Node layout (at ECX):
 *   +0x00: owner_ptr (pointer to the container/owner object)
 *   +0x04: prev (doubly-linked list previous pointer)
 *   +0x08: next (doubly-linked list next pointer)
 *   +0x0c: list_head_ptr (pointer to the head pointer of the doubly-linked list)
 *   +0x10: next_in_slist (singly-linked list next, used by FUN_00417910)
 *
 * The doubly-linked list is rooted at *list_head_ptr. The head node has
 * prev == NULL, and the tail node has next == NULL.
 *
 * __thiscall (ECX = node), no stack params, void return (via tail call).
 * CFLAGS: /O1
 */

/* ---- external functions (called via inline asm, decoration irrelevant) ---- */
extern void __stdcall FUN_00417910(void);

__declspec(naked) void __stdcall node_destroy(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x04]    ; edx = node->prev
        test    edx, edx
        jz      l_no_prev                       ; if prev == NULL, node is head

        ; prev != NULL: prev->next = node->next
        mov     eax, dword ptr [ecx + 0x08]    ; eax = node->next
        mov     dword ptr [edx + 0x08], eax    ; prev->next = node->next
        jmp     l_check_next

    l_no_prev:
        ; prev == NULL: node is the list head
        ; *list_head_ptr->prev = node->next
        mov     eax, dword ptr [ecx + 0x08]    ; eax = node->next
        push    edi
        mov     edi, dword ptr [ecx + 0x0c]    ; edi = list_head_ptr
        mov     dword ptr [edi + 0x04], eax    ; list_head_ptr->prev = node->next
        pop     edi

    l_check_next:
        test    eax, eax
        jz      l_no_next                       ; if next == NULL, node is tail

        ; next != NULL: next->prev = node->prev
        mov     dword ptr [eax + 0x04], edx    ; next->prev = node->prev
        jmp     l_clear

    l_no_next:
        ; next == NULL: node is the tail
        ; *list_head_ptr = node->prev
        mov     eax, dword ptr [ecx + 0x0c]    ; eax = list_head_ptr
        mov     dword ptr [eax], edx            ; *list_head_ptr = node->prev

    l_clear:
        mov     dword ptr [ecx + 0x04], 0x0    ; node->prev = NULL
        mov     dword ptr [ecx + 0x08], 0x0    ; node->next = NULL
        jmp     FUN_00417910                    ; tail call: remove from singly-linked list
    }
}
