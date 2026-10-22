/*
 * FUN_004bdaf0 (1089 B) — MLR object method (__thiscall). Performs a 3x3
 * matrix multiply (FPU) into [ebx+0x80] (or a copy via FUN_00419460 if
 * [ebx+0x18]&1), iterates a sub-object array calling virtual method
 * (vtable+0x1c), computes a closest-approach distance (FPU, sqrt) into
 * [ebx+0xec], performs a second matrix multiply into [ebx+0xb0]/[ebx+0xf0],
 * then clears a flag bit and calls virtual method (vtable+0x10).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00419460(void);
extern void FUN_0040c5d0(void);
extern void FUN_00419480(void);
extern void FUN_0041c7d0(void);
extern void FUN_0040c9e0(void);
extern void FUN_0040caa0(void);
extern void FUN_0040d030(void);

__declspec(naked) void FUN_004bdaf0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x64
        push    ebx
        mov     ebx, ecx
        test    byte ptr [ebx + 0x18], 1
        push    esi
        push    edi
        jnz     L_bdca1
        mov     eax, dword ptr [ebx + 0x10]
        add     eax, 0x80
        mov     dword ptr [ebp - 4], eax
        lea     ecx, [ebx + 0x50]
        lea     eax, [ebx + 0x80]
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 8], eax
        mov     edx, dword ptr [ebp - 0xc]
        push    esi
        mov     esi, dword ptr [ebp - 4]
        mov     eax, dword ptr [ebp - 8]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
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
        fld     dword ptr [edx + 4]
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
        fld     dword ptr [edx + 8]
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
        fld     dword ptr [edx + 4]
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
        fld     dword ptr [edx + 8]
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
        jmp     L_bdcb6
L_bdca1:
        mov     edx, dword ptr [ebx + 0x10]
        add     edx, 0x80
        lea     ecx, [ebx + 0x80]
        push    edx
        call    FUN_00419460
L_bdcb6:
        mov     esi, dword ptr [ebx + 0x148]
        push    0x7b8d88
        lea     ecx, [ebp - 0x1c]
        call    FUN_0040c5d0
        xor     edi, edi
        test    si, si
        jbe     L_bdd59
        mov     eax, dword ptr [ebx + 0x144]
        mov     dword ptr [ebp - 4], eax
        mov     eax, esi
        and     eax, 0xffff
        mov     dword ptr [ebp - 0x10], eax
        mov     dword ptr [ebp - 8], eax
L_bdcea:
        mov     ecx, dword ptr [ebp - 4]
        mov     esi, dword ptr [ecx]
        test    esi, esi
        jz      L_bdd42
        mov     ecx, esi
        call    dword ptr [esi + 0x1c]
        mov     edx, dword ptr [esi + 0x18]
        and     edx, 0xc0
        cmp     dl, 0x40
        jnz     L_bdd42
        lea     eax, [esi + 0x50]
        push    eax
        lea     ecx, [ebp - 0x64]
        inc     edi
        call    FUN_00419460
        add     esi, 0xb0
        push    esi
        lea     ecx, [ebp - 0x34]
        call    FUN_00419480
        lea     ecx, [ebp - 0x64]
        push    ecx
        lea     edx, [ebp - 0x34]
        push    edx
        lea     ecx, [ebp - 0x28]
        call    FUN_0041c7d0
        lea     eax, [ebp - 0x28]
        push    eax
        lea     ecx, [ebp - 0x1c]
        push    ecx
        lea     ecx, [ebp - 0x1c]
        call    FUN_0040c9e0
L_bdd42:
        mov     ecx, dword ptr [ebp - 4]
        mov     eax, dword ptr [ebp - 8]
        add     ecx, 4
        dec     eax
        mov     dword ptr [ebp - 4], ecx
        mov     dword ptr [ebp - 8], eax
        jnz     L_bdcea
        test    di, di
        jnz     L_bdd85
L_bdd59:
        mov     edx, dword ptr [ebx + 0x18]
        mov     eax, dword ptr [ebx]
        and     edx, 0xffffffbf
        or      edx, 0x80
        mov     ecx, ebx
        mov     dword ptr [ebx + 0xec], 0
        mov     dword ptr [ebx + 0x18], edx
        call    dword ptr [eax + 0x10]
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x14]
        jmp     L_bdf1a
L_bdd85:
        and     edi, 0xffff
        mov     dword ptr [ebp - 0xc], edi
        fild    dword ptr [ebp - 0xc]
        push    ecx
        lea     eax, [ebp - 0x1c]
        fstp    dword ptr [esp]
        push    eax
        lea     ecx, [ebp - 0x1c]
        call    FUN_0040caa0
        lea     edx, [ebp - 0x1c]
        lea     ecx, [ebx + 0xb0]
        push    edx
        call    FUN_0040d030
        mov     eax, dword ptr [ebx + 0x144]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr [ebx + 0xec], 0xbf800000
        mov     dword ptr [ebp - 4], eax
        mov     dword ptr [ebp - 8], ecx
L_bddc9:
        mov     edx, dword ptr [ebp - 4]
        mov     eax, dword ptr [edx]
        test    eax, eax
        jz      L_bde75
        mov     ecx, dword ptr [eax + 0x18]
        and     ecx, 0xc0
        cmp     cl, 0x40
        jnz     L_bde75
        mov     edx, dword ptr [eax + 0xbc]
        lea     esi, [eax + 0x50]
        mov     ecx, 0xc
        lea     edi, [ebp - 0x64]
        rep movsd
        mov     ecx, dword ptr [eax + 0xcc]
        mov     dword ptr [ebp - 0x34], edx
        mov     edx, dword ptr [eax + 0xdc]
        mov     dword ptr [ebp - 0x30], ecx
        lea     eax, [ebp - 0x64]
        push    eax
        lea     ecx, [ebp - 0x34]
        push    ecx
        lea     ecx, [ebp - 0x28]
        mov     dword ptr [ebp - 0x2c], edx
        call    FUN_0041c7d0
        mov     edx, dword ptr [ebp - 4]
        fld     dword ptr [ebp - 0x28]
        mov     eax, dword ptr [edx]
        fsub    dword ptr [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x28]
        fld     dword ptr [ebp - 0x24]
        fsub    dword ptr [ebp - 0x18]
        fst     dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x20]
        fsub    dword ptr [ebp - 0x14]
        fst     dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x28]
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fsqrt
        fstp    st(2)
        fstp    st(0)
        fadd    dword ptr [eax + 0xec]
        fcom    dword ptr [ebx + 0xec]
        fnstsw  ax
        __emit 0xF6 /* test ah, imm8: MSVC6 rejects test ah,imm8 */ 
        __emit 0xC4
        __emit 0x41
        jnz     L_bde73
        fstp    dword ptr [ebx + 0xec]
        jmp     L_bde75
L_bde73:
        fstp    st(0)
L_bde75:
        mov     ecx, dword ptr [ebp - 4]
        mov     eax, dword ptr [ebp - 8]
        add     ecx, 4
        dec     eax
        mov     dword ptr [ebp - 4], ecx
        mov     dword ptr [ebp - 8], eax
        jnz     L_bddc9
        lea     eax, [ebx + 0x80]
        lea     edi, [ebx + 0xb0]
        lea     ecx, [ebx + 0xf0]
        mov     dword ptr [ebp - 8], eax
        mov     dword ptr [ebp - 0xc], edi
        mov     dword ptr [ebp - 0x10], ecx
        mov     edx, dword ptr [ebp - 8]
        push    esi
        mov     esi, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ebp - 0x10]
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x2c]
        fxch    st(1)
        fadd    dword ptr [edx + 0xc]
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x2c]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x2c]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fadd    dword ptr [edx + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        pop     esi
        faddp   st(1), st(0)
        fstp    dword ptr [eax + 0x2c]
        mov     eax, dword ptr [edi + 0x3c]
        mov     dword ptr [ecx + 0x3c], eax
L_bdf1a:
        mov     eax, dword ptr [ebx + 0x18]
        mov     edx, dword ptr [ebx]
        and     eax, 0xfffffff7
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x18], eax
        call    dword ptr [edx + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
