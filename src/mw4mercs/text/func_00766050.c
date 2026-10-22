/*
 * FUN_00766050 (108 B) - __thiscall matrix/vector transform (RET 0x8).
 *
 * ECX = output vector (3 floats + w). Computes a 3x3 matrix (param_2)
 * times vector (param_1) transform with translation, storing the result
 * into [ECX]. Uses FPU with FADDP/FXCH.
 *
 * __thiscall (ECX = out), RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_00766050(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        fld     dword ptr [edx + 0x4]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        fmul    dword ptr [esi + 0x4]
        mov     eax, ecx
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [esi]
        fmul    dword ptr [edx]
        faddp   st(1), st(0)
        fst     dword ptr [eax]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x8]
        faddp   st(1), st(0)
        fst     dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x4]
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        faddp   st(1), st(0)
        fst     dword ptr [eax + 0x8]
        fmul    dword ptr [edx + 0x2c]
        fxch    st(1)
        fmul    dword ptr [edx + 0x1c]
        faddp   st(1), st(0)
        fxch    st(1)
        fmul    dword ptr [edx + 0xc]
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0xc]
        pop     esi
        fstp    dword ptr [eax + 0xc]
        ret     0x8
    }
}
