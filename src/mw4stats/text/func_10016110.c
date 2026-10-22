/*
 * FUN_10016110 (28 B) - __stdcall. Compares 4 dwords at param_2
 * against the constant table at 0x10021438 using REPE CMPSD.
 * Returns nonzero (SETZ) if all 4 match.
 *
 * __stdcall, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10016110(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     ecx, 4
        mov     edi, 0x10021438
        xor     eax, eax
        repe    cmpsd
        pop     edi
        pop     esi
        setz    al
        ret     8
    }
}
