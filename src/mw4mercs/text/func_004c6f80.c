/*
 * FUN_004c6f80 (462 B) — MLR 3x4 matrix multiply (this = dest, [ecx+0x10]
 * points to source matrix). If byte[ecx+0x18]&1 set, copies 12 dwords from
 * src+0x80 to this+0x80; else computes the 3x4 matrix product into this+0x80.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004c6f80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        test    byte ptr [ecx+0x18], 1
        push    esi
        push    edi
        jnz     L_7132
        mov     eax, dword ptr [ecx+0x10]
        add     eax, 0x80
        lea     edx, [ecx+0x50]
        add     ecx, 0x80
        mov     dword ptr [ebp-0x8], eax
        mov     dword ptr [ebp-0xc], edx
        mov     dword ptr [ebp-0x4], ecx
        mov     edx, dword ptr [ebp-0xc]
        push    esi
        mov     esi, dword ptr [ebp-0x8]
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
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L_7132:
        mov     esi, dword ptr [ecx+0x10]
        lea     edi, [ecx+0x80]
        add     esi, 0x80
        mov     ecx, 0xc
        rep movsd
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
