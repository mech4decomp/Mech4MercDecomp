/*
 * FUN_0040cc70 (39 B) - 3-component vector scale by (K / scalar).
 * __thiscall (ECX = dest), RET 0x8 (2 stack params: src @ [esp+4],
 * scalar @ [esp+8]).
 *
 *   t = K / scalar   (K = float @ 0x0076d064)
 *   dest[i] = t * src[i]  for i in 0..2
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;   /* float constant @ 0x0076d064 */

__declspec(naked) void FUN_0040cc70(void)
{
    __asm {
        fld     dword ptr [esp + 0x8]
        mov     eax, ecx
        fdivr   dword ptr [g_0076d064]
        mov     ecx, dword ptr [esp + 0x4]
        fld     st(0)
        fmul    dword ptr [ecx]
        fstp    dword ptr [eax]
        fld     st(0)
        fmul    dword ptr [ecx + 0x4]
        fstp    dword ptr [eax + 0x4]
        fmul    dword ptr [ecx + 0x8]
        fstp    dword ptr [eax + 0x8]
        ret     0x8
    }
}
