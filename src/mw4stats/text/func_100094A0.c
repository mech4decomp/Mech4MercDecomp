/*
 * MW4Stats.dll - FUN_100094a0 (0x100094A0, 23 B, __stdcall)
 * Calls FUN_10009460(param, 0x100259d0, 0x10025cf4).
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_10009460(void);

__declspec(naked) void FUN_100094a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    0x10025cf4
        push    0x100259d0
        push    eax
        call    FUN_10009460
        ret     4
    }
}
