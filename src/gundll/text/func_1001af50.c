/*
 * FUN_1001AF50 (7 B) - __stdcall, RET 0x4.  Returns arg1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) int __stdcall FUN_1001AF50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        ret     4
    }
}
