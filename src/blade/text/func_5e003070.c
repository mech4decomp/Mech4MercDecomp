/*
 * FUN_5e003070 (28 B) — __stdcall, RET 8 (2 stack params). Shift left by
 * param_2 if >= 0, else shift right by -param_2.
 *
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e003070(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        test    ecx, ecx
        jge     L_3083
        mov     eax, dword ptr [esp + 0x4]
        neg     ecx
        sar     eax, cl
        ret     0x8
L_3083:
        mov     eax, dword ptr [esp + 0x4]
        shl     eax, cl
        ret     0x8
    }
}
