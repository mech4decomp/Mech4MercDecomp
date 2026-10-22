/*
 * FUN_005a4d70 (8 B) — __thiscall thunk to FUN_005a4dc0.
 *
 * Calls FUN_005a4dc0 (which takes ECX=this and 1 stack param), RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005a4dc0(void);

void __declspec(naked) __stdcall FUN_005a4d70(void)
{
    __asm {
        call    FUN_005a4dc0
        ret     0x4
    }
}
