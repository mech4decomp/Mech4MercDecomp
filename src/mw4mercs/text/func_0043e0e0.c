/*
 * FUN_0043e0e0 (212 B) — MLR 4x4 matrix transform of a 3-vector (__thiscall,
 * RET 0x8). Same FPU block as FUN_0043a0e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_007da87c;
extern float g_007da874;
extern float g_007da878;
extern float g_007da870;

__declspec(naked) void FUN_0043e0e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     dword ptr [ebp + -0x4], ecx
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x8]
        fld     dword ptr [eax]
        fld     dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp + -0x4]
        fld     dword ptr [edx + 0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx + 0x38]
        fmul    st(0), st(2)
        /* __emit: MSVC6 FPU stack tracker rejects fxch (D9 C9) */
        __emit 0xD9
        __emit 0xC9
        fadd    dword ptr [edx + 0x3c]
        fld     dword ptr [edx + 0x30]
        fmul    st(0), st(5)
        /* __emit: MSVC6 FPU stack tracker rejects fxch st(2) (D9 CA) */
        __emit 0xD9
        __emit 0xCA
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    st(0), st(4)
        /* __emit: MSVC6 FPU stack tracker rejects fxch st(2) (D9 CA) */
        __emit 0xD9
        __emit 0xCA
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    st(0), st(3)
        /* __emit: MSVC6 FPU stack tracker rejects fxch (D9 C9) */
        __emit 0xD9
        __emit 0xC9
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld     dword ptr [edx + 0x10]
        fmul    st(0), st(5)
        /* __emit: MSVC6 FPU stack tracker rejects fxch st(2) (D9 CA) */
        __emit 0xD9
        __emit 0xCA
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x24]
        fmul    st(0), st(4)
        /* __emit: MSVC6 FPU stack tracker rejects fxch st(2) (D9 CA) */
        __emit 0xD9
        __emit 0xCA
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    st(0), st(3)
        /* __emit: MSVC6 FPU stack tracker rejects fxch (D9 C9) */
        __emit 0xD9
        __emit 0xC9
        fstp    dword ptr [eax + 0x4]
        fadd    dword ptr [edx + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    st(0), st(5)
        /* __emit: MSVC6 FPU stack tracker rejects fxch st(2) (D9 CA) */
        __emit 0xD9
        __emit 0xCA
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    st(0), st(4)
        /* __emit: MSVC6 FPU stack tracker rejects fxch st(2) (D9 CA) */
        __emit 0xD9
        __emit 0xCA
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    st(0), st(3)
        /* __emit: MSVC6 FPU stack tracker rejects fxch (D9 C9) */
        __emit 0xD9
        __emit 0xC9
        fstp    dword ptr [eax + 0x8]
        fadd    dword ptr [edx + 0xc]
        fld     dword ptr [edx]
        fmul    st(0), st(5)
        /* __emit: MSVC6 FPU stack tracker rejects fxch st(2) (D9 CA) */
        __emit 0xD9
        __emit 0xCA
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [g_0076d064]
        fdiv    dword ptr [ecx + 0xc]
        fst     dword ptr [ecx + 0xc]
        fld     st(0)
        fmul    dword ptr [ecx + 0x8]
        fstp    dword ptr [ecx + 0x8]
        fld     st(0)
        fmul    dword ptr [ecx]
        fmul    dword ptr [g_007da87c]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ecx]
        fmul    dword ptr [ecx + 0x4]
        fmul    dword ptr [g_007da878]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ecx + 0x4]
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
