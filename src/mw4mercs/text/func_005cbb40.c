/*
 * FUN_005cbb40 (77 B) — Copy a run of 12-byte elements backwards.
 *
 * __cdecl, RET 0 (3 params).
 *   param_1 (ESP+0x8) = source begin
 *   param_2 (ESP+0xc) = destination
 *   (ESP+0x4)         = source end
 *
 * Count = (param_2 - param_1) / 12 (magic-number division by 12).
 * Copies each 12-byte element from [src+8] back to dest, returning
 * the end of the destination range.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void *__stdcall FUN_005cbb40(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [esp + 0x8]
        sub     edx, edi
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        jle     l_89
        push    esi
        mov     esi, ecx
        lea     eax, [edi + 0x8]
        sub     esi, edi
l_6b:
        mov     edi, dword ptr [eax + -0x8]
        mov     dword ptr [ecx], edi
        mov     edi, dword ptr [eax + -0x4]
        mov     dword ptr [ecx + 0x4], edi
        mov     edi, dword ptr [eax]
        mov     dword ptr [esi + eax*0x1], edi
        add     ecx, 0xc
        add     eax, 0xc
        dec     edx
        jnz     l_6b
        pop     esi
        mov     eax, ecx
        pop     edi
        ret
l_89:
        mov     eax, ecx
        pop     edi
        ret
    }
}
