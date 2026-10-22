/*
 * FUN_004a1d10 (1078 B) — MLR particle/shrapnel: update/transform. Performs a
 * 3x3 matrix multiply (rotation) into a stack matrix, computes shrapnel
 * trajectory offsets, and interpolates four spline channels into
 * [this+0xd4..0xe0]. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0048bcd0(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_00495e30(void);
extern void __cdecl FUN_0048dd20(void);
extern void __cdecl FUN_00494990(void);

__declspec(naked) void FUN_004a1d10(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xa4
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        lea     ecx, [ebp-0x74]
        call    FUN_0048bcd0
        mov     edi, dword ptr [ebx+0x10]
        mov     esi, dword ptr [edi+0x120]
        test    esi, esi
        jz      L213d
        mov     ecx, dword ptr [ebp+0x8]
        lea     eax, [edi+0x48]
        add     ecx, 0x8
        push    eax
        push    ecx
        lea     ecx, [ebp-0x70]
        mov     dword ptr [ebp-0x58], 0x3f
        mov     dword ptr [ebp-0x50], 0x0
        call    FUN_00491670
        fld     dword ptr [ebx+0xe8]
        xor     eax, eax
        mov     dword ptr [ebp-0x4c], eax
        mov     dword ptr [ebp-0x48], eax
        fstp    dword ptr [ebp-0x30]
        fld     dword ptr [ebx+0xe8]
        lea     eax, [ebx+0xd4]
        mov     dword ptr [ebp-0x44], eax
        mov     eax, dword ptr [ebp+0x8]
        mov     ecx, dword ptr [eax]
        lea     edx, [ebp-0x30]
        fstp    dword ptr [ebp-0x2c]
        fld     dword ptr [ebx+0xe8]
        mov     dword ptr [ebp-0x40], edx
        lea     edx, [ebx+0x58]
        lea     eax, [ebp-0xa4]
        fstp    dword ptr [ebp-0x28]
        mov     dword ptr [ebp-0x74], esi
        mov     dword ptr [ebp-0x24], ecx
        mov     dword ptr [ebp-0x20], edx
        mov     dword ptr [ebp-0x4], eax
        mov     edx, dword ptr [ebp-0x20]
        push    esi
        mov     esi, dword ptr [ebp-0x24]
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
        lea     ecx, [ebp-0xa4]
        mov     dword ptr [ebp-0x54], ecx
        mov     al, byte ptr [edi+0x11d]
        test    al, al
        jz      L1f95
        mov     edx, dword ptr [ebp+0x8]
        mov     eax, dword ptr [edx+0x20]
        add     eax, 0x44
        push    eax
        lea     ecx, [ebp-0x1c]
        call    FUN_00419480
        lea     ecx, [ebp-0xa4]
        push    ecx
        lea     ecx, [ebp-0x10]
        call    FUN_00419480
        fld     dword ptr [ebp-0x1c]
        fsub    dword ptr [ebp-0x10]
        mov     al, byte ptr [edi+0x11e]
        test    al, al
        fstp    dword ptr [ebp-0x3c]
        fld     dword ptr [ebp-0x18]
        fsub    dword ptr [ebp-0xc]
        fstp    dword ptr [ebp-0x38]
        fld     dword ptr [ebp-0x14]
        fsub    dword ptr [ebp-0x8]
        fstp    dword ptr [ebp-0x34]
        jz      L1f89
        push    0x0
        push    0x1
        push    0x2
        lea     edx, [ebp-0x3c]
        push    edx
        jmp     L1fdf
L1f89:
        push    -0x1
        push    0x0
        push    0x2
        lea     eax, [ebp-0x3c]
        push    eax
        jmp     L1fdf
L1f95:
        mov     al, byte ptr [edi+0x11e]
        test    al, al
        jz      L1fea
        mov     ecx, dword ptr [ebp+0x8]
        mov     eax, dword ptr [ecx+0x20]
        fld     dword ptr [eax+0x50]
        mov     edx, dword ptr [eax+0x60]
        fsub    dword ptr [ebp-0x98]
        add     eax, 0x44
        mov     eax, dword ptr [eax+0x2c]
        mov     dword ptr [ebp-0xc], edx
        fstp    dword ptr [ebp-0x1c]
        push    -0x1
        fld     dword ptr [ebp-0xc]
        mov     dword ptr [ebp-0x8], eax
        fsub    dword ptr [ebp-0x88]
        push    0x1
        push    0x2
        lea     ecx, [ebp-0x1c]
        fstp    dword ptr [ebp-0x18]
        push    ecx
        fld     dword ptr [ebp-0x8]
        fsub    dword ptr [ebp-0x78]
        fstp    dword ptr [ebp-0x14]
L1fdf:
        lea     ecx, [ebp-0xa4]
        call    FUN_0041fde0
L1fea:
        mov     edx, dword ptr [ebx+0x90]
        mov     eax, edx
        lea     esi, [edi+0x64]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp-0x4], edx
        call    FUN_00495e30
        fld     dword ptr [ebp-0x4]
        mov     edx, dword ptr [esi+0x4]
        lea     ecx, [eax+eax*2]
        fsub    dword ptr [edx+ecx*4]
        lea     eax, [edx+ecx*4]
        fmul    dword ptr [eax+0x4]
        fadd    dword ptr [eax+0x8]
        mov     al, byte ptr [edi+0x7c]
        test    al, al
        jz      L202a
        fld     dword ptr [ebx+0x98]
        fmul    dword ptr [edi+0x78]
        fadd    dword ptr [edi+0x74]
        fmulp   st(1), st(0)
L202a:
        mov     eax, dword ptr [ebx+0x90]
        fstp    dword ptr [ebx+0xd4]
        mov     ecx, eax
        lea     esi, [edi+0x84]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebp-0x4], eax
        call    FUN_00495e30
        fld     dword ptr [ebp-0x4]
        lea     edx, [eax+eax*2]
        mov     eax, dword ptr [esi+0x4]
        fsub    dword ptr [eax+edx*4]
        lea     eax, [eax+edx*4]
        fmul    dword ptr [eax+0x4]
        fadd    dword ptr [eax+0x8]
        mov     al, byte ptr [edi+0x9c]
        test    al, al
        jz      L207c
        fld     dword ptr [ebx+0x98]
        fmul    dword ptr [edi+0x98]
        fadd    dword ptr [edi+0x94]
        fmulp   st(1), st(0)
L207c:
        mov     ecx, dword ptr [ebx+0x90]
        fstp    dword ptr [ebx+0xd8]
        mov     edx, ecx
        mov     dword ptr [ebp-0x4], ecx
        lea     esi, [edi+0xa4]
        push    edx
        mov     ecx, esi
        call    FUN_00495e30
        fld     dword ptr [ebp-0x4]
        mov     ecx, dword ptr [esi+0x4]
        lea     eax, [eax+eax*2]
        fsub    dword ptr [ecx+eax*4]
        lea     eax, [ecx+eax*4]
        fmul    dword ptr [eax+0x4]
        fadd    dword ptr [eax+0x8]
        mov     al, byte ptr [edi+0xbc]
        test    al, al
        jz      L20ce
        fld     dword ptr [ebx+0x98]
        fmul    dword ptr [edi+0xb8]
        fadd    dword ptr [edi+0xb4]
        fmulp   st(1), st(0)
L20ce:
        mov     edx, dword ptr [ebx+0x90]
        fstp    dword ptr [ebx+0xdc]
        mov     eax, edx
        lea     esi, [edi+0xc4]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp-0x4], edx
        call    FUN_00495e30
        fld     dword ptr [ebp-0x4]
        mov     edx, dword ptr [esi+0x4]
        lea     ecx, [eax+eax*2]
        fsub    dword ptr [edx+ecx*4]
        lea     eax, [edx+ecx*4]
        fmul    dword ptr [eax+0x4]
        fadd    dword ptr [eax+0x8]
        mov     al, byte ptr [edi+0xdc]
        test    al, al
        jz      L2120
        fld     dword ptr [ebx+0x98]
        fmul    dword ptr [edi+0xd8]
        fadd    dword ptr [edi+0xd4]
        fmulp   st(1), st(0)
L2120:
        mov     esi, dword ptr [ebp+0x8]
        fstp    dword ptr [ebx+0xe0]
        mov     ecx, dword ptr [esi+0x20]
        lea     eax, [ebp-0x74]
        push    eax
        call    FUN_0048dd20
        push    esi
        mov     ecx, ebx
        call    FUN_00494990
L213d:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
