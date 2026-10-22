/*
 * FUN_004c5040 (1179 B) - MLR node/mesh transform helper. __thiscall.
 * Computes a 4x4 matrix multiply (transform) into the node's matrix,
 * then walks a linked list of child nodes via virtual calls, computing
 * bounding-sphere radii and transforming child matrices.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00419ad0(void);

extern int   g_007dab04;   /* DAT_007dab04 */
extern float g_0076c5b0;   /* _DAT_0076c5b0 */

__declspec(naked) void __fastcall FUN_004c5040(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x74
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        test    byte ptr [edi + 0x18], 0x1
        jnz     L51F1
        mov     eax, dword ptr [edi + 0x10]
        add     eax, 0x80
        lea     ecx, [edi + 0x50]
        lea     ebx, [edi + 0x80]
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 0x4], ebx
        mov     edx, dword ptr [ebp - 0xc]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
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
        jmp     L5208
L51F1:
        mov     edx, dword ptr [edi + 0x10]
        add     edx, 0x80
        lea     ebx, [edi + 0x80]
        push    edx
        mov     ecx, ebx
        call    FUN_00419460
L5208:
        lea     eax, [edi + 0x144]
        push    eax
        lea     ecx, [ebp - 0x18]
        call    FUN_004c41d0
        mov     ecx, dword ptr [edi + 0x18]
        shr     ecx, 0x1
        test    cl, 0x1
        mov     dword ptr [ebp - 0x18], 0x7714a4
        jz      L52ED
        mov     dword ptr [ebp - 0x4], ebx
        lea     ebx, [edi + 0xb0]
        lea     ecx, [edi + 0xf0]
        mov     dword ptr [ebp - 0x8], ebx
        mov     dword ptr [ebp - 0xc], ecx
        mov     edx, dword ptr [ebp - 0x4]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0xc]
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x8]
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
        mov     edx, dword ptr [ebx + 0x3c]
        mov     eax, dword ptr [edi]
        mov     dword ptr [ecx + 0x3c], edx
        mov     edx, dword ptr [edi + 0x18]
        and     edx, 0xfffffff7
        mov     ecx, edi
        mov     dword ptr [edi + 0x18], edx
        call    dword ptr [eax + 0x10]
        lea     ecx, [ebp - 0x18]
        call    FUN_0040c0e0
        test    eax, eax
        jz      L54D4
L52D5:
        mov     ecx, eax
        call    dword ptr [eax + 0x1c]
        lea     ecx, [ebp - 0x18]
        call    FUN_0040c0e0
        test    eax, eax
        jnz     L52D5
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L52ED:
        push    0x7b8d88
        lea     ecx, [ebp - 0x34]
        call    FUN_0040c5d0
        lea     ecx, [ebp - 0x18]
        mov     dword ptr [ebp - 0x28], 0x0
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jz      L53F1
L5313:
        mov     ecx, esi
        call    dword ptr [esi + 0x1c]
        mov     ecx, dword ptr [esi + 0x18]
        and     ecx, 0xc0
        cmp     cl, 0x40
        jnz     L53DF
        lea     edx, [esi + 0x50]
        push    edx
        lea     ecx, [ebp - 0x74]
        call    FUN_00419460
        lea     eax, [esi + 0xb0]
        push    eax
        lea     ecx, [ebp - 0x24]
        call    FUN_00419480
        mov     eax, dword ptr [g_007dab04]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L5392
        fld     dword ptr [ebp - 0x20]
        mov     ecx, dword ptr [ebp - 0x68]
        fld     dword ptr [ebp - 0x1c]
        mov     edx, dword ptr [ebp - 0x58]
        fld     dword ptr [ebp - 0x24]
        mov     eax, dword ptr [ebp - 0x48]
        fmul    dword ptr [ebp - 0x24]
        mov     dword ptr [ebp - 0x44], ecx
        fld     st(1)
        mov     dword ptr [ebp - 0x40], edx
        fmul    st(0), st(2)
        mov     dword ptr [ebp - 0x3c], eax
        faddp   st(1), st(0)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fsqrt
        fstp    st(2)
        fstp    st(0)
        fadd    dword ptr [esi + 0xec]
        fstp    dword ptr [ebp - 0x38]
        jmp     L53AB
L5392:
        lea     ecx, [ebp - 0x74]
        push    ecx
        lea     edx, [ebp - 0x24]
        push    edx
        lea     ecx, [ebp - 0x44]
        call    FUN_0041c7d0
        mov     eax, dword ptr [esi + 0xec]
        mov     dword ptr [ebp - 0x38], eax
L53AB:
        fld     dword ptr [ebp - 0x28]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      L53CF
        lea     ecx, [ebp - 0x44]
        push    ecx
        lea     ecx, [ebp - 0x34]
        call    FUN_0040c410
        mov     edx, dword ptr [ebp - 0x38]
        mov     dword ptr [ebp - 0x28], edx
        jmp     L53DF
L53CF:
        lea     eax, [ebp - 0x44]
        push    eax
        lea     ecx, [ebp - 0x34]
        push    ecx
        lea     ecx, [ebp - 0x34]
        call    FUN_00419ad0
L53DF:
        lea     ecx, [ebp - 0x18]
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jnz     L5313
L53F1:
        mov     edx, dword ptr [ebp - 0x28]
        mov     eax, dword ptr [ebp - 0x34]
        lea     ecx, [edi + 0xb0]
        mov     dword ptr [ecx + 0x3c], edx
        mov     edx, dword ptr [ebp - 0x30]
        mov     dword ptr [ecx + 0xc], eax
        mov     eax, dword ptr [ebp - 0x2c]
        mov     dword ptr [ecx + 0x1c], edx
        mov     dword ptr [ecx + 0x2c], eax
        fld     dword ptr [edi + 0xec]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF            /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      L5444
        mov     ecx, dword ptr [edi + 0x18]
        mov     edx, dword ptr [edi]
        and     ecx, 0xffffffbf
        or      ecx, 0x80
        mov     dword ptr [edi + 0x18], ecx
        mov     ecx, edi
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x14]
        jmp     L54C9
L5444:
        mov     dword ptr [ebp - 0x4], ebx
        mov     ebx, ecx
        lea     ecx, [edi + 0xf0]
        mov     dword ptr [ebp - 0x8], ebx
        mov     dword ptr [ebp - 0xc], ecx
        mov     edx, dword ptr [ebp - 0x4]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0xc]
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x8]
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
        mov     edx, dword ptr [ebx + 0x3c]
        mov     dword ptr [ecx + 0x3c], edx
L54C9:
        and     dword ptr [edi + 0x18], 0xfffffff7
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x10]
L54D4:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
