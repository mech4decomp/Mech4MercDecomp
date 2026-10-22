/*
 * FUN_00417400 (39 B) - __cdecl "Stuff::SafeChainLink" teardown.
 * If g_007b8c1c is non-null, calls FUN_00415e30 then frees via
 * FUN_004084e0; clears g_007b8c1c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void *);
extern int  g_007b8c1c;

__declspec(naked) void FUN_00417400(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b8c1c]
        test    esi, esi
        jz      L_clear
        mov     ecx, esi
        call    FUN_00415e30
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_clear:
        mov     dword ptr [g_007b8c1c], 0
        pop     esi
        ret
    }
}
