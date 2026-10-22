/*
 * FUN_10036860 (10 B) - __stdcall, RET 0x4.  Loads this->field_0x14 and
 * returns it.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10036860(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x14]
        ret     0x4
    }
}
