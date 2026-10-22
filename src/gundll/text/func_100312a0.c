/*
 * FUN_100312A0 (14 B) - __stdcall, RET 0x8.  Sets arg1->+0x3c = arg2.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100312A0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [eax + 0x3c], ecx
        ret     0x8
    }
}
