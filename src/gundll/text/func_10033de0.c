/*
 * FUN_10033DE0 (14 B) - __stdcall, RET 0x8.  Sets arg0->field_1C (byte) = arg1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10033DE0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     cl, byte ptr [esp + 0x8]
        mov     byte ptr [eax + 0x1c], cl
        ret     0x8
    }
}
