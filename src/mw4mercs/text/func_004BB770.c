/*
 * FUN_004BB770 (23 B) — __stdcall (RET 0x4). Pushes an assert message
 * string and calls the assert dispatcher FUN_006FAB90; traps (int3) if
 * the assert fails, then returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007710c0[];
extern void __cdecl FUN_006FAB90(void);

__declspec(naked) void FUN_004BB770(void)
{
    __asm {
        push    offset g_007710c0
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      L_4bb782
        int     3
L_4bb782:
        xor     eax, eax
        ret     4
    }
}
