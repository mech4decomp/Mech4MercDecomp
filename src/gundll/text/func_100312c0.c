/*
 * FUN_100312C0 (10 B) - __stdcall, RET 0x4.  Returns arg1->+0x7c.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100312C0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x7c]
        ret     0x4
    }
}
