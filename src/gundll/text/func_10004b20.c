/*
 * FUN_10004B20 (23 B) - __stdcall, RET 0x8.  Returns (arg1->field_0x34 ==
 * arg2) as a bool.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10004B20(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [edx + 0x34]
        xor     eax, eax
        cmp     ecx, esi
        sete    al
        pop     esi
        ret     0x8
    }
}
