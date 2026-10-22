/*
 * FUN_1001AF20 (18 B) - __stdcall, RET 0x8.  Returns (arg1 == arg2).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) int __stdcall FUN_1001AF20(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        xor     eax, eax
        cmp     ecx, edx
        sete    al
        ret     8
    }
}
