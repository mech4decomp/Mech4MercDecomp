/*
 * FUN_0040caa0 (39 B) — __thiscall vector scale-by-reciprocal.
 * this->v = (K / scalar) * a->v component-wise (3 floats), where K is
 * the float constant at 0x0076d064. Returns the object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_float_0076d064;

__declspec(naked) void FUN_0040caa0(void)
{
    __asm {
        fld     dword ptr [g_float_0076d064]
        mov     eax, ecx
        fdiv    dword ptr [esp+8]
        mov     ecx, dword ptr [esp+4]
        fld     st(0)
        fmul    dword ptr [ecx]
        fstp    dword ptr [eax]
        fld     st(0)
        fmul    dword ptr [ecx+4]
        fstp    dword ptr [eax+4]
        fmul    dword ptr [ecx+8]
        fstp    dword ptr [eax+8]
        ret     8
    }
}
