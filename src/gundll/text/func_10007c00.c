/*
 * FUN_10007C00 (18 B) - __thiscall, RET 0x4.  Constructor: stores arg1 into
 * this->field_0x00 and zeroes this->field_0x04.  Returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_10007C00(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 4], 0
        ret     0x4
    }
}
