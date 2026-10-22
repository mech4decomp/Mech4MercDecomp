/*
 * FUN_005fcc40 (13 B) — thunk: forwards its single argument to
 * FUN_004fa8b0 and returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004fa8b0(void);

__declspec(naked) void FUN_005fcc40(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    eax
        call    FUN_004fa8b0
        ret     0x4
    }
}
