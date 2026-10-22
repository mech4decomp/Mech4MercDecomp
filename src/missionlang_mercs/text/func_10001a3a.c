/*
 * FUN_10001a3a (60 B) — create a private heap (0x1000 initial), run an
 * init routine, destroy the heap on failure; return 1 on success.
 *
 * __cdecl, 1 arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10001a3a (60 B) -- __cdecl create the TLS heap:
 * g_100057a8 = HeapCreate(param==0, 0x1000, 0); if null -> 0;
 * if !init_table() { HeapDestroy; return 0; } return 1.
 * Layout: the `return 1` block must fall at the END (after return 0) --
 * achieved with `if (!x) return 0; ... return 1;` structure, not inline.
 */

extern void *(__stdcall *g_HeapCreate)(unsigned int, unsigned int, unsigned int); /* IAT 0x10004000 */
extern int (__stdcall *g_HeapDestroy)(void *);        /* IAT 0x10004054 */

extern void *g_100057a8;                              /* 0x100057a8 heap handle */

extern int __cdecl FUN_10002785(void);

__declspec(naked) int __cdecl FUN_10001a3a(void)
{
    __asm {
        xor     eax, eax
        push    0
        cmp     dword ptr [esp + 8], eax
        push    0x1000
        setz    al
        push    eax
        call    dword ptr [g_HeapCreate]
        test    eax, eax
        mov     dword ptr [g_100057a8], eax
        jz      L_a6f
        call    FUN_10002785
        test    eax, eax
        jnz     L_a72
        push    dword ptr [g_100057a8]
        call    dword ptr [g_HeapDestroy]
L_a6f:
        xor     eax, eax
        ret
L_a72:
        push    1
        pop     eax
        ret
    }
}
