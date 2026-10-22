/*
 * FUN_00709c30 (11 B) — sets a global dword to 1 (gosScript flag).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00858ac0;              /* DAT_00858ac0 */

__declspec(naked) void FUN_00709c30(void)
{
    __asm {
        mov     dword ptr [g_00858ac0], 0x1
        ret
    }
}
