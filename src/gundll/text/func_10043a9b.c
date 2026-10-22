/*
 * FUN_10043a9b (49 B) — __cdecl.
 * Calls FUN_10043acc(param_1, param_2, param_3, param_4, flag); returns param_3.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10043acc(void);

__declspec(naked) void FUN_10043a9b(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        xor     eax, eax
        cmp     dword ptr [ebp + 0x14], 0xa
        jnz     call_it
        cmp     dword ptr [ebp + 0xc], eax
        jg      call_it
        jl      set_one
        cmp     dword ptr [ebp + 0x8], eax
        jnc     call_it
    set_one:
        push    1
        pop     eax
    call_it:
        push    eax
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    FUN_10043acc
        mov     eax, dword ptr [ebp + 0x10]
        pop     ebp
        ret
    }
}
