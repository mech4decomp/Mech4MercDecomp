/*
 * FUN_1001e2a0 (28 B) - __stdcall, RET 0x4.  If this->obj(+0xc) is null
 * return 0xc112000e; else tail-jump to FUN_1001c770(this).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_1001c770(void);   /* rel32 tail call */

__declspec(naked) void __stdcall FUN_1001e2a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        jne     L2b3
        mov     eax, 0xc112000e
        ret     4
L2b3:
        mov     dword ptr [esp + 4], eax
        jmp     FUN_1001c770
    }
}
