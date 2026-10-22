/*
 * FUN_006ceba0 (83 B) — 3x3 matrix-vector transform (__thiscall).
 * Multiplies three input floats by a 3x3 matrix (this = ECX) and
 * stores the results back into the three output floats.
 *
 * __thiscall (ECX = this), RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006ceba0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        fld     dword ptr [eax]
        mov     edx, dword ptr [esp + 0x8]
        fld     dword ptr [edx]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        fld     dword ptr [esi]
        fld     st(0)
        fmul    dword ptr [ecx + 0x20]
        fld     st(2)
        fmul    dword ptr [ecx + 0x10]
        faddp   st(1), st(0)
        fld     st(3)
        fmul    dword ptr [ecx]
        faddp   st(1), st(0)
        fstp    dword ptr [eax]
        fld     st(0)
        fmul    dword ptr [ecx + 0x24]
        fld     st(2)
        fmul    dword ptr [ecx + 0x14]
        faddp   st(1), st(0)
        fld     st(3)
        fmul    dword ptr [ecx + 0x4]
        faddp   st(1), st(0)
        fstp    dword ptr [edx]
        fmul    dword ptr [ecx + 0x28]
        fxch    st(1)
        fmul    dword ptr [ecx + 0x18]
        faddp   st(1), st(0)
        fxch    st(1)
        fmul    dword ptr [ecx + 0x8]
        faddp   st(1), st(0)
        fstp    dword ptr [esi]
        pop     esi
        ret     0xC
    }
}
