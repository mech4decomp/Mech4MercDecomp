/*
 * FUN_0068d110 (8 B) — thunk: calls FUN_0068ce40 then RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0068ce40(void);

__declspec(naked) void FUN_0068d110(void)
{
    __asm {
        call    FUN_0068ce40
        ret     0x4
    }
}
