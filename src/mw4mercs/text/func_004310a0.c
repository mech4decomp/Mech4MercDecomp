/*
 * FUN_004310a0 (425 B) — MLR matrix multiply (3x4 * 4x4). __thiscall
 * (RET 0x4). Computes a 4x4 result into [this+0x48], then calls
 * FUN_004206b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004206b0(void);

__declspec(naked) void FUN_004310a0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x8
        lea     eax, [ecx+0x18]
        lea     edx, [ecx+0x48]
        push    esi
        mov     dword ptr [ebp-0x8], eax
        mov     dword ptr [ebp-0x4], edx
        mov     edx, dword ptr [ebp-0x8]
        push    esi
        mov     esi, dword ptr [ebp+0x8]
        mov     eax, dword ptr [ebp-0x4]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x4]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x4]
        fxch    st(1)
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x4]
        fxch    st(1)
        fstp    dword ptr [eax+0x8]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x14]
        fxch    st(1)
        fadd    dword ptr [esi+0xc]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x18]
        fxch    st(1)
        fstp    dword ptr [eax+0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x14]
        fxch    st(1)
        fstp    dword ptr [eax+0x10]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x14]
        fxch    st(1)
        fstp    dword ptr [eax+0x14]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x14]
        fxch    st(1)
        fstp    dword ptr [eax+0x18]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x24]
        fxch    st(1)
        fadd    dword ptr [esi+0x1c]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x28]
        fxch    st(1)
        fstp    dword ptr [eax+0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x24]
        fxch    st(1)
        fstp    dword ptr [eax+0x20]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x24]
        fxch    st(1)
        fstp    dword ptr [eax+0x24]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x24]
        fxch    st(1)
        fstp    dword ptr [eax+0x28]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi+0x2c]
        fstp    dword ptr [eax+0x2c]
        pop     esi
        mov     eax, dword ptr [ebp+0x8]
        push    eax
        add     ecx, 0xb0
        call    FUN_004206b0
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
