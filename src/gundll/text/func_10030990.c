/*
 * FUN_10030990 (10 B) - __stdcall, RET 0x4.  Returns arg0->field_0x44.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10030990(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     eax, dword ptr [eax + 0x44]
        ret     4
    }
}
