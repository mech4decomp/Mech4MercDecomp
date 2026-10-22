/*
 * FUN_1002F510 (24 B) - __stdcall, RET 0x8.  Copies arg1->field_0x38 and
 * arg1->field_0x34 into a 8-byte struct at arg2, returns 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1002F510(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [eax + 0x38]
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [ecx], edx
        mov     eax, dword ptr [eax + 0x34]
        mov     dword ptr [ecx + 0x4], eax
        xor     eax, eax
        ret     0x8
    }
}
