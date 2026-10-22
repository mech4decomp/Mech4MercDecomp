/*
 * FUN_00455680 (1763 B) — MLR render/material helper (__thiscall, RET 0x14).
 * Builds transformed vertex data, applies material/lighting constants, and
 * updates index buffers. Contains FPU matrix/vertex transform blocks.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da848;      /* pointer table base */
extern int g_007da864;      /* material flag */
extern int g_007da600;      /* pointer */
extern int g_007da5f4;      /* pointer */
extern char g_007da86c;     /* flags byte */
extern int g_007b2210;      /* global flag */
extern float g_0076d064;
extern float g_007da87c;
extern float g_007da874;
extern float g_007da878;
extern float g_007da870;
extern float g_0076d070;
extern float g_0076dd60;
extern int g_007d98fc;      /* pointer */
extern int __cdecl FUN_00491cd0(void);
extern char __cdecl FUN_00421f00(int);

__declspec(naked) void FUN_00455680(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x30
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx+0x24]
        and     eax, 0x3fff
        push    esi
        push    edi
        mov     byte ptr [ebp-1], 0
        mov     dword ptr [ebp-0x14], 0
        mov     dword ptr [ebp-0x18], 0
        jz      L_455761
        test    eax, eax
        jle     L_455761
        mov     ecx, dword ptr [g_007da848]
        mov     esi, dword ptr [ecx+eax*4+0x24]
        test    esi, esi
        jz      L_455761
        mov     edx, dword ptr [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [edx+4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        jl      L_4556e8
        mov     dword ptr [g_007da864], 1
        jmp     L_455743
L_4556e8:
        cmp     eax, 0x80
        jl      L_4556fb
        mov     dword ptr [g_007da864], 2
        jmp     L_455743
L_4556fb:
        cmp     eax, 0x40
        jl      L_45570c
        mov     dword ptr [g_007da864], 4
        jmp     L_455743
L_45570c:
        cmp     eax, 0x20
        jl      L_45571d
        mov     dword ptr [g_007da864], 8
        jmp     L_455743
L_45571d:
        cmp     eax, 0x10
        jl      L_45572e
        mov     dword ptr [g_007da864], 0x10
        jmp     L_455743
L_45572e:
        xor     ecx, ecx
        cmp     eax, 8
        setl    cl
        dec     ecx
        and     ecx, 0xffffffe0
        add     ecx, 0x40
        mov     dword ptr [g_007da864], ecx
L_455743:
        mov     al, byte ptr [esi+0x24]
        test    al, al
        jnz     L_455770
        mov     esi, dword ptr [esi+0x28]
        test    esi, esi
        jz      L_455770
        mov     edx, dword ptr [esi+0xc]
        mov     eax, dword ptr [esi+0x1c]
        mov     byte ptr [ebp-1], 1
        mov     dword ptr [ebp-0x14], edx
        mov     dword ptr [ebp-0x18], eax
L_455761:
        mov     dl, byte ptr [ebp+0x18]
        test    dl, dl
        jz      L_455776
        mov     esi, dword ptr [ebp+0xc]
        mov     eax, dword ptr [esi+0x38]
        jmp     L_455788
L_455770:
        mov     byte ptr [ebp-1], 0
        jmp     L_455761
L_455776:
        mov     ecx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ecx+4]
        mov     ecx, dword ptr [ecx+0x18]
        mov     esi, dword ptr [ebp+0xc]
        lea     eax, [eax+eax*4]
        lea     eax, [ecx+eax*8]
L_455788:
        mov     dword ptr [ebx+0xa4], eax
        mov     eax, dword ptr [ebx+0x68]
        and     eax, 0x3fff
        mov     dword ptr [ebp-0x1c], 0
        mov     dword ptr [ebp-0x20], 0
        jz      L_4557d2
        test    eax, eax
        jle     L_4557d2
        mov     ecx, dword ptr [g_007da848]
        mov     eax, dword ptr [ecx+eax*4+0x24]
        test    eax, eax
        jz      L_4557d2
        mov     cl, byte ptr [eax+0x24]
        test    cl, cl
        jnz     L_4557d2
        mov     eax, dword ptr [eax+0x28]
        test    eax, eax
        jz      L_4557d2
        mov     ecx, dword ptr [eax+0xc]
        mov     eax, dword ptr [eax+0x1c]
        mov     dword ptr [ebp-0x1c], ecx
        mov     dword ptr [ebp-0x20], eax
L_4557d2:
        mov     eax, dword ptr [ebx+0x18]
        cmp     eax, 0x100
        mov     dword ptr [ebp-0x10], eax
        jle     L_4557e6
        mov     dword ptr [ebp-0x10], 0x100
L_4557e6:
        test    dl, dl
        jz      L_4557ef
        mov     eax, dword ptr [esi+0x30]
        jmp     L_4557f9
L_4557ef:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esi+0x10]
        shl     eax, 5
        add     eax, ecx
L_4557f9:
        test    dl, dl
        mov     dword ptr [ebx+0x44], eax
        jz      L_455805
        mov     eax, dword ptr [esi+0x38]
        jmp     L_455811
L_455805:
        mov     eax, dword ptr [esi+4]
        lea     ecx, [eax+eax*4]
        mov     eax, dword ptr [esi+0x18]
        lea     eax, [eax+ecx*8]
L_455811:
        xor     edi, edi
        cmp     word ptr [ebx+0x56], di
        mov     dword ptr [ebx+0xa4], eax
        mov     word ptr [ebx+0xa], di
        jnz     L_455830
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx+0x98]
        mov     dl, byte ptr [ebp+0x18]
L_455830:
        mov     ecx, dword ptr [ebp-0x10]
        xor     eax, eax
        cmp     ecx, eax
        mov     dword ptr [ebp-8], eax
        jle     L_455b52
        mov     dword ptr [ebp-0xc], eax
L_455843:
        mov     eax, dword ptr [g_007da600]
        mov     ecx, dword ptr [eax]
        cmp     byte ptr [ecx+edi], 0
        jnz     L_455858
        inc     dword ptr [ebp-8]
        jmp     L_455b3d
L_455858:
        mov     ecx, dword ptr [ebp-8]
        mov     eax, dword ptr [g_007da5f4]
        mov     edx, edi
        sub     edx, ecx
        mov     dword ptr [eax+edi*2], edx
        test    byte ptr [g_007da86c], 2
        jle     L_4559d0
        mov     eax, dword ptr [ebx+0x28]
        __emit  0xF6   /* test ah,imm8: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x3C
        jz      L_4559d0
        cmp     dword ptr [g_007b2210], 1
        jnz     L_4559d0
        mov     ecx, dword ptr [ebx+0x1c]
        fld     dword ptr [ebx+0x9c]
        fmul    dword ptr [ecx+edi*8]
        mov     eax, dword ptr [ebx+0x14]
        mov     edx, dword ptr [ebp-0xc]
        lea     esi, [ecx+edi*8]
        fadd    dword ptr [ebx+0x94]
        mov     ecx, dword ptr [ebx+0xa4]
        add     edx, eax
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        fstp    dword ptr [ebp-0x30]
        fld     dword ptr [esi+4]
        mov     dword ptr [ebp-0x28], edx
        fmul    dword ptr [ebx+0xa0]
        fadd    dword ptr [ebx+0x98]
        lea     eax, [eax+eax*4]
        lea     ecx, [ecx+eax*8]
        fstp    dword ptr [ebp-0x2c]
        mov     dword ptr [ebp-0x24], ecx
        mov     edx, dword ptr [ebp+8]
        mov     eax, dword ptr [ebp-0x28]
        fld     dword ptr [eax]
        fld     dword ptr [eax+4]
        fld     dword ptr [eax+8]
        mov     eax, dword ptr [ebp-0x24]
        fld     dword ptr [edx+0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx+0x38]
        fmul    st(0), st(2)
        fxch    st(1)
        fadd    dword ptr [edx+0x3c]
        fld     dword ptr [edx+0x30]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax+0xc]
        fadd    dword ptr [edx+0x1c]
        fld     dword ptr [edx+0x10]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x24]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x28]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax+4]
        fadd    dword ptr [edx+0x2c]
        fld     dword ptr [edx+0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+8]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax+8]
        fadd    dword ptr [edx+0xc]
        fld     dword ptr [edx]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [g_0076d064]
        fdiv    dword ptr [ecx+0xc]
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esi+4]
        mov     dword ptr [ecx+0x1c], eax
        mov     eax, dword ptr [ebp-0x2c]
        mov     dword ptr [ecx+0x24], eax
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        mov     dword ptr [ecx+0x18], edx
        mov     edx, dword ptr [ebp-0x30]
        mov     dword ptr [ecx+0x20], edx
        mov     edx, dword ptr [ebx+0xa4]
        fst     dword ptr [ecx+0xc]
        fld     st(0)
        fmul    dword ptr [ecx+8]
        fstp    dword ptr [ecx+8]
        fld     st(0)
        fmul    dword ptr [ecx]
        fmul    dword ptr [g_007da87c]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ecx]
        fmul    dword ptr [ecx+4]
        fmul    dword ptr [g_007da878]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ecx+4]
        lea     ecx, [eax+eax*4]
        mov     eax, dword ptr [ebp+0x14]
        mov     dword ptr [edx+ecx*8+0x10], eax
        jmp     L_455ad5
L_4559d0:
        mov     ecx, dword ptr [ebx+0x1c]
        mov     edx, dword ptr [ebp-0xc]
        lea     esi, [ecx+edi*8]
        add     edx, dword ptr [ebx+0x14]
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        mov     dword ptr [ebp-0x24], edx
        mov     edx, dword ptr [ebx+0x44]
        shl     ecx, 5
        add     ecx, edx
        mov     dword ptr [ebp-0x28], ecx
        mov     edx, dword ptr [ebp+8]
        mov     eax, dword ptr [ebp-0x24]
        fld     dword ptr [eax]
        fld     dword ptr [eax+4]
        fld     dword ptr [eax+8]
        mov     eax, dword ptr [ebp-0x28]
        fld     dword ptr [edx+0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx+0x38]
        fmul    st(0), st(2)
        fxch    st(1)
        fadd    dword ptr [edx+0x3c]
        fld     dword ptr [edx+0x30]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax+0xc]
        fadd    dword ptr [edx+0x1c]
        fld     dword ptr [edx+0x10]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x24]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x28]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax+4]
        fadd    dword ptr [edx+0x2c]
        fld     dword ptr [edx+0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+8]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax+8]
        fadd    dword ptr [edx+0xc]
        fld     dword ptr [edx]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [g_0076d064]
        fdiv    dword ptr [ecx+0xc]
        fst     dword ptr [ecx+0xc]
        fld     st(0)
        fmul    dword ptr [ecx+8]
        fstp    dword ptr [ecx+8]
        fld     st(0)
        fmul    dword ptr [ecx]
        fmul    dword ptr [g_007da87c]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ecx]
        mov     eax, dword ptr [esi]
        mov     dword ptr [ecx+0x18], eax
        fmul    dword ptr [ecx+4]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        fmul    dword ptr [g_007da878]
        fadd    dword ptr [g_007da870]
        shl     eax, 5
        fstp    dword ptr [ecx+4]
        mov     edx, dword ptr [esi+4]
        mov     dword ptr [ecx+0x1c], edx
        mov     ecx, dword ptr [ebx+0x44]
        mov     edx, dword ptr [ebp+0x14]
        mov     dword ptr [eax+ecx+0x10], edx
L_455ad5:
        mov     al, byte ptr [ebp-1]
        test    al, al
        jz      L_455b0e
        mov     ecx, dword ptr [ebx+0x44]
        fld     dword ptr [ebp-0x14]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        xor     edx, edx
        shl     eax, 5
        fadd    dword ptr [eax+ecx+0x18]
        lea     eax, [eax+ecx+0x18]
        fstp    dword ptr [eax]
        mov     dx, word ptr [ebx+0xa]
        mov     eax, dword ptr [ebx+0x44]
        fld     dword ptr [ebp-0x18]
        shl     edx, 5
        fadd    dword ptr [edx+eax+0x1c]
        lea     eax, [edx+eax+0x1c]
        fstp    dword ptr [eax]
L_455b0e:
        mov     ecx, dword ptr [ebp+0x10]
        test    ecx, ecx
        jz      L_455b33
        mov     eax, dword ptr [ebx+0x14]
        mov     edx, dword ptr [ebp-0xc]
        add     edx, eax
        push    edx
        call    FUN_00421f00
        mov     edx, dword ptr [ebx+0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        shl     ecx, 5
        mov     byte ptr [ecx+edx+0x17], al
L_455b33:
        inc     word ptr [ebx+0xa]
        mov     esi, dword ptr [ebp+0xc]
        mov     dl, byte ptr [ebp+0x18]
L_455b3d:
        mov     ecx, dword ptr [ebp-0xc]
        mov     eax, dword ptr [ebp-0x10]
        inc     edi
        add     ecx, 0xc
        cmp     edi, eax
        mov     dword ptr [ebp-0xc], ecx
        jl      L_455843
L_455b52:
        cmp     dword ptr [g_007b2210], 1
        jnz     L_455d43
        test    byte ptr [g_007da86c], 2
        jle     L_455c45
        mov     eax, dword ptr [ebx+0x28]
        __emit  0xF6   /* test ah,imm8: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x3C
        jz      L_455c45
        test    dl, dl
        jnz     L_455d5b
        mov     ecx, dword ptr [esi+4]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        add     ecx, eax
        mov     dword ptr [esi+4], ecx
L_455b8e:
        mov     eax, dword ptr [esi+0xc]
        mov     ecx, dword ptr [esi+0x28]
        lea     eax, [ecx+eax*2]
L_455b97:
        mov     ecx, dword ptr [ebx+0x58]
        xor     edx, edx
        xor     edi, edi
        cmp     ecx, edx
        mov     dword ptr [ebx+0x50], eax
        mov     word ptr [ebx+0x54], dx
        mov     dword ptr [ebp+0x14], edx
        mov     dword ptr [ebp+8], edx
        jle     L_455c18
        mov     ecx, dword ptr [g_007d98fc]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [ebp+0x10], ecx
        mov     ecx, dword ptr [g_007da5f4]
        mov     esi, dword ptr [ebp+0x10]
L_455bc0:
        cmp     byte ptr [esi+edx], 0
        jz      L_455c06
        mov     edx, dword ptr [ebx+0x48]
        mov     esi, dword ptr [ebp+8]
        add     esi, edx
        xor     edx, edx
        mov     dl, byte ptr [esi]
        add     eax, 2
        inc     edi
        add     eax, 2
        mov     dx, word ptr [ecx+edx*2]
        mov     word ptr [eax-4], dx
        xor     edx, edx
        mov     dl, byte ptr [esi+2]
        inc     edi
        mov     dx, word ptr [ecx+edx*2]
        mov     word ptr [eax-2], dx
        xor     edx, edx
        mov     dl, byte ptr [esi+1]
        inc     edi
        add     eax, 2
        mov     dx, word ptr [ecx+edx*2]
        mov     word ptr [eax-2], dx
        mov     edx, dword ptr [ebp+0x14]
L_455c06:
        add     dword ptr [ebp+8], 3
        mov     esi, dword ptr [ebx+0x58]
        inc     edx
        cmp     edx, esi
        mov     dword ptr [ebp+0x14], edx
        __emit  0x7C   /* backward jl L_455bc0: MSVC6 miscomputes rel8 (off-by-3) due to call-reloc in loop body */
        __emit  0xAB
        mov     esi, dword ptr [ebp+0xc]
L_455c18:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        mov     word ptr [ebx+0x54], di
        jnz     L_455c31
        mov     eax, dword ptr [esi+0xc]
        and     edi, 0xffff
        add     eax, edi
        mov     dword ptr [esi+0xc], eax
L_455c31:
        cmp     word ptr [ebx+0xa], 0
        pop     edi
        setnz   al
        pop     esi
        mov     byte ptr [ebx+0x10], al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
L_455c45:
        mov     esi, dword ptr [ebx+0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        mov     dword ptr [ebp-8], 0
        shl     ecx, 5
        lea     edi, [esi+ecx]
        mov     edx, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        xor     edx, edx
        rep     movsb
        mov     dx, word ptr [ebx+0xa]
        test    edx, edx
        jle     L_455d23
        mov     eax, dword ptr [ebx+0x44]
        mov     ecx, edx
        shl     ecx, 5
        lea     ecx, [ecx+eax+0xc]
        lea     esi, [eax+0x1c]
        mov     edi, edx
L_455c88:
        fld     dword ptr [esi-4]
        fmul    dword ptr [ebx+0x9c]
        fadd    dword ptr [ebx+0x94]
        fadd    dword ptr [ebp-0x1c]
        fstp    dword ptr [ecx+0xc]
        fld     dword ptr [ebx+0xa0]
        fmul    dword ptr [esi]
        fadd    dword ptr [ebp-0x20]
        fadd    dword ptr [ebx+0x98]
        fstp    dword ptr [ecx+0x10]
        fld     dword ptr [ecx]
        fcomp   dword ptr [ebx+0x8c]
        __emit  0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        __emit  0xF6   /* test ah,imm8: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x01
        jz      L_455cc9
        and     dword ptr [ecx+4], 0xffffff
        jmp     L_455d0f
L_455cc9:
        fld     dword ptr [ecx]
        mov     eax, dword ptr [ebp-8]
        fcomp   dword ptr [ebx+0x88]
        inc     eax
        mov     dword ptr [ebp-8], eax
        __emit  0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        __emit  0xF6   /* test ah,imm8: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x01
        jz      L_455d0f
        fld     dword ptr [ecx]
        fsub    dword ptr [ebx+0x8c]
        fmul    dword ptr [ebx+0x90]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp+8]
        mov     eax, dword ptr [ebp+8]
        and     eax, 0xffff
        shl     eax, 0x18
        or      eax, 0xffffff
        and     dword ptr [ecx+4], eax
L_455d0f:
        add     esi, 0x20
        add     ecx, 0x20
        dec     edi
        jnz     L_455c88
        mov     eax, dword ptr [ebp-8]
        test    eax, eax
        jnz     L_455d29
L_455d23:
        mov     byte ptr [ebx+0x64], 0
        jmp     L_455d2d
L_455d29:
        mov     byte ptr [ebx+0x64], 1
L_455d2d:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        jnz     L_455d58
        mov     eax, dword ptr [ebp+0xc]
        lea     ecx, [edx+edx]
        add     dword ptr [eax], ecx
        mov     esi, eax
        jmp     L_455b8e
L_455d43:
        test    dl, dl
        jnz     L_455d5b
        mov     eax, dword ptr [esi]
        xor     edx, edx
        mov     dx, word ptr [ebx+0xa]
        add     eax, edx
        mov     dword ptr [esi], eax
        jmp     L_455b8e
L_455d58:
        mov     esi, dword ptr [ebp+0xc]
L_455d5b:
        mov     eax, dword ptr [esi+0x48]
        jmp     L_455b97
    }
}
