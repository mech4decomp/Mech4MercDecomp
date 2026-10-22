/*
 * FUN_10033D50 (10 B) - __stdcall, RET 0x4.  Returns the dword at
 * arg1 - 0x14 (a field of the object pointed to by arg1).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10033D50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax - 0x14]
        ret     4
    }
}
