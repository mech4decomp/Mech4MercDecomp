/*
 * FUN_0040D640 (70 B) — __cdecl (RET 0). Busy-waits 0x2710 iterations
 * calling FUN_00415020, then runs a histogram loop: 0x2710 times calls
 * FUN_00415040(0xa) and increments the selected bucket.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_00415040(void);

__declspec(naked) void FUN_0040D640(void)
{
    __asm {
        sub     esp, 0x28
        push    esi
        mov     esi, 0x2710
L_40d649:
        call    FUN_00415020
        fstp    st(0)
        dec     esi
        jne     L_40d649
        push    edi
        mov     ecx, 0xa
        xor     eax, eax
        lea     edi, [esp + 8]
        rep     stosd
        mov     esi, 0x2710
        pop     edi
L_40d667:
        push    0xa
        call    FUN_00415040
        mov     ecx, dword ptr [esp + eax*4 + 8]
        lea     eax, [esp + eax*4 + 8]
        add     esp, 4
        inc     ecx
        dec     esi
        mov     dword ptr [eax], ecx
        jne     L_40d667
        mov     al, 1
        pop     esi
        add     esp, 0x28
        ret
    }
}
