/*
 * FUN_00680190 (18 B) — HUD helper: loads a float constant and divides by a
 * table entry indexed by the first stack arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_007b5b5c[];

__declspec(naked) void FUN_00680190(void)
{
    __asm {
        fld     dword ptr [g_0076d064]
        mov     eax, dword ptr [esp+0x4]
        fdiv    dword ptr [g_007b5b5c+eax*4]
        ret
    }
}
