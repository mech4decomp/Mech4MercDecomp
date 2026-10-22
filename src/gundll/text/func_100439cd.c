/*
 * FUN_100439cd (45 B) — __cdecl.
 * Conditional argument normalization before a helper call.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100439fa(void);

__declspec(naked) void __cdecl FUN_100439cd(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        cmp     dword ptr [ebp + 0x10], 0xa
        jnz     L2
        cmp     dword ptr [ebp + 0x8], 0x0
        jge     L2
        push    0x1
        push    0xa
        jmp     L3
    L2:
        push    0x0
        push    dword ptr [ebp + 0x10]
    L3:
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    FUN_100439fa
        mov     eax, dword ptr [ebp + 0xc]
        add     esp, 0x10
        pop     ebp
        ret
    }
}
