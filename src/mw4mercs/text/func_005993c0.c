/*
 * FUN_005993C0 (79 B) — __thiscall BST node removal.
 *
 * Identical to FUN_005990E0. Removes a node from a binary search tree.
 * ecx points to the root pointer. The node to remove is *ecx.
 * After removal, *ecx is updated to the new root, and the removed node
 * is stored at *(param2).
 *
 * Tree node layout:
 *   0x00: (implicit, this node's address is the key)
 *   0x04: parent pointer
 *   0x08: right child
 *   0x0C: left child
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005993c0(void)
{
    __asm {
        push    esi
        mov     esi, [ecx]                  ; esi = root node (*ecx)
        mov     eax, esi
        mov     edx, [eax + 0x0C]           ; edx = node->left
        test    edx, edx
        je      L_no_left

        ; Has left child: find rightmost node of left subtree
        mov     eax, edx                    ; eax = left child
        mov     edx, [eax + 8]              ; edx = left->right
        test    edx, edx
        je      L_done                      ; if no right, use left child as replacement

    L_find_rightmost:
        mov     eax, edx
        mov     edx, [eax + 8]              ; edx = node->right
        test    edx, edx
        jne     L_find_rightmost

        ; Fall-through from loop: rightmost found
        mov     [ecx], eax                  ; *ecx = rightmost node (new root)
        mov     eax, [esp + 8]              ; eax = param2 (output ptr)
        mov     [eax], esi                  ; *param2 = old root
        pop     esi
        ret     8

    L_no_left:
        ; No left child: walk up via parent
    L_walk_up:
        mov     edx, [eax + 4]              ; edx = node->parent
        cmp     eax, [edx + 0x0C]           ; is node == parent->left?
        jne     L_check_parent
    L_walk_up_loop:
        mov     eax, edx
        mov     edx, [edx + 4]              ; edx = parent->parent
        cmp     eax, [edx + 0x0C]           ; is parent == grandparent->left?
        je      L_walk_up_loop

    L_check_parent:
        cmp     [eax + 0x0C], edx           ; is node->left == parent?
        je      L_done
        mov     eax, edx

    L_done:
        mov     [ecx], eax                  ; *ecx = new root
        mov     eax, [esp + 8]              ; eax = param2 (output ptr)
        mov     [eax], esi                  ; *param2 = old root
        pop     esi
        ret     8
    }
}
