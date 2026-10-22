/*
 * FUN_0064a840 (42 B) — guarded cleanup.
 *
 * If byte [0x007b5a38] is nonzero, calls FUN_0064a820, then clears
 * [0x007b5a38], [0x0080d998], and [0x0080d99c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7b5a38;
extern int g_80d998;
extern int g_80d99c;
extern void __cdecl FUN_0064a820(void);

__declspec(naked) void __cdecl FUN_0064a840(void)
{
    __asm {
        mov     al, byte ptr [g_7b5a38]
        test    al, al
        jz      L_done
        call    FUN_0064a820
        mov     byte ptr [g_7b5a38], 0
        mov     dword ptr [g_80d998], 0
        mov     dword ptr [g_80d99c], 0
L_done:
        ret
    }
}
