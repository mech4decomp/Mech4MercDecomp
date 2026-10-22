/*
 * FUN_5e003750 (48 B) — DirectDraw wrapper: indexed getter.
 * If param_2 < 0x98, writes obj[param_2*4 + 0x45ac] to *param_3 and
 * returns 0; otherwise writes 0 to *param_3 and returns 0.
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e003750(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        cmp     eax, 0x98
        jg      L771
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx + eax*4 + 0x45ac]
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [eax], edx
        xor     eax, eax
        ret     0xc
    L771:
        mov     ecx, dword ptr [esp + 0xc]
        xor     eax, eax
        mov     dword ptr [ecx], 0x0
        ret     0xc
    }
}
