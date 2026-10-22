/*
 * FUN_0040d180 (47 B) - scale a 4-float vector by (K / scalar), where
 * K is the float constant at 0x0076d064. __thiscall (ECX = dest),
 * RET 0x8 (two stack params: src @ [esp+4], scalar @ [esp+8]).
 *
 *   t = K / scalar;
 *   dest[i] = src[i] * t;   (i = 0..3)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;   /* float constant @ 0x0076d064 */

__declspec(naked) void FUN_0040d180(void)
{
    __asm {
        fld     dword ptr [g_0076d064]
        mov     eax, ecx
        fdiv    dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x4]
        fld     st(0)
        fmul    dword ptr [ecx]
        fstp    dword ptr [eax]
        fld     st(0)
        fmul    dword ptr [ecx + 0x4]
        fstp    dword ptr [eax + 0x4]
        fld     st(0)
        fmul    dword ptr [ecx + 0x8]
        fstp    dword ptr [eax + 0x8]
        fmul    dword ptr [ecx + 0xc]
        fstp    dword ptr [eax + 0xc]
        ret     0x8
    }
}
