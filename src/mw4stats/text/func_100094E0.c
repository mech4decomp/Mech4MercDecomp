/*
 * MW4Stats.dll - FUN_100094e0 (0x100094E0, 23 B, __stdcall)
 * Calls FUN_10009460(param, 0x10025e74, 0x10025eac).
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_10009460(void);

__declspec(naked) void FUN_100094e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    0x10025eac
        push    0x10025e74
        push    eax
        call    FUN_10009460
        ret     4
    }
}
