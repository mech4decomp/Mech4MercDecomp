/*
 * FUN_0040d0f0 (35 B) - dot product of two 4-float vectors.
 * __thiscall (ECX = b), RET 0x4 (one stack param: a @ [esp+4]).
 * Returns the dot product in ST(0).
 *
 *   return a[0]*b[0] + a[1]*b[1] + a[2]*b[2] + a[3]*b[3];
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040d0f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        fld     dword ptr [eax + 0xc]
        fmul    dword ptr [ecx + 0xc]
        fld     dword ptr [eax + 0x8]
        fmul    dword ptr [ecx + 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0x4]
        fmul    dword ptr [ecx + 0x4]
        faddp   st(1), st(0)
        fld     dword ptr [eax]
        fmul    dword ptr [ecx]
        faddp   st(1), st(0)
        ret     0x4
    }
}
