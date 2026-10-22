/*
 * FUN_10004B10 (7 B) - __stdcall, RET 0x4.  Returns its first argument
 * (a getter/accessor stub).  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10004B10(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        ret     0x4
    }
}
