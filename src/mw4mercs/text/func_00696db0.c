/*
 * FUN_00696db0 (5 B) — returns param1 (identity accessor).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00696db0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        ret
    }
}
