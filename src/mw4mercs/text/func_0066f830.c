/*
 * FUN_0066f830 (31 B) — subtracts two global floats from the two
 * float args in place: *p2 = g_007971e4 - *p2; *p1 = g_007971e0 - *p1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007971e0;
extern float g_007971e4;

__declspec(naked) void FUN_0066f830(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x8]
        fld     dword ptr [g_007971e4]
        fsub    dword ptr [eax]
        fstp    dword ptr [eax]
        mov     eax, dword ptr [esp+0x4]
        fld     dword ptr [g_007971e0]
        fsub    dword ptr [eax]
        fstp    dword ptr [eax]
        ret     0x8
    }
}
