/*
 * FUN_006632e0 (47 B) — cdecl, two 3-float vector pointers, RET.
 *
 * Computes the squared distance between two 3D points (dot product of
 * the difference with itself) and leaves the result in ST(0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006632e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        fld     dword ptr [eax]
        fsub    dword ptr [ecx]
        fld     dword ptr [eax + 0x4]
        fsub    dword ptr [ecx + 0x4]
        fld     dword ptr [eax + 0x8]
        fsub    dword ptr [ecx + 0x8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        ret
    }
}
