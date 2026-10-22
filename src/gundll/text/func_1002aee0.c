/*
 * FUN_1002AEE0 (28 B) - __stdcall, RET 0x4.  If arg1->+0xc is null return
 * 0xc112000e; else tail-jump FUN_1001c8d0(arg1).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_1001c8d0(void);   /* rel32 tail-jump */

__declspec(naked) void __stdcall FUN_1002AEE0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        jne     L_aef3
        mov     eax, 0xc112000e
        ret     0x4
    L_aef3:
        mov     dword ptr [esp + 0x4], eax
        jmp     FUN_1001c8d0
    }
}
