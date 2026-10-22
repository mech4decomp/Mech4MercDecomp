/*
 * FUN_00683b50 (60 B) — __stdcall (RET 0x4, 1 param).
 *
 * Returns a float: if [p+0x10] == 0x76c5b0 returns 0x76c5b0; else if
 * [p+0x10] <= [p+0x14] returns 0x76d064; else returns [p+0x14]/[p+0x10].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;
extern float g_76d064;

__declspec(naked) void FUN_00683b50(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        fld     dword ptr [ecx + 0x10]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_second
        fld     dword ptr [g_76c5b0]
        ret     0x4
    L_second:
        fld     dword ptr [ecx + 0x14]
        fcomp   dword ptr [ecx + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_div
        fld     dword ptr [g_76d064]
        ret     0x4
    L_div:
        fld     dword ptr [ecx + 0x14]
        fdiv    dword ptr [ecx + 0x10]
        ret     0x4
    }
}
