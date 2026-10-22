/*
 * FUN_00620AE0 (5 B) — jmp thunk to FUN_00649150.
 *
 * Match: target 100%
 */

extern void __cdecl FUN_00649150(void);

__declspec(naked) void FUN_00620AE0(void)
{
    __asm {
        jmp     FUN_00649150
    }
}
