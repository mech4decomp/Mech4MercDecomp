/*
 * FUN_0070D1C0 (34 B) — ReleaseDC wrapper.
 *
 * Calls FUN_0070d1a0(), then if global DAT_00858c00 != NULL,
 * calls ReleaseDC(NULL, DAT_00858c00) via IAT and clears the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0070d1a0(void);
extern void *g_858c00;              /* DAT_00858c00 */
extern void *g_76b488;              /* IAT: ReleaseDC */

__declspec(naked) void FUN_0070d1c0(void)
{
    __asm {
        call    FUN_0070d1a0
        mov     eax, dword ptr [g_858c00]
        test    eax, eax
        jz      L1
        push    eax
        push    0
        call    dword ptr [g_76b488]
        mov     dword ptr [g_858c00], 0
L1:
        ret
    }
}
