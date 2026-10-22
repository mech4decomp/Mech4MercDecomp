/*
 * FUN_10031A90 (10 B) - __stdcall, RET 0x4.  Returns this->field at +0x18.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10031A90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     eax, dword ptr [eax + 0x18]
        ret     0x4
    }
}
