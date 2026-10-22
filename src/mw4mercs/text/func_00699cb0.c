/*
 * FUN_00699cb0 (7 B) - HUD helper: returns *param_1 (deref of first arg).
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_00699cb0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax]
        ret
    }
}
