/*
 * FUN_00580850 (94 B) — __thiscall BST lookup, RET 8, 2 stack params.
 *
 * Searches a binary search tree. this = pointer-to-root pointer.
 * arg1 = output ptr for result, arg2 = ptr to key value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00580850(void)
{
    __asm {
        push    ecx                         ; save original this
        mov     ecx, [ecx]                  ; ecx = *this (root ptr)
        mov     eax, [ecx + 4]              ; eax = root->field_04 (tree root)
        test    eax, eax
        push    esi
        push    edi
        mov     edi, [esp + 0x14]           ; edi = arg2 (key ptr)
        mov     edx, ecx                    ; edx = root ptr (parent)
        je      L_check

        mov     esi, [edi]                  ; esi = key value
        ; L_loop label is at the cmp instruction (0x580864)
    L_loop:
        cmp     [eax + 0x10], esi           ; compare node->field_10 with key
        jl      L_go_right
        mov     edx, eax                    ; edx = node (parent)
        mov     eax, [eax + 8]              ; eax = node->field_08 (left)
        jmp     L_continue

    L_go_right:
        mov     eax, [eax + 0x0C]           ; eax = node->field_0C (right)

    L_continue:
        test    eax, eax
        jne     L_loop

    L_check:
        cmp     edx, ecx                    ; parent == root?
        mov     [esp + 0x14], edx           ; store parent
        je      L_not_found
        mov     eax, [edi]                  ; eax = key
        cmp     eax, [edx + 0x10]           ; compare key with parent->field_10
        jl      L_not_found

    L_found:
        lea     eax, [esp + 0x14]           ; eax = &parent
        mov     ecx, [eax]                  ; ecx = parent
        mov     eax, [esp + 0x10]           ; eax = arg1 (output ptr)
        pop     edi
        mov     [eax], ecx                  ; *arg1 = parent
        pop     esi
        pop     ecx
        ret     8

    L_not_found:
        lea     eax, [esp + 8]              ; eax = &saved_ecx
        mov     [esp + 8], ecx              ; saved_ecx = root
        mov     ecx, [eax]                  ; ecx = root
        mov     eax, [esp + 0x10]           ; eax = arg1
        pop     edi
        mov     [eax], ecx                  ; *arg1 = root
        pop     esi
        pop     ecx
        ret     8
    }
}
