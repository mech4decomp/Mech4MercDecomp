/*
 * FUN_10044979 (60 B) -- __thiscall.
 * Calls FUN_100444a8 with a local buffer and several params, then
 * FUN_10041e07; ORs 2 into the result if it returns 1.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100444a8(void);
extern void __cdecl FUN_10041e07(void);

__declspec(naked) void FUN_10044979(void)
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
        lea     eax, [ebp - 0xc]
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    eax
        call    FUN_100444a8
        push    dword ptr [ebp + 0x8]
        mov     esi, eax
        lea     eax, [ebp - 0xc]
        push    eax
        call    FUN_10041e07
        add     esp, 0x24
        cmp     eax, 0x1
        jnz     L_out
        or      esi, 0x2
L_out:
        mov     eax, esi
        pop     esi
        leave
        ret
    }
}
