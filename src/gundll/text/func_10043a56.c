/*
 * FUN_10043a56 (42 B) — __cdecl.
 * If (param_3 == 10 && param_1 < 0) call FUN_100439fa(1,1,param_3,param_2,param_1).
 * Returns param_2.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100439fa(void);

__declspec(naked) void FUN_10043a56(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        xor     eax, eax
        cmp     dword ptr [ebp + 0x10], 0xa
        jne     skip
        cmp     dword ptr [ebp + 0x8], eax
        jge     skip
        push    1
        pop     eax
    skip:
        push    eax
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    FUN_100439fa
        mov     eax, dword ptr [ebp + 0xc]
        add     esp, 0x10
        pop     ebp
        ret
    }
}
