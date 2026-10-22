/*
 * FUN_007175D0 (24 B) — Thunk: calls FUN_00717590 (cleanup), clears the
 * flag at 0x0087c5b0, sets the flag at 0x0087c5b1, then jumps to
 * FUN_007178F0.
 *
 * Match: target 100%
 */

extern void __cdecl FUN_00717590(void);
extern void __cdecl FUN_007178F0(void);

extern char g_87c5b0;   /* 0x0087c5b0 flag */
extern char g_87c5b1;   /* 0x0087c5b1 flag */

__declspec(naked) void FUN_007175D0(void)
{
    __asm {
        call    FUN_00717590
        mov     byte ptr [g_87c5b0], 0
        mov     byte ptr [g_87c5b1], 1
        jmp     FUN_007178F0
    }
}
