/*
 * FUN_10033DA0 (10 B) - __stdcall, RET 0x4.  Returns arg0->field_C.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10033DA0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0xc]
        ret     0x4
    }
}
