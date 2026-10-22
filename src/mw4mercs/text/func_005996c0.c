/*
 * FUN_005996C0 (82 B) — __cdecl BST traversal with counter.
 *
 * Identical to FUN_00599660. Repeatedly finds the predecessor
 * (rightmost of left subtree, or walks up via parent) of the given
 * node, increments a counter at *param3, and continues until the
 * predecessor matches param2.
 *
 * Tree node layout:
 *   0x00: (implicit)
 *   0x04: parent pointer
 *   0x08: right child
 *   0x0C: left child
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005996c0(void)
{
    __asm {
        mov     eax, [esp + 4]              ; eax = param1 (node)
        push    esi
        mov     esi, [esp + 0x0C]           ; esi = param2 (target)
        cmp     eax, esi
        je      L_done
        mov     edx, [esp + 0x10]           ; edx = param3 (counter ptr)
        push    edi

    L_loop:
        mov     ecx, [eax + 0x0C]           ; ecx = node->left
        test    ecx, ecx
        je      L_no_left

        ; Has left child: find rightmost
        mov     eax, ecx
        mov     ecx, [eax + 8]              ; ecx = node->right
        test    ecx, ecx
        je      L_check_counter

    L_find_rightmost:
        mov     eax, ecx
        mov     ecx, [eax + 8]
        test    ecx, ecx
        jne     L_find_rightmost
        jmp     L_check_counter

    L_no_left:
        mov     ecx, [eax + 4]              ; ecx = node->parent
        cmp     eax, [ecx + 0x0C]           ; is node == parent->left?
        jne     L_check_parent
    L_walk_up:
        mov     eax, ecx
        mov     ecx, [ecx + 4]              ; ecx = parent->parent
        cmp     eax, [ecx + 0x0C]           ; is parent == grandparent->left?
        je      L_walk_up

    L_check_parent:
        cmp     [eax + 0x0C], ecx           ; is node->left == parent?
        je      L_check_counter
        mov     eax, ecx

    L_check_counter:
        mov     edi, [edx]                  ; edi = *counter
        inc     edi
        cmp     eax, esi
        mov     [edx], edi
        jne     L_loop

        pop     edi
    L_done:
        pop     esi
        ret
    }
}
