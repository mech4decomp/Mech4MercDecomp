/*
 * FUN_10031AB0 (10 B) - __stdcall, RET 0x4.  Returns this->field at +0x2c.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10031AB0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     eax, dword ptr [eax + 0x2c]
        ret     0x4
    }
}
