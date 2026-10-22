/*
 * FUN_100367F0 (29 B) - __stdcall, RET 0x4.  Returns
 * arg0->field+0x20's vtable[2] (+8) if non-null, else 0.  (Transcribed
 * from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100367F0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0x20]
        mov     eax, dword ptr [ecx]
        add     eax, 8
        mov     eax, dword ptr [eax]
        test    eax, eax
        je      L_1
        add     eax, 0x18
        ret     0x4
    L_1:
        xor     eax, eax
        ret     0x4
    }
}
