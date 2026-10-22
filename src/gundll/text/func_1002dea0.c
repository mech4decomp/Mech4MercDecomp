/*
 * FUN_1002DEA0 (36 B) - __stdcall, RET 0x8 (2 args).
 * If arg2 is null, store 0 into *arg1 and return; else tail-jump
 * FUN_1001c2d0(arg2, arg1).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_1001c2d0(void);   /* rel32 tail-jump */

__declspec(naked) void __stdcall FUN_1002DEA0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        xor     eax, eax
        test    ecx, ecx
        jne     L_deb3
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [ecx], eax
        ret     0x8
    L_deb3:
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [esp + 0x8], edx
        mov     dword ptr [esp + 0x4], ecx
        jmp     FUN_1001c2d0
    }
}
