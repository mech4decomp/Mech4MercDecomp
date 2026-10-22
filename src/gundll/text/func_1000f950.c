/*
 * FUN_1000f950 (28 B) - __stdcall, RET 0x4 (1 arg).
 * If this->field_0xc is zero, returns error 0xc112000e. Otherwise tail-jumps
 * to FUN_1001c8d0(this).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);   /* rel32 jmp */

__declspec(naked) void __stdcall FUN_1000f950(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        jne     L_tail
        mov     eax, 0xc112000e
        ret     0x4
L_tail:
        mov     dword ptr [esp + 0x4], eax
        jmp     FUN_1001c8d0
    }
}
