/*
 * FUN_5e030636 (60 B) - parse a numeric string into a 96-bit value via
 * FUN_5e030165, then compare against a reference value via FUN_5e02df95;
 * ORs in flag 2 if the comparison returns 1.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e030165(void);
extern void __cdecl FUN_5e02df95(void);

__declspec(naked) void FUN_5e030636(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        xor     eax, eax
        push    esi
        push    eax
        push    eax
        push    eax
        lea     eax, [ebp-0xc]
        push    dword ptr [ebp+0x14]
        push    dword ptr [ebp+0x10]
        push    dword ptr [ebp+0xc]
        push    eax
        call    FUN_5e030165
        push    dword ptr [ebp+0x8]
        mov     esi, eax
        lea     eax, [ebp-0xc]
        push    eax
        call    FUN_5e02df95
        add     esp, 0x24
        cmp     eax, 1
        jnz     L66d
        or      esi, 2
    L66d:
        mov     eax, esi
        pop     esi
        leave
        ret
    }
}
