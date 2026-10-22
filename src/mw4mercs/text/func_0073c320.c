/*
 * FUN_0073c320 (45 B) — __cdecl, no params.
 *
 * If g_858974 is non-null and its first byte is non-zero, calls
 * FUN_0070d1a0() and clears g_858974. Otherwise sets g_858974 to
 * "Debug.txt" (0x7a719c) and jumps to FUN_0070d040().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_858974;
extern void __cdecl FUN_0070d1a0(void);
extern void __cdecl FUN_0070d040(void);

__declspec(naked) void __cdecl FUN_0073c320(void)
{
    __asm {
        mov     eax, dword ptr [g_858974]
        test    eax, eax
        jz      L_else
        cmp     byte ptr [eax], 0
        jz      L_else
        call    FUN_0070d1a0
        mov     dword ptr [g_858974], 0
        ret
L_else:
        mov     dword ptr [g_858974], 0x7a719c
        jmp     FUN_0070d040
    }
}
