/*
 * FUN_10033D90 (10 B) - __stdcall, RET 0x4.  Returns arg0->field_8.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10033D90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        ret     0x4
    }
}
