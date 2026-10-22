/*
 * FUN_1001AF60 (12 B) - __stdcall, RET 0x4.  Returns arg1->field_0 + arg1->field_4.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) int __stdcall FUN_1001AF60(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx + 4]
        add     eax, dword ptr [ecx]
        ret     4
    }
}
