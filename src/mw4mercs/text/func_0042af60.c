/*
 * FUN_0042af60 (710 B) — __thiscall MLR light matrix update. Builds
 * two 4x4 matrices from constants (0x7b8da8, 0x7b9460), calls
 * FUN_0041d570 / FUN_0041cfe0, then computes a 4x4 matrix multiply
 * into [this+0xb8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041d570(int, int, int, int, int, int);
extern void __cdecl FUN_0041cfe0(void *, void *);

__declspec(naked) void FUN_0042af60(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xbc
        push    ebx
        push    esi
        mov     ebx, ecx
        mov     eax, dword ptr [ebx+0x94]
        mov     edx, dword ptr [ebx+0x8c]
        push    edi
        mov     ecx, 0x10
        mov     esi, 0x7b8da8
        lea     edi, [ebp-0x7c]
        rep movsd
        push    eax
        mov     eax, dword ptr [ebx+0x90]
        mov     ecx, 0x10
        mov     esi, 0x7b8da8
        lea     edi, [ebp-0xbc]
        rep movsd
        mov     ecx, dword ptr [ebx+0x98]
        push    ecx
        mov     ecx, dword ptr [ebx+0xa0]
        push    edx
        mov     edx, dword ptr [ebx+0x9c]
        push    eax
        push    ecx
        push    edx
        lea     ecx, [ebp-0xbc]
        call    FUN_0041d570
        lea     eax, [ebp-0x7c]
        push    eax
        lea     edx, [ebp-0xbc]
        lea     ecx, [ebx+0xb8]
        push    edx
        mov     dword ptr [ebp-0x4], ecx
        call    FUN_0041cfe0
        fld     dword ptr [ebx+0xa4]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [ebp-0x3c]
        rep movsd
        fstp    dword ptr [ebp-0x10]
        mov     edi, dword ptr [ebp-0x4]
        lea     eax, [ebp-0x3c]
        lea     ecx, [ebp-0x7c]
        mov     dword ptr [ebp-0x30], 0
        mov     dword ptr [ebp-0x20], 0
        mov     dword ptr [ebp-0xc], edi
        mov     dword ptr [ebp-0x8], eax
        mov     dword ptr [ebp-0x4], ecx
        mov     edx, dword ptr [ebp-0x8]
        push    esi
        mov     esi, dword ptr [ebp-0xc]
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
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x34]
        fxch    st(1)
        fadd    dword ptr [esi+0x2c]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x38]
        fxch    st(1)
        fstp    dword ptr [eax+0x2c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x34]
        fxch    st(1)
        fstp    dword ptr [eax+0x30]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x34]
        fxch    st(1)
        fstp    dword ptr [eax+0x34]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x30]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x34]
        fxch    st(1)
        fstp    dword ptr [eax+0x38]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x38]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi+0x3c]
        fstp    dword ptr [eax+0x3c]
        pop     esi
        mov     ecx, 0x10
        lea     esi, [ebp-0x7c]
        rep movsd
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
