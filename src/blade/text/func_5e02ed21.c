/*
 * FUN_5e02ed21 (28 B) — one-time init guard. If the global flag is zero,
 * calls FUN_5e02e939(-3) then sets the flag to 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77af48;                 /* one-time init flag */
extern void __cdecl FUN_5e02e939(int); /* init routine */

__declspec(naked) void FUN_5e02ed21(void)
{
    __asm {
        cmp     dword ptr [g_5e77af48], 0
        jnz     L_done
        push    -3
        call    FUN_5e02e939
        pop     ecx
        mov     dword ptr [g_5e77af48], 1
L_done:
        ret
    }
}
