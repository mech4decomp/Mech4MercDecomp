/*
 * FUN_00417910 (61 B) — Node-destroy continuation: remove node from
 * singly-linked iterator list.
 *
 * Called via JMP (tail-call) by FUN_00417890 (node_destroy.c) after the
 * node has been unlinked from the doubly-linked list. This function removes
 * the node from a separate singly-linked circular list (the iterator list)
 * rooted at owner->field_0c.
 *
 * Node layout (at ECX):
 *   +0x00  owner_ptr (pointer to the container/owner object)
 *   +0x0c  list_head_ptr (pointer to the head pointer of the doubly-linked
 *          list; also used here to access owner->field_0c)
 *   +0x10  next_in_slist (singly-linked list next pointer)
 *
 * Owner layout (the container object):
 *   +0x0c  slist_head (head of the singly-linked iterator list, circular)
 *
 * Algorithm:
 *   1. Check if node is the head of the singly-linked list.
 *   2. If head: update head to node->next_in_slist. If node is the only
 *      element (self-loop), zero out the head and node->next.
 *   3. Walk the circular list to find the predecessor (node whose next
 *      pointer points to this node).
 *   4. Splice node out: predecessor->next = node->next.
 *   5. Zero node->next_in_slist.
 *
 * __thiscall (ECX = node), no stack params, void return.
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall node_destroy_slist(void)
{
    __asm {
        mov     eax, dword ptr [ecx]            ; eax = node->owner_ptr
        mov     edx, dword ptr [eax + 0x0c]     ; edx = owner->slist_head
        cmp     edx, ecx                        ; is node the head?
        push    esi
        jne     l_walk                          ; no, skip head update

        ; node IS the head of the singly-linked list
        mov     esi, dword ptr [ecx + 0x10]     ; esi = node->next_in_slist
        cmp     esi, ecx                        ; self-loop (only node)?
        je      l_self_loop                     ; yes, special case

        ; not self-loop: owner->slist_head = node->next
        mov     dword ptr [eax + 0x0c], esi

        ; fall through to walk loop to find predecessor and update its next
    l_walk:
        mov     eax, dword ptr [edx + 0x10]     ; eax = current->next
        cmp     eax, ecx                        ; is this our node?
        je      l_found                         ; yes, edx is predecessor

    l_walk_loop:
        mov     edx, eax                        ; advance current
        mov     eax, dword ptr [edx + 0x10]     ; eax = current->next
        cmp     eax, ecx                        ; is this our node?
        jne     l_walk_loop                     ; no, keep walking

    l_found:
        ; edx = predecessor, eax = node (redundant, already ecx)
        mov     eax, dword ptr [ecx + 0x10]     ; eax = node->next_in_slist
        mov     dword ptr [edx + 0x10], eax     ; predecessor->next = node->next
        mov     dword ptr [ecx + 0x10], 0       ; node->next = NULL
        pop     esi
        ret

    l_self_loop:
        ; Only node in the list: zero out head and node->next
        xor     edx, edx
        mov     dword ptr [eax + 0x0c], edx     ; owner->slist_head = NULL
        mov     dword ptr [ecx + 0x10], edx     ; node->next = NULL
        pop     esi
        ret
    }
}
