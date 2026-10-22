/*
 * FUN_0064a870 (32 B) — if the g_007b5a38 flag is set, calls FUN_0064a840;
 * then zeroes g_0080d998 and sets g_007b5a38 = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007b5a38;
extern int  g_0080d998;

extern void __cdecl FUN_0064a840(void);

__declspec(naked) void FUN_0064a870(void)
{
    __asm {
        mov     al, byte ptr [g_007b5a38]
        test    al, al
        jz      L1
        call    FUN_0064a840
L1:
        mov     dword ptr [g_0080d998], 0
        mov     byte ptr [g_007b5a38], 1
        ret
    }
}
