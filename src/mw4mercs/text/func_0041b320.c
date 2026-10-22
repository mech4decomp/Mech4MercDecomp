/*
 * FUN_0041b320 (138 B) — __thiscall. Hamilton product of two 4-vectors
 * (quaternion multiply) into `this` (ECX). Pure FPU register/mem ops.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041b320(void)
{
    __asm {
        mov     edx, dword ptr [esp+4]
        push    esi
        mov     esi, dword ptr [esp+0xc]
        fld     dword ptr [esi+0xc]
        mov     eax, ecx
        fmul    dword ptr [edx]
        fld     dword ptr [esi+4]
        fmul    dword ptr [edx+8]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi]
        faddp   st(1), st(0)
        fld     dword ptr [esi+8]
        fmul    dword ptr [edx+4]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax]
        fld     dword ptr [esi+0xc]
        fmul    dword ptr [edx+4]
        fld     dword ptr [esi+8]
        fmul    dword ptr [edx]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+4]
        faddp   st(1), st(0)
        fld     dword ptr [esi]
        fmul    dword ptr [edx+8]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+4]
        fld     dword ptr [esi+0xc]
        fmul    dword ptr [edx+8]
        fld     dword ptr [edx+4]
        fmul    dword ptr [esi]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+8]
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+4]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+8]
        fld     dword ptr [esi+0xc]
        fmul    dword ptr [edx+0xc]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fsubp   st(1), st(0)
        fld     dword ptr [edx+4]
        fmul    dword ptr [esi+4]
        fsubp   st(1), st(0)
        fld     dword ptr [esi+8]
        pop     esi
        fmul    dword ptr [edx+8]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+0xc]
        ret     8
    }
}
