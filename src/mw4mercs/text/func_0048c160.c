/*
 * FUN_0048c160 (686 B) — MLR matrix transform (__thiscall, RET 0x8).
 * Computes a 4x4 rotation/translation matrix product and normalizes
 * the resulting basis vectors.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004206b0(void);
extern float g_0076d064;

__declspec(naked) void FUN_0048c160(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        mov     ebx, ecx
        push    edi
        lea     eax, [ebx + 0x44]
        lea     edi, [ebx + 0x74]
        mov     ecx, 0x10
        rep     movsd
        mov     esi, dword ptr [ebp + 0x8]
        mov     edi, eax
        mov     ecx, 0xc
        rep     movsd
        lea     esi, [ebx + 0x14]
        push    eax
        mov     ecx, esi
        call    FUN_004206b0
        lea     eax, [ebx + 0xb4]
        mov     dword ptr [ebp - 0x4], esi
        mov     dword ptr [ebp + 0x8], eax
        mov     edx, dword ptr [ebp - 0x4]
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x8]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fadd    dword ptr [esi + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x38]
        fxch    st(1)
        fstp    dword ptr [eax + 0x2c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x30]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x34]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x34]
        fxch    st(1)
        fstp    dword ptr [eax + 0x38]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x3c]
        fstp    dword ptr [eax + 0x3c]
        pop     esi
        mov     ecx, dword ptr [ebx + 0x50]
        mov     dword ptr [ebx + 0xf4], ecx
        mov     edx, dword ptr [ebx + 0x60]
        mov     dword ptr [ebx + 0xf8], edx
        mov     eax, dword ptr [ebx + 0x70]
        mov     dword ptr [ebx + 0xfc], eax
        fld     dword ptr [ebx + 0x4c]
        fld     dword ptr [ebx + 0x5c]
        pop     edi
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebx + 0x6c]
        pop     esi
        fst     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        faddp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fsqrt
        fdivr   dword ptr [g_0076d064]
        fstp    dword ptr [ebp + 0xc]
        fmul    dword ptr [ebp + 0xc]
        fstp    dword ptr [ebx + 0x100]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp + 0xc]
        fstp    dword ptr [ebx + 0x104]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp + 0xc]
        fstp    dword ptr [ebx + 0x108]
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
