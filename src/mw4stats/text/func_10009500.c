/*
 * MW4Stats.dll - FUN_10009500 (0x10009500, 23 B, __stdcall)
 * Calls FUN_10009460(param, 0x10025eb0, 0x10025ed8).
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_10009460(void);

__declspec(naked) void FUN_10009500(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    0x10025ed8
        push    0x10025eb0
        push    eax
        call    FUN_10009460
        ret     4
    }
}
