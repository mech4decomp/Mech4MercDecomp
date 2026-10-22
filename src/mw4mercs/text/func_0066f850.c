/*
 * FUN_0066f850 (29 B) — subtracts two global floats from a 2-float
 * struct arg in place: p[1] = g_007971e4 - p[1]; p[0] = g_007971e0 - p[0].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007971e0;
extern float g_007971e4;

__declspec(naked) void FUN_0066f850(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        fld     dword ptr [g_007971e4]
        fsub    dword ptr [eax+0x4]
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [g_007971e0]
        fsub    dword ptr [eax]
        fstp    dword ptr [eax]
        ret     0x4
    }
}
