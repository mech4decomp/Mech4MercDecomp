/*
 * ZlogLib.dll - FUN_10001ce9 (0x10001CE9, 12 B, __stdcall)
 * Calls FUN_10001e84 with the address of global DAT_10027040.
 * Transcribed from ZlogLib.dll reference bytes.
 */

extern char g_10027040[];
extern void __cdecl FUN_10001e84(void);

__declspec(naked) void FUN_10001ce9(void)
{
    __asm {
        push offset g_10027040
        call FUN_10001e84
        pop ecx
        ret
    }
}
