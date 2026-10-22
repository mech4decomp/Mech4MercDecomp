/*
 * FUN_006F83C0 (104 B) — __thiscall: string search in array of pairs.
 *
 * ECX = this (object with +0x10 = array ptr, +0x14 = count).
 * 1 stack param: search string. Array elements are 8-byte pairs:
 * [+0] = string ptr, [+4] = value. Searches for matching string
 * using byte-by-byte comparison. Returns index on match, or -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006f83c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        push    edi
        jz      l_not_found
        mov     eax, dword ptr [ecx + 0x14]
        xor     ebp, ebp
        test    eax, eax
        jle     l_not_found
        mov     edi, dword ptr [ecx + 0x10]
    l_loop:
        mov     ecx, dword ptr [edi]
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ecx]
    l_cmp_loop:
        mov     bl, byte ptr [ecx]
        mov     dl, bl
        cmp     bl, byte ptr [esi]
        jnz     l_cmp_diff
        test    dl, dl
        jz      l_cmp_eq
        mov     bl, byte ptr [ecx + 1]
        mov     dl, bl
        cmp     bl, byte ptr [esi + 1]
        jnz     l_cmp_diff
        add     ecx, 2
        add     esi, 2
        test    dl, dl
        jnz     l_cmp_loop
    l_cmp_eq:
        xor     ecx, ecx
        jmp     l_cmp_done
    l_cmp_diff:
        sbb     ecx, ecx
        sbb     ecx, -1
    l_cmp_done:
        test    ecx, ecx
        jz      l_found
        inc     ebp
        add     edi, 8
        cmp     ebp, eax
        jl      l_loop
    l_not_found:
        pop     edi
        pop     esi
        pop     ebp
        or      eax, -1
        pop     ebx
        ret     4
    l_found:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     4
    }
}
