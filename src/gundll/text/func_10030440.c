/*
 * FUN_10030440 (9 B) - __stdcall, RET 0x4.  Returns the double constant at
 * g_1004af60 (module .data).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern double g_1004af60;   /* module .data double */

__declspec(naked) void __stdcall FUN_10030440(void)
{
    __asm {
        fld     qword ptr [g_1004af60]
        ret     4
    }
}
