/*
 * FUN_004C1AC0 (21 B) — __stdcall: assert-style check. Pushes string
 * g_7705d0, calls FUN_006FAB90, and if it returns nonzero traps (int3).
 *
 * Match: target 100%
 */

extern char g_7705d0;
extern void __cdecl FUN_006FAB90(void);

__declspec(naked) void FUN_004C1AC0(void)
{
    __asm {
        push    offset g_7705d0
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      L1
        int     3
L1:
        ret     4
    }
}
