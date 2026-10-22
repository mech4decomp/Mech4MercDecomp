/*
 * FUN_006488f0 (24 B) — While the byte at 0x8058b0 equals 0x20 (space),
 * repeatedly call FUN_00648fe0.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8058b0;
extern void __cdecl FUN_00648fe0(void);

__declspec(naked) void __cdecl FUN_006488f0(void)
{
    __asm {
        cmp     byte ptr [g_8058b0], 0x20
        jnz     l_07
    l_f9:
        call    FUN_00648fe0
        cmp     byte ptr [g_8058b0], 0x20
        jz      l_f9
    l_07:
        ret
    }
}
