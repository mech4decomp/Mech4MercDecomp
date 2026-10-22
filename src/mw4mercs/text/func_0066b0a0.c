/*
 * FUN_0066b0a0 (106 B) — __cdecl (1 arg, RET 0x4).
 *
 * Switch on (arg-1) in [0..7] via a jump table at 0x0066b10c, returning
 * a size constant per case; default asserts via FUN_006fab90 and returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0066b0a0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x8]
        dec     eax
        cmp     eax, 0x7
        ja      L_f2
        jmp     dword ptr [eax*4 + 0x66b10c]
    L_b3:
        mov     eax, 0x3c
        pop     ebp
        ret     0x4
    L_bc:
        mov     eax, 0x44
        pop     ebp
        ret     0x4
    L_c5:
        mov     eax, 0x40
        pop     ebp
        ret     0x4
    L_ce:
        mov     eax, 0x9c
        pop     ebp
        ret     0x4
    L_d7:
        mov     eax, 0x6c
        pop     ebp
        ret     0x4
    L_e0:
        mov     eax, 0x54
        pop     ebp
        ret     0x4
    L_e9:
        mov     eax, 0x64
        pop     ebp
        ret     0x4
    L_f2:
        push    0x796c58
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_104
        int     3
    L_104:
        xor     eax, eax
        pop     ebp
        ret     0x4
    }
}
