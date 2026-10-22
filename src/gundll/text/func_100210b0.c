/*
 * FUN_100210B0 (28 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else tail-jumps to
 * FUN_1001c770 with this as its argument.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c770(void);

__declspec(naked) void __stdcall FUN_100210B0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        jne     L_c3
        mov     eax, 0xc112000e
        ret     4
L_c3:
        mov     dword ptr [esp + 0x4], eax
        jmp     FUN_1001c770
    }
}
