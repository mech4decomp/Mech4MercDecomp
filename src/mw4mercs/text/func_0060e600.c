/*
 * FUN_0060E600 (24 B) — __thiscall. If this->[0x4] is non-null, calls
 * FUN_005f01e0 on this->[0x4]->[0x504]; returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005f01e0(void);

__declspec(naked) void __fastcall FUN_0060E600(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        jz      L_612
        mov     ecx, dword ptr [eax + 0x504]
        call    FUN_005f01e0
L_612:
        mov     eax, 0x1
        ret
    }
}
