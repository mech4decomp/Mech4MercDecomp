/*
 * FUN_1000d990 (28 B) - __stdcall, RET 0x4.
 * If (arg+0xc)==0 return 0xc112000e; else tail-jump FUN_1001ca20(arg).
 *
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca20(void);   /* rel32 jmp thunk */

__declspec(naked) void __stdcall FUN_1000d990(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        jne     L1
        mov     eax, 0xc112000e
        ret     0x4
    L1:
        mov     dword ptr [esp + 0x4], eax
        jmp     FUN_1001ca20
    }
}
