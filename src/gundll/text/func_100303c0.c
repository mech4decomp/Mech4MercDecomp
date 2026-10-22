/*
 * FUN_100303C0 (29 B) - __stdcall, RET 0x4.  Returns obj->field_0x20's
 * vtable[2] (i.e. *(*(obj->field_0x20)+8)) + 0x18, or NULL if absent.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100303C0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 0x20]
        mov     eax, dword ptr [ecx]
        add     eax, 8
        mov     eax, dword ptr [eax]
        test    eax, eax
        je      retnull
        add     eax, 0x18
        ret     4
retnull:
        xor     eax, eax
        ret     4
    }
}
