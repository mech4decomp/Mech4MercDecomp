/*
 * FUN_10030040 (10 B) - __stdcall, RET 0x4.  Returns arg1->field_0x38.
 * (Transcribed from reference bytes; gaptext.  Candidate 0x10030018 was
 * inline byte-class data; real entry at 0x10030040.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10030040(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x38]
        ret     0x4
    }
}
