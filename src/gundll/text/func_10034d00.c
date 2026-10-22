/*
 * FUN_10034d00 (10 B) - __stdcall, RET 0x4.  Returns arg1->+0xc.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10034d00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     eax, dword ptr [eax + 0xc]
        ret     4
    }
}
