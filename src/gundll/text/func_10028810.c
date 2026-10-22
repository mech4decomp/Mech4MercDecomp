/*
 * FUN_10028810 (28 B) - __stdcall, RET 0x4. If arg1->+0xc is null returns
 * 0xC112000E; else tail-jumps to FUN_1001c8d0(arg1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c8d0(void);   /* rel32 jmp */

__declspec(naked) int __stdcall FUN_10028810(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        jne     L_23
        mov     eax, 0xc112000e
        ret     4
L_23:
        mov     dword ptr [esp + 4], eax
        jmp     FUN_1001c8d0
    }
}
