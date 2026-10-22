/*
 * FUN_100312B0 (10 B) - __stdcall, RET 0x4.  Returns arg1 + 0x40.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100312B0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        add     eax, 0x40
        ret     0x4
    }
}
