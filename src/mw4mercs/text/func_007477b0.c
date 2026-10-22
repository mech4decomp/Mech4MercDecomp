/*
 * FUN_007477b0 (50 B) — __cdecl. While g_8b2870 != 0, pops the top entry
 * from a stack array (base g_8b286c), decrements the count, calls
 * FUN_007536a0(entry) (ECX = entry), clears bit 0x40 of entry->[4], and
 * loops until the count reaches 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_8b2870;
extern unsigned int g_8b286c;
extern void __cdecl FUN_007536a0(void);

__declspec(naked) void __cdecl FUN_007477b0(void)
{
    __asm {
        mov     eax, dword ptr [g_8b2870]
        test    eax, eax
        jz      L_e1
        push    esi
    L_ba:
        mov     ecx, dword ptr [g_8b286c]
        mov     esi, dword ptr [ecx + eax*4 - 4]
        dec     eax
        mov     ecx, esi
        mov     dword ptr [g_8b2870], eax
        call    FUN_007536a0
        mov     eax, dword ptr [g_8b2870]
        /* __emit: MSVC6 encodes `and word ptr [esi+4],0xffbf` as imm8
           (66 83 66 04 BF) sign-extended; reference uses imm16 (66 81 66 04 BF FF) */
        __emit 0x66
        __emit 0x81
        __emit 0x66
        __emit 0x04
        __emit 0xBF
        __emit 0xFF
        test    eax, eax
        jnz     L_ba
        pop     esi
    L_e1:
        ret
    }
}
