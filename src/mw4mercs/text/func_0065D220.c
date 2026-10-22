/*
 * FUN_0065D220 (5 B) — jmp thunk to FUN_0065D230.
 *
 * Match: target 100%
 */

extern void __cdecl FUN_0065D230(void);

__declspec(naked) void FUN_0065D220(void)
{
    __asm {
        jmp     FUN_0065D230
    }
}
