/*
 * FUN_004D7DA0 (8 B) — Call FUN_004D8980(1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d8980(int param_1);

__declspec(naked) void FUN_004d7da0(void)
{
    __asm {
        push 1
        call FUN_004d8980
        ret
    }
}
