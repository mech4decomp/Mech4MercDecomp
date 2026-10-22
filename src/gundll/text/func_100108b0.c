/*
 * FUN_100108b0 (28 B) - __stdcall, RET 0x4.
 * If arg->+0xc is null returns 0xc112000e; else tail-calls FUN_1001c770(arg).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c770(void);   /* rel32 jmp (tail call) */

__declspec(naked) void __stdcall FUN_100108b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        jne     L13
        mov     eax, 0xc112000e
        ret     0x4
    L13:
        mov     dword ptr [esp + 4], eax
        jmp     FUN_1001c770
    }
}
