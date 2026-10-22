/*
 * FUN_005009A0 (21 B) — __stdcall (RET 0x8). Pushes an assert message
 * string and calls the assert dispatcher FUN_006FAB90; traps (int3) if
 * the assert fails.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00776288[];
extern void __cdecl FUN_006FAB90(void);

__declspec(naked) void FUN_005009A0(void)
{
    __asm {
        push    offset g_00776288
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      L_5009b2
        int     3
L_5009b2:
        ret     8
    }
}
