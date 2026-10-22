/*
 * FUN_004BBB50 (21 B) — __stdcall (RET 0x4). Pushes an assert message
 * string and calls the assert dispatcher FUN_006FAB90; traps (int3) if
 * the assert fails.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00771150[];
extern void __cdecl FUN_006FAB90(void);

__declspec(naked) void FUN_004BBB50(void)
{
    __asm {
        push    offset g_00771150
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      L_4bbb62
        int     3
L_4bbb62:
        ret     4
    }
}
