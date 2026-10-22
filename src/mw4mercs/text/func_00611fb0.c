/*
 * FUN_00611fb0 (18 B) — toggles a global byte flag (sets it to its
 * logical NOT) and returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007f2872;

__declspec(naked) void FUN_00611fb0(void)
{
    __asm {
        mov     al, byte ptr [g_007f2872]
        test    al, al
        setz    al
        mov     byte ptr [g_007f2872], al
        xor     eax, eax
        ret
    }
}
