/*
 * FUN_004965e0 (1646 B) — MLR flare/particle update with curve eval.
 * __thiscall, RET 0x4.
 *
 * Computes a 3x4 matrix transform, evaluates several curve channels
 * (position/color) via FUN_00495e30/FUN_00495e10, builds a 4x4 matrix
 * of offsets, and recurses into child nodes (FUN_00494990).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern float g_0076d070;
extern float g_0076dd60;

extern void __cdecl FUN_0048bcf0(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_00495e30(void);
extern void __cdecl FUN_00495e10(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_0048e890(void);
extern void __cdecl FUN_00494990(void);

__declspec(naked) void FUN_004965e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x84
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        fld     dword ptr [edi + 0x18c]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF   /* fnstsw ax: MSVC6 emits 9B-prefixed fstsw; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jnz     L6C45
        lea     ecx, [ebp - 0x84]
        call    FUN_0048bcf0
        mov     ebx, dword ptr [edi + 0x10]
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi + 0xf4]
        lea     ecx, [ebx + 0x48]
        push    ecx
        lea     edx, [esi + 0x8]
        push    edx
        lea     ecx, [ebp - 0x80]
        mov     dword ptr [ebp - 0x84], eax
        call    FUN_00491670
        mov     eax, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi]
        mov     dword ptr [ebp - 0x68], eax
        lea     edx, [edi + 0x58]
        lea     eax, [ebp - 0x60]
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [ebp - 0x4], eax
        mov     edx, dword ptr [ebp - 0x8]
        push    esi
        mov     esi, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ebp - 0x4]
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
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        fld     dword ptr [edi + 0xec]
        fmul    dword ptr [edi + 0xe8]
        xor     eax, eax
        lea     ecx, [ebp - 0x60]
        mov     dword ptr [ebp - 0x64], ecx
        fst     dword ptr [edi + 0xf8]
        mov     dword ptr [edi + 0x100], eax
        fld     dword ptr [edi + 0xf0]
        mov     dword ptr [edi + 0x10c], eax
        fmul    dword ptr [edi + 0xe8]
        mov     dword ptr [edi + 0x118], eax
        mov     dword ptr [edi + 0x124], eax
        mov     eax, dword ptr [ebx + 0x194]
        fst     dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp - 0xc]
        fld     st(0)
        mov     dword ptr [ebp - 0xc], eax
        mov     al, byte ptr [ebx + 0x1a0]
        fchs
        test    al, al
        fst     dword ptr [edi + 0xfc]
        fld     st(2)
        mov     dword ptr [edi + 0x120], ecx
        mov     ecx, dword ptr [ebx + 0x19c]
        fchs
        fst     dword ptr [ebp - 0x4]
        mov     edx, dword ptr [ebp - 0x4]
        fstp    dword ptr [edi + 0x104]
        mov     dword ptr [edi + 0x110], edx
        mov     edx, dword ptr [ebx + 0x18c]
        fstp    dword ptr [edi + 0x108]
        mov     dword ptr [ebp - 0x10], edx
        mov     dword ptr [ebp - 0x4], ecx
        fstp    dword ptr [edi + 0x114]
        fstp    dword ptr [edi + 0x11c]
        fld     dword ptr [ebx + 0x184]
        fst     dword ptr [ebp - 0x30]
        jz      L6932
        mov     edx, dword ptr [edi + 0x90]
        fstp    st(0)
        mov     eax, edx
        lea     esi, [ebx + 0x15c]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp - 0x8], edx
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x8]
        mov     edx, dword ptr [esi + 0x4]
        lea     ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea     eax, [edx + ecx*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [ebx + 0x17c]
        test    al, al
        fst     dword ptr [ebp - 0x8]
        jz      L68D0
        fstp    st(0)
        push    0x0
        fld     dword ptr [edi + 0x98]
        push    ecx
        fstp    dword ptr [esp]
        lea     ecx, [ebx + 0x168]
        call    FUN_00495e10
        fmul    dword ptr [ebp - 0x8]
L68D0:
        mov     al, byte ptr [ebx + 0x1a1]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp - 0x8]
        mov     esi, eax
        mov     eax, ecx
        and     eax, 0xff
        cdq
        and     esi, 0xff
        idiv    esi
        mov     dl, al
        mov     al, byte ptr [ebx + 0x1a1]
        imul    dl
        sub     cl, al
        mov     byte ptr [ebp - 0x14], dl
        mov     eax, dword ptr [ebp - 0x14]
        and     ecx, 0xff
        mov     dword ptr [ebp - 0x8], ecx
        fild    dword ptr [ebp - 0x8]
        and     eax, 0xff
        mov     dword ptr [ebp - 0x14], eax
        fmul    dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x30]
        fild    dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x10]
L6932:
        fld     dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [edi + 0x90]
        fadd    st(0), st(1)
        fld     dword ptr [ebp - 0x4]
        mov     edx, ecx
        fadd    dword ptr [ebp - 0x10]
        mov     dword ptr [edi + 0x17c], ecx
        fld     st(2)
        mov     ecx, eax
        fstp    dword ptr [edi + 0x168]
        lea     esi, [ebx + 0x64]
        push    ecx
        fst     dword ptr [edi + 0x16c]
        mov     ecx, esi
        fld     st(1)
        mov     dword ptr [edi + 0x184], edx
        fstp    dword ptr [edi + 0x170]
        mov     dword ptr [ebp - 0x4], eax
        fstp    dword ptr [edi + 0x174]
        fstp    dword ptr [edi + 0x178]
        fstp    dword ptr [edi + 0x180]
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        lea     edx, [eax + eax*2]
        mov     eax, dword ptr [esi + 0x4]
        fsub    dword ptr [eax + edx*4]
        lea     eax, [eax + edx*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [ebx + 0x7c]
        test    al, al
        jz      L69B6
        fld     dword ptr [edi + 0x98]
        fmul    dword ptr [ebx + 0x78]
        fadd    dword ptr [ebx + 0x74]
        fmulp   st(1), st(0)
L69B6:
        mov     ecx, dword ptr [edi + 0x90]
        fmul    dword ptr [edi + 0x18c]
        mov     edx, ecx
        mov     dword ptr [ebp - 0x4], ecx
        lea     esi, [ebx + 0x84]
        fstp    dword ptr [edi + 0xd4]
        push    edx
        mov     ecx, esi
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        lea     eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea     eax, [ecx + eax*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [ebx + 0x9c]
        test    al, al
        jz      L6A0E
        fld     dword ptr [edi + 0x98]
        fmul    dword ptr [ebx + 0x98]
        fadd    dword ptr [ebx + 0x94]
        fmulp   st(1), st(0)
L6A0E:
        mov     edx, dword ptr [edi + 0x90]
        fmul    dword ptr [edi + 0x18c]
        mov     eax, edx
        lea     esi, [ebx + 0xa4]
        push    eax
        fstp    dword ptr [edi + 0xd8]
        mov     ecx, esi
        mov     dword ptr [ebp - 0x4], edx
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        mov     edx, dword ptr [esi + 0x4]
        lea     ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea     eax, [edx + ecx*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [ebx + 0xbc]
        test    al, al
        jz      L6A66
        fld     dword ptr [edi + 0x98]
        fmul    dword ptr [ebx + 0xb8]
        fadd    dword ptr [ebx + 0xb4]
        fmulp   st(1), st(0)
L6A66:
        mov     eax, dword ptr [edi + 0x90]
        fmul    dword ptr [edi + 0x18c]
        mov     ecx, eax
        lea     esi, [ebx + 0xc4]
        push    ecx
        fstp    dword ptr [edi + 0xdc]
        mov     ecx, esi
        mov     dword ptr [ebp - 0x4], eax
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        lea     edx, [eax + eax*2]
        mov     eax, dword ptr [esi + 0x4]
        fsub    dword ptr [eax + edx*4]
        lea     eax, [eax + edx*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [ebx + 0xdc]
        test    al, al
        jz      L6ABE
        fld     dword ptr [edi + 0x98]
        fmul    dword ptr [ebx + 0xd8]
        fadd    dword ptr [ebx + 0xd4]
        fmulp   st(1), st(0)
L6ABE:
        mov     ecx, dword ptr [edi + 0xd4]
        fstp    dword ptr [edi + 0xe0]
        mov     edx, dword ptr [edi + 0xd8]
        mov     eax, dword ptr [edi + 0xdc]
        mov     dword ptr [edi + 0x128], ecx
        mov     ecx, dword ptr [edi + 0xe0]
        mov     dword ptr [edi + 0x130], eax
        mov     dword ptr [edi + 0x12c], edx
        mov     edx, dword ptr [edi + 0xd4]
        mov     eax, dword ptr [edi + 0xd8]
        mov     dword ptr [edi + 0x134], ecx
        mov     ecx, dword ptr [edi + 0xdc]
        mov     dword ptr [edi + 0x13c], eax
        mov     dword ptr [edi + 0x138], edx
        mov     edx, dword ptr [edi + 0xe0]
        mov     eax, dword ptr [edi + 0xd4]
        mov     dword ptr [edi + 0x140], ecx
        mov     ecx, dword ptr [edi + 0xd8]
        mov     dword ptr [edi + 0x144], edx
        mov     edx, dword ptr [edi + 0xdc]
        mov     dword ptr [edi + 0x148], eax
        mov     eax, dword ptr [edi + 0xe0]
        mov     dword ptr [edi + 0x154], eax
        mov     dword ptr [edi + 0x14c], ecx
        mov     ecx, dword ptr [edi + 0xd4]
        mov     dword ptr [edi + 0x150], edx
        mov     eax, dword ptr [edi + 0xdc]
        mov     edx, dword ptr [edi + 0xd8]
        mov     dword ptr [edi + 0x160], eax
        mov     al, byte ptr [ebx + 0x11d]
        test    al, al
        mov     dword ptr [edi + 0x158], ecx
        mov     ecx, dword ptr [edi + 0xe0]
        mov     dword ptr [edi + 0x15c], edx
        mov     dword ptr [edi + 0x164], ecx
        jz      L6BDF
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x20]
        fld     dword ptr [eax + 0x50]
        mov     ecx, dword ptr [eax + 0x60]
        fsub    dword ptr [ebp - 0x54]
        mov     edx, dword ptr [eax + 0x70]
        add     eax, 0x44
        mov     al, byte ptr [ebx + 0x11e]
        test    al, al
        fstp    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x28], ecx
        fld     dword ptr [ebp - 0x28]
        fsub    dword ptr [ebp - 0x44]
        mov     dword ptr [ebp - 0x24], edx
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x24]
        fsub    dword ptr [ebp - 0x34]
        fstp    dword ptr [ebp - 0x18]
        jz      L6BD3
        push    0x0
        push    0x1
        push    0x2
        lea     eax, [ebp - 0x20]
        jmp     L6C22
L6BD3:
        push    -0x1
        push    0x0
        push    0x2
        lea     ecx, [ebp - 0x20]
        push    ecx
        jmp     L6C23
L6BDF:
        mov     al, byte ptr [ebx + 0x11e]
        test    al, al
        jz      L6C2B
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x20]
        fld     dword ptr [eax + 0x50]
        mov     ecx, dword ptr [eax + 0x60]
        fsub    dword ptr [ebp - 0x54]
        mov     edx, dword ptr [eax + 0x70]
        add     eax, 0x44
        mov     dword ptr [ebp - 0x28], ecx
        fstp    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x24], edx
        fld     dword ptr [ebp - 0x28]
        push    -0x1
        fsub    dword ptr [ebp - 0x44]
        push    0x1
        push    0x2
        lea     eax, [ebp - 0x20]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x24]
        fsub    dword ptr [ebp - 0x34]
        fstp    dword ptr [ebp - 0x18]
L6C22:
        push    eax
L6C23:
        lea     ecx, [ebp - 0x60]
        call    FUN_0041fde0
L6C2B:
        mov     esi, dword ptr [ebp + 0x8]
        lea     ecx, [ebp - 0x84]
        push    ecx
        mov     ecx, dword ptr [esi + 0x20]
        call    FUN_0048e890
        push    esi
        mov     ecx, edi
        call    FUN_00494990
L6C45:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
