/*
 * FUN_00628a80 (19 B) -- ABL accumulator: adds the stack arg (float) into
 * global 0x007dddb8. __stdcall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007dddb8;   /* DAT_007dddb8 */

__declspec(naked) void FUN_00628a80(void)
{
    __asm {
        fld     dword ptr [g_007dddb8]
        fadd    dword ptr [esp + 0x4]
        fstp    dword ptr [g_007dddb8]
        ret     0x4
    }
}
