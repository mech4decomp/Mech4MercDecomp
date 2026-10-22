/*
 * FUN_00628a70 (12 B) -- ABL setter: stores the stack arg into global
 * 0x007dddb4. __stdcall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dddb4;   /* DAT_007dddb4 */

__declspec(naked) void FUN_00628a70(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [g_007dddb4], eax
        ret     0x4
    }
}
