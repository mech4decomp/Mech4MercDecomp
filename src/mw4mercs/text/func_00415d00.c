/*
 * FUN_00415D00 (62 B) — Unlink an item from a singly-linked circular list.
 *
 * Called by:
 *   - FUN_00416DE0 (item_dtor_body.c) as step 4 of item destruction.
 *
 * This function removes the item (ECX) from a singly-linked circular list
 * rooted at item->list_head_ptr->slist_head.
 *
 * Item layout (at ECX):
 *   +0x00: vtable pointer
 *   +0x04: container pointer
 *   +0x08: next (singly-linked list next pointer)
 *   +0x0c: list_head_ptr (pointer to the structure containing the list head)
 *
 * Container/list-head structure layout (at item->list_head_ptr):
 *   +0x08: slist_head (head of the singly-linked circular list)
 *
 * Algorithm:
 *   1. Check if item is the head of the list.
 *   2. If head: update head to item->next. If item is the only element
 *      (self-loop), zero out the head and item->next, return.
 *   3. Walk the circular list to find the predecessor (node whose next
 *      pointer points to this item).
 *   4. Splice item out: predecessor->next = item->next.
 *   5. Zero item->next.
 *
 * __thiscall (ECX = item), no stack params, void return.
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall item_unlink(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x0c]    ; eax = item->list_head_ptr
        mov     edx, dword ptr [eax + 0x08]    ; edx = list_head_ptr->slist_head
        cmp     edx, ecx                       ; is item the head?
        push    esi
        jne     l_walk                          ; no, skip head update

        ; item IS the head of the list
        mov     esi, dword ptr [ecx + 0x08]    ; esi = item->next
        cmp     esi, ecx                       ; self-loop (only item)?
        je      l_self_loop                     ; yes, special case

        ; not self-loop: list_head_ptr->slist_head = item->next
        mov     dword ptr [eax + 0x08], esi

    l_walk:
        ; Walk the circular list to find predecessor of item
        mov     eax, dword ptr [edx + 0x08]    ; eax = current->next
        cmp     eax, ecx                       ; is this our item?
        je      l_found                         ; yes, edx is predecessor

    l_walk_loop:
        mov     edx, eax                       ; advance current
        mov     eax, dword ptr [edx + 0x08]    ; eax = current->next
        cmp     eax, ecx                       ; is this our item?
        jne     l_walk_loop                     ; no, keep walking

    l_found:
        ; edx = predecessor, splice item out
        mov     eax, dword ptr [ecx + 0x08]    ; eax = item->next
        mov     dword ptr [edx + 0x08], eax    ; predecessor->next = item->next
        mov     dword ptr [ecx + 0x08], 0      ; item->next = NULL
        pop     esi
        ret

    l_self_loop:
        ; Only item in the list: zero out head and item->next
        xor     edx, edx
        mov     dword ptr [eax + 0x08], edx    ; list_head_ptr->slist_head = NULL
        mov     dword ptr [ecx + 0x08], edx    ; item->next = NULL
        pop     esi
        ret
    }
}
