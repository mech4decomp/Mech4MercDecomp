/*
 * FUN_10032670 (9 B) - __stdcall, RET 0x4.  Returns the double at 0x1004af60
 * in ST(0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern double g_1004af60;   /* module .data double */

__declspec(naked) void __stdcall FUN_10032670(void)
{
    __asm {
        fld     qword ptr [g_1004af60]
        ret     0x4
    }
}
