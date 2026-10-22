/*
 * FUN_10032640 (10 B) - __stdcall, RET 0x4.  Returns this->field at +0x10.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10032640(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     eax, dword ptr [eax + 0x10]
        ret     0x4
    }
}
