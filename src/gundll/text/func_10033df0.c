/*
 * FUN_10033DF0 (10 B) - __stdcall, RET 0x4.  Returns arg0->field_1C (byte).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10033DF0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     al, byte ptr [eax + 0x1c]
        ret     0x4
    }
}
