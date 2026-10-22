/*
 * FUN_100196c0 (28 B) - __stdcall, RET 0x4 (1 arg). Registration helper:
 * if this->obj(+0xc) is null returns 0xC112000E; else tail-jumps to
 * FUN_1001c770(this).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c770(void);

__declspec(naked) void __stdcall FUN_100196c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        jne     L_ok
        mov     eax, 0xc112000e
        ret     4
    L_ok:
        mov     dword ptr [esp + 4], eax
        jmp     FUN_1001c770
    }
}
