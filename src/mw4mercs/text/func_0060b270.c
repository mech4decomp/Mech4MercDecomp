/*
 * FUN_0060B270 (27 B) — __thiscall (ECX = this). If this->[0x4] != 0,
 * calls FUN_005a3890() with ECX = this->[0x4]->[0x9a4] and returns
 * (result & 0xff); else returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005a3890(void);

__declspec(naked) void __fastcall FUN_0060B270(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        jz      L_288
        mov     ecx, dword ptr [eax + 0x9a4]
        call    FUN_005a3890
        and     eax, 0xff
        ret
L_288:
        xor     eax, eax
        ret
    }
}
