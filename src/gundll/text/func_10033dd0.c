/*
 * FUN_10033DD0 (10 B) - __stdcall, RET 0x4.  Returns arg0->field_14.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10033DD0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x14]
        ret     0x4
    }
}
