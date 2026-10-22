/*
 * 82 bytes — in-order predecessor traversal with counter.
 * Byte-identical to FUN_00599720 (same implementation, different VA).
 * __cdecl (3 stack params).
 */

__declspec(naked) void FUN_00599780(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]    /* node */
        push    esi
        mov     esi, dword ptr [esp + 0xC]  /* end */
        cmp     eax, esi
        je      done
        mov     edx, dword ptr [esp + 0x10] /* counter */
        push    edi

    loop_start:
        mov     ecx, dword ptr [eax + 0xC]  /* node->left */
        test    ecx, ecx
        je      go_up

        /* left child exists: go left, then right as far as possible */
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 8]    /* node->right */
        test    ecx, ecx
        je      inc_counter
    go_right_loop:
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 8]
        test    ecx, ecx
        jne     go_right_loop
        jmp     inc_counter

    go_up:
        /* no left child: go up until we come from a right child */
        mov     ecx, dword ptr [eax + 4]    /* node->parent */
        cmp     eax, dword ptr [ecx + 0xC]  /* compare node with parent->left */
        jne     check_left
    up_loop:
        mov     eax, ecx
        mov     ecx, dword ptr [ecx + 4]    /* node->parent */
        cmp     eax, dword ptr [ecx + 0xC]  /* compare node with parent->left */
        je      up_loop

    check_left:
        cmp     dword ptr [eax + 0xC], ecx  /* compare node->left with parent */
        je      inc_counter
        mov     eax, ecx

    inc_counter:
        mov     edi, dword ptr [edx]        /* *counter */
        inc     edi
        cmp     eax, esi
        mov     dword ptr [edx], edi
        jne     loop_start

        pop     edi
    done:
        pop     esi
        ret
    }
}
