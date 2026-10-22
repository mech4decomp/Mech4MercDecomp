/*
 * FUN_00606e20 (39 B) — destroys the MWMap object: calls FUN_00501b40,
 * frees it (FUN_004084e0), and clears g_007f27c4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f27c4;

extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00606e20(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007f27c4]
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     dword ptr [g_007f27c4], 0x0
        pop     esi
        ret
    }
}
