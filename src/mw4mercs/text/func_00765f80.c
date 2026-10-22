/*
 * FUN_00765f80 (200 B) — Vector math: cross product, normalize, dot product.
 *
 * __thiscall (ECX = out), RET 0xC (3 stack params: in1, in2, in3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;

__declspec(naked) void __stdcall FUN_00765f80(void)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        fld     dword ptr [eax]
        fsub    dword ptr [edx]
        push    esi
        fld     dword ptr [eax + 0x4]
        mov     esi, dword ptr [esp + 0x28]
        fsub    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x8]
        fsub    dword ptr [edx + 0x8]
        fld     dword ptr [esi]
        fsub    dword ptr [eax]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esi + 0x4]
        fsub    dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esi + 0x8]
        pop     esi
        fsub    dword ptr [eax + 0x8]
        fld     st(0)
        fmul    st(0), st(3)
        fld     dword ptr [esp + 0x10]
        fmul    st(0), st(3)
        fsubp   st(1), st(0)
        __asm _emit 0xD9 __asm _emit 0x5C __asm _emit 0x24 __asm _emit 0x00 /* __emit: fstp [esp+0] - MSVC6 drops the 00 disp byte (D9 1C 24 vs ref D9 5C 24 00) */
        fxch    st(1)
        fmul    dword ptr [esp + 0xc]
        fxch    st(1)
        fmul    st(0), st(3)
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x10]
        fmulp   st(2), st(0)
        fmul    dword ptr [esp + 0xc]
        fsubp   st(1), st(0)
        fld     st(0)
        fmul    st(0), st(1)
        fld     dword ptr [esp + 0x4]
        fmul    dword ptr [esp + 0x4]
        faddp   st(1), st(0)
        __asm _emit 0xD9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 /* __emit: fld [esp+0] - MSVC6 drops the 00 disp byte (D9 04 24 vs ref D9 44 24 00) */
        __asm _emit 0xD8 __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x00 /* __emit: fmul [esp+0] - MSVC6 drops the 00 disp byte (D8 0C 24 vs ref D8 4C 24 00) */
        faddp   st(1), st(0)
        fsqrt
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        __asm _emit 0xD8 __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x00 /* __emit: fmul [esp+0] - MSVC6 drops the 00 disp byte (D8 0C 24 vs ref D8 4C 24 00) */
        fst     dword ptr [esp + 0x20]
        fstp    dword ptr [ecx]
        fld     dword ptr [esp + 0x4]
        fmul    st(0), st(1)
        fst     dword ptr [esp + 0x1c]
        fstp    dword ptr [ecx + 0x4]
        fxch    st(1)
        fmul    st(0), st(1)
        fxch    st(1)
        fstp    st(0)
        fst     dword ptr [ecx + 0x8]
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [edx]
        fxch    st(1)
        fmul    dword ptr [edx + 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [edx + 0x4]
        faddp   st(1), st(0)
        fstp    dword ptr [ecx + 0xc]
        add     esp, 0x18
        ret     0xc
    }
}
