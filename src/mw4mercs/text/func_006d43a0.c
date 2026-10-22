/*
 * FUN_006D43A0 (188 B) — Rectangle/region clipping calculator.
 *
 * __thiscall (ECX = output struct), RET 0x10 (4 stack params).
 * Computes clipped rectangle coordinates from input parameters.
 * Returns 1 if valid, 0 if degenerate.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_006D43A0(int param1, int param2, int param3, int param4)
{
    __asm {
        push    ecx
        mov     eax, [esp + 0x08]
        push    ebx
        mov     ebx, [eax + 0x08]
        push    ebp
        mov     ebp, [eax + 0x04]
        mov     edx, [ebp + 0x08]
        push    esi
        mov     [esp + 0x0c], edx
        mov     [ecx + 0x0c], edx
        mov     edx, [esp + 0x1c]
        push    edi
        mov     edi, [esp + 0x24]
        imul    edx, edi
        mov     esi, ebx
        sub     esi, edx
        mov     eax, 0
        sets    al
        dec     eax
        and     eax, esi
        mov     [ecx], eax
        mov     eax, [ebp + 0x04]
        sub     eax, edx
        add     eax, ebx
        cmp     eax, edi
        jle     l_clamp_b
        mov     [ecx + 0x04], edi
        jmp     l_check_equal
    l_clamp_b:
        xor     edx, edx
        test    eax, eax
        setl    dl
        dec     edx
        and     edx, eax
        mov     [ecx + 0x04], edx
    l_check_equal:
        mov     eax, [ecx]
        cmp     eax, [ecx + 0x04]
        jnz     l_not_equal
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret     0x10
    l_not_equal:
        mov     esi, [esp + 0x1c]
        mov     edx, [esp + 0x18]
        imul    esi, edi
        mov     eax, [edx + 0x0c]
        sub     eax, esi
        jns     l_set_offset
        mov     esi, [esp + 0x10]
        add     esi, eax
        mov     [ecx + 0x0c], esi
        mov     dword ptr [ecx + 0x08], 0
        jmp     l_check_size
    l_set_offset:
        mov     [ecx + 0x08], eax
    l_check_size:
        mov     eax, [ecx + 0x08]
        mov     esi, [ecx + 0x0c]
        add     esi, eax
        cmp     esi, edi
        jle     l_check_zero
        sub     edi, eax
        mov     [ecx + 0x0c], edi
    l_check_zero:
        mov     eax, [ecx + 0x0c]
        test    eax, eax
        jnz     l_return_true
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret     0x10
    l_return_true:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebp
        mov     [ecx + 0x10], edx
        mov     [ecx + 0x14], al
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
