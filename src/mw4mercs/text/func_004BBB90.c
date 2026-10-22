/*
 * FUN_004BBB90 (23 B) — __stdcall (RET 0x4). Pushes an assert message
 * string and calls the assert dispatcher FUN_006FAB90; traps (int3) if
 * the assert fails, then returns 0 (al).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_0077117c[];
extern void __cdecl FUN_006FAB90(void);

__declspec(naked) void FUN_004BBB90(void)
{
    __asm {
        push    offset g_0077117c
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      L_4bbba2
        int     3
L_4bbba2:
        xor     al, al
        ret     4
    }
}
