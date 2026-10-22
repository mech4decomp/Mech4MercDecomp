/*
 * FUN_00401000 (6 B) — thunk: loads a global dword and pushes it,
 * then falls through into the next function (tail-call argument setup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dd234;

__declspec(naked) void FUN_00401000(void)
{
    __asm {
        mov     eax, dword ptr [g_007dd234]
        push    eax
    }
}
