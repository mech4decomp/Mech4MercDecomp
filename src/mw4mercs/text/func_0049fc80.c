/*
 * FUN_0049fc80 (631 B) — MLR particle/shrapnel: transforms a 4x4 matrix
 * (matrix multiply), then appends the result into a ring buffer of
 * transforms (FUN_004a05e0). __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004941d0(void *p);
extern void __cdecl FUN_004206b0(void *p);
extern void __cdecl FUN_004a05e0(int idx, void *m);

__declspec(naked) void FUN_0049fc80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x68
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp+0x8]
        push    edi
        mov     ebx, ecx
        push    esi
        call    FUN_004941d0
        mov     eax, dword ptr [esi+0x14]
        lea     ecx, [ebx+0x58]
        lea     edx, [ebp-0x38]
        mov     dword ptr [ebp-0x4], eax
        mov     dword ptr [ebp-0x8], ecx
        mov     dword ptr [ebp+0x8], edx
        mov     edx, dword ptr [ebp-0x8]
        push    esi
        mov     esi, dword ptr [ebp-0x4]
        mov     eax, dword ptr [ebp+0x8]
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
        fxch
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
        fxch
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
        fxch
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
        fxch
        fadd    dword ptr [esi+0xc]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x18]
        fxch
        fstp    dword ptr [eax+0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x14]
        fxch
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
        fxch
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
        fxch
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
        fxch
        fadd    dword ptr [esi+0x1c]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x28]
        fxch
        fstp    dword ptr [eax+0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x24]
        fxch
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
        fxch
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
        fxch
        fstp    dword ptr [eax+0x28]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi+0x2c]
        fstp    dword ptr [eax+0x2c]
        pop     esi
        lea     eax, [ebp-0x38]
        push    eax
        lea     ecx, [ebp-0x68]
        call    FUN_004206b0
        mov     eax, dword ptr [ebx+0x10]
        mov     ecx, dword ptr [ebx+0xac]
        mov     eax, dword ptr [eax+0x228]
        xor     edx, edx
        cmp     ecx, eax
        mov     dword ptr [ebx+0xb8], edx
        jge     L1
        cmp     ecx, edx
        jnz     L2
        lea     ecx, [ebp-0x38]
        push    ecx
        dec     eax
        push    edx
        mov     ecx, ebx
        mov     dword ptr [ebx+0xa0], 0x1
        mov     dword ptr [ebx+0xa8], edx
        mov     dword ptr [ebx+0xa4], eax
        call    FUN_004a05e0
        mov     dword ptr [ebx+0xac], 0x2
        jmp     L3
L2:
        mov     edx, dword ptr [ebx+0xa0]
        mov     esi, dword ptr [ebx+0xbc]
        lea     ecx, [edx+edx*8]
        lea     edi, [esi+ecx*8]
        mov     ecx, 0xc
        lea     esi, [ebp-0x38]
        rep movsd
        lea     ecx, [edx+1]
        cmp     ecx, eax
        mov     dword ptr [ebx+0xa0], ecx
        jnz     L3
        mov     dword ptr [ebx+0xa0], 0x0
L3:
        mov     eax, dword ptr [ebx+0xa0]
        lea     edx, [ebp-0x38]
        push    edx
        push    eax
        mov     ecx, ebx
        call    FUN_004a05e0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L1:
        mov     eax, dword ptr [ebx+0xa0]
        mov     edx, dword ptr [ebx+0xbc]
        lea     ecx, [eax+eax*8]
        lea     edi, [edx+ecx*8]
        mov     ecx, 0xc
        lea     esi, [ebp-0x38]
        rep movsd
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
