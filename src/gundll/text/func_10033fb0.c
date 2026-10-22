/*
 * FUN_10033FB0 (14 B) - __stdcall, RET 0x8.  Sets arg0->field_18 = arg1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10033FB0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [eax + 0x18], ecx
        ret     0x8
    }
}
