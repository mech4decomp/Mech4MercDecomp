/*
 * Vtable 0x77260C slot 3 — FUN_00415B70 (18 B).
 *
 * Debug assertion: calls FUN_006FAB90 with a string pointer (0x76D478),
 * then asserts the result is zero (NULL). If non-zero, hits INT3.
 *
 * __cdecl, RET 4 (1 stack param).
 * CFLAGS: /O1
 */

extern void __stdcall FUN_006fab90(void *str);

__declspec(naked) void __stdcall vtable_assert(void)
{
    __asm {
        push    0x76d478
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        je      l_ok
        int     3
    l_ok:
        ret     4
    }
}
