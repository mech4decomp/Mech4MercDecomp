/*
 * FUN_00598520 (107 B) — __thiscall BST string lookup, RET 8, 2 stack params.
 *
 * Searches a binary search tree using string comparison.
 * this = pointer-to-root pointer.
 * arg1 = output ptr for result, arg2 = ptr to key string ptr.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00598520(void)
{
    __asm {
        push    ebp
        mov     ebp, [ecx]                  ; ebp = *this (root ptr)
        push    edi
        mov     edi, [ebp + 4]              ; edi = root->field_04 (tree root)
        test    edi, edi
        je      L_not_found
        mov     eax, [esp + 0x10]           ; eax = arg2
        mov     edx, [eax]                  ; edx = *arg2 (key ptr)
        push    ebx
        push    esi

    L_loop:
        mov     eax, [edi + 0x10]           ; eax = node->field_10 (string ptr)
        mov     esi, edx                    ; esi = key ptr

    L_strcmp_loop:
        mov     bl, [eax]                   ; bl = *str
        mov     cl, bl
        cmp     bl, [esi]                   ; compare chars
        jne     L_strcmp_diff
        test    cl, cl
        je      L_strcmp_eq
        mov     bl, [eax + 1]
        mov     cl, bl
        cmp     bl, [esi + 1]
        jne     L_strcmp_diff
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     L_strcmp_loop

    L_strcmp_eq:
        xor     eax, eax
        jmp     L_strcmp_done

    L_strcmp_diff:
        sbb     eax, eax
        sbb     eax, -1

    L_strcmp_done:
        test    eax, eax
        jl      L_go_right
        mov     ebp, edi                    ; parent = node
        mov     edi, [edi + 8]              ; edi = node->field_08 (left)
        jmp     L_continue

    L_go_right:
        mov     edi, [edi + 0x0C]           ; edi = node->field_0C (right)

    L_continue:
        test    edi, edi
        jne     L_loop

        mov     eax, [esp + 0x14]           ; eax = arg1 (output ptr)
        pop     esi
        pop     ebx
        pop     edi
        mov     [eax], ebp                  ; *arg1 = parent
        pop     ebp
        ret     8

    L_not_found:
        mov     eax, [esp + 0x0C]           ; eax = arg1
        pop     edi
        mov     [eax], ebp                  ; *arg1 = root
        pop     ebp
        ret     8
    }
}
