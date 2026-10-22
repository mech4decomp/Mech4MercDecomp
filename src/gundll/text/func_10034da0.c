/*
 * FUN_10034DA0 (10 B) - __stdcall, RET 0x4.  Returns arg0 + 0x54 (a pointer
 * to a member sub-object).  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10034DA0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        add     eax, 0x54
        ret     0x4
    }
}
