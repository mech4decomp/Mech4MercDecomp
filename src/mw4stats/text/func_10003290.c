/*
 * MW4Stats.dll - FUN_10003290 (0x10003290, 13 B, __thiscall)
 * Forwarder: passes arg through to FUN_10003790. RET 0x4.
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_10003790(void);

__declspec(naked) void FUN_10003290(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    FUN_10003790
        ret     4
    }
}
