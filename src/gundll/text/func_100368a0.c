/*
 * FUN_100368A0 (8 B) - __stdcall, RET 0x8.  Returns HRESULT 0x80004005
 * (E_FAIL).  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100368A0(void)
{
    __asm {
        mov     eax, 0x80004005
        ret     0x8
    }
}
