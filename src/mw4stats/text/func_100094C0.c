/*
 * MW4Stats.dll - FUN_100094c0 (0x100094C0, 23 B, __stdcall)
 * Calls FUN_10009460(param, 0x10025cf8, 0x10025e70).
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_10009460(void);

__declspec(naked) void FUN_100094c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    0x10025e70
        push    0x10025cf8
        push    eax
        call    FUN_10009460
        ret     4
    }
}
