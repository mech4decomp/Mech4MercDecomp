/*
 * FUN_004B9DE0 (21 B) — __cdecl (RET 0). Pushes an assert message string
 * and calls the assert dispatcher FUN_006FAB90; traps (int3) if the
 * assert fails, then returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_0076d414[];
extern void __cdecl FUN_006FAB90(void);

__declspec(naked) void FUN_004B9DE0(void)
{
    __asm {
        push    offset g_0076d414
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      L_4b9df2
        int     3
L_4b9df2:
        xor     eax, eax
        ret
    }
}
