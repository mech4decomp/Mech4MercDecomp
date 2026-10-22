/*
 * FUN_0042c2c0 (1902 B) — __thiscall, RET 0x14. MLR render-state / lightmap
 * vertex-transform: builds a per-vertex lightmap buffer, transforms vertices
 * by a matrix, and fills an index buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da848;
extern int g_007da864;
extern int g_007da600;
extern int g_007da5f4;
extern unsigned char g_007da86c;
extern int g_007b2210;
extern float g_0076d064;
extern float g_007da87c;
extern float g_007da874;
extern float g_007da878;
extern float g_007da870;
extern int g_007da664;
extern float g_0076d070;
extern float g_0076dd60;
extern int g_007d98fc;

extern void __cdecl FUN_00455680(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_00421f00(void);

__declspec(naked) void FUN_0042c2c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x2c
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx+0xac]
        test    eax, eax
        jnz     L_c2f5
        mov     eax, dword ptr [ebp+0x18]
        mov     ecx, dword ptr [ebp+0x14]
        mov     edx, dword ptr [ebp+0x10]
        push    eax
        mov     eax, dword ptr [ebp+0xc]
        push    ecx
        mov     ecx, dword ptr [ebp+0x8]
        push    edx
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_00455680
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
L_c2f5:
        mov     eax, dword ptr [ebx+0x24]
        and     eax, 0x3fff
        push    esi
        push    edi
        mov     byte ptr [ebp+0x17], 0
        mov     dword ptr [ebp-0x10], 0
        mov     dword ptr [ebp-0x14], 0
        jz      L_c3cd
        test    eax, eax
        jle     L_c3cd
        mov     edx, dword ptr [g_007da848]
        mov     esi, dword ptr [edx+eax*4+0x24]
        test    esi, esi
        jz      L_c3cd
        mov     eax, dword ptr [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [eax+0x4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        jl      L_c354
        mov     dword ptr [g_007da864], 1
        jmp     L_c3af
L_c354:
        cmp     eax, 0x80
        jl      L_c367
        mov     dword ptr [g_007da864], 2
        jmp     L_c3af
L_c367:
        cmp     eax, 0x40
        jl      L_c378
        mov     dword ptr [g_007da864], 4
        jmp     L_c3af
L_c378:
        cmp     eax, 0x20
        jl      L_c389
        mov     dword ptr [g_007da864], 8
        jmp     L_c3af
L_c389:
        cmp     eax, 0x10
        jl      L_c39a
        mov     dword ptr [g_007da864], 0x10
        jmp     L_c3af
L_c39a:
        xor     ecx, ecx
        cmp     eax, 8
        setl    cl
        dec     ecx
        and     ecx, 0xffffffe0
        add     ecx, 0x40
        mov     dword ptr [g_007da864], ecx
L_c3af:
        mov     al, byte ptr [esi+0x24]
        test    al, al
        jnz     L_c3dc
        mov     esi, dword ptr [esi+0x28]
        test    esi, esi
        jz      L_c3dc
        mov     edx, dword ptr [esi+0xc]
        mov     eax, dword ptr [esi+0x1c]
        mov     byte ptr [ebp+0x17], 1
        mov     dword ptr [ebp-0x10], edx
        mov     dword ptr [ebp-0x14], eax
L_c3cd:
        mov     dl, byte ptr [ebp+0x18]
        test    dl, dl
        jz      L_c3e2
        mov     edi, dword ptr [ebp+0xc]
        mov     eax, dword ptr [edi+0x38]
        jmp     L_c3f4
L_c3dc:
        mov     byte ptr [ebp+0x17], 0
        jmp     L_c3cd
L_c3e2:
        mov     ecx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ecx+0x4]
        mov     ecx, dword ptr [ecx+0x18]
        mov     edi, dword ptr [ebp+0xc]
        lea     eax, [eax+eax*4]
        lea     eax, [ecx+eax*8]
L_c3f4:
        mov     dword ptr [ebx+0xa4], eax
        mov     eax, dword ptr [ebx+0x68]
        and     eax, 0x3fff
        mov     dword ptr [ebp-0x18], 0
        mov     dword ptr [ebp-0x1c], 0
        jz      L_c43e
        test    eax, eax
        jle     L_c43e
        mov     ecx, dword ptr [g_007da848]
        mov     eax, dword ptr [ecx+eax*4+0x24]
        test    eax, eax
        jz      L_c43e
        mov     cl, byte ptr [eax+0x24]
        test    cl, cl
        jnz     L_c43e
        mov     eax, dword ptr [eax+0x28]
        test    eax, eax
        jz      L_c43e
        mov     ecx, dword ptr [eax+0xc]
        mov     eax, dword ptr [eax+0x1c]
        mov     dword ptr [ebp-0x18], ecx
        mov     dword ptr [ebp-0x1c], eax
L_c43e:
        mov     eax, dword ptr [ebx+0x18]
        cmp     eax, 0x100
        mov     dword ptr [ebp-0xc], eax
        jle     L_c452
        mov     dword ptr [ebp-0xc], 0x100
L_c452:
        test    dl, dl
        jz      L_c45b
        mov     eax, dword ptr [edi+0x30]
        jmp     L_c465
L_c45b:
        mov     eax, dword ptr [edi]
        mov     ecx, dword ptr [edi+0x10]
        shl     eax, 5
        add     eax, ecx
L_c465:
        test    dl, dl
        mov     dword ptr [ebx+0x44], eax
        jz      L_c471
        mov     eax, dword ptr [edi+0x38]
        jmp     L_c47d
L_c471:
        mov     eax, dword ptr [edi+0x4]
        lea     ecx, [eax+eax*4]
        mov     eax, dword ptr [edi+0x18]
        lea     eax, [eax+ecx*8]
L_c47d:
        xor     esi, esi
        cmp     word ptr [ebx+0x56], si
        mov     dword ptr [ebx+0xa4], eax
        mov     word ptr [ebx+0xa], si
        jnz     L_c49c
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx+0x98]
        mov     dl, byte ptr [ebp+0x18]
L_c49c:
        mov     ecx, dword ptr [ebp-0xc]
        xor     eax, eax
        cmp     ecx, eax
        mov     dword ptr [ebp-0x4], eax
        jle     L_c81d
        mov     dword ptr [ebp-0x8], eax
L_c4af:
        mov     eax, dword ptr [g_007da600]
        mov     ecx, dword ptr [eax]
        cmp     byte ptr [ecx+esi], 0
        jnz     L_c4c4
        inc     dword ptr [ebp-0x4]
        jmp     L_c808
L_c4c4:
        mov     ecx, dword ptr [ebp-0x4]
        mov     eax, dword ptr [g_007da5f4]
        mov     edx, esi
        sub     edx, ecx
        mov     dword ptr [eax+esi*2], edx
        test    byte ptr [g_007da86c], 2
        jle     L_c648
        mov     eax, dword ptr [ebx+0x28]
        test    ah, 0x3c
        jz      L_c648
        cmp     dword ptr [g_007b2210], 1
        jnz     L_c648
        mov     ecx, dword ptr [ebx+0x1c]
        fld     dword ptr [ebx+0x9c]
        fmul    dword ptr [ecx+esi*8]
        mov     eax, dword ptr [ebx+0x14]
        mov     edx, dword ptr [ebp-0x8]
        lea     edi, [ecx+esi*8]
        fadd    dword ptr [ebx+0x94]
        mov     ecx, dword ptr [ebx+0xa4]
        add     edx, eax
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        fstp    dword ptr [ebp-0x2c]
        fld     dword ptr [edi+0x4]
        mov     dword ptr [ebp-0x24], edx
        fmul    dword ptr [ebx+0xa0]
        fadd    dword ptr [ebx+0x98]
        lea     eax, [eax+eax*4]
        lea     ecx, [ecx+eax*8]
        fstp    dword ptr [ebp-0x28]
        mov     dword ptr [ebp-0x20], ecx
        mov     edx, dword ptr [ebp+0x8]
        mov     eax, dword ptr [ebp-0x24]
        fld     dword ptr [eax]
        fld     dword ptr [eax+0x4]
        fld     dword ptr [eax+0x8]
        mov     eax, dword ptr [ebp-0x20]
        fld     dword ptr [edx+0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx+0x38]
        fmul    st(0), st(2)
        fxch
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
        fxch
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
        fxch
        fstp    dword ptr [eax+0x4]
        fadd    dword ptr [edx+0x2c]
        fld     dword ptr [edx+0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax+0x8]
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
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [edi+0x4]
        mov     dword ptr [ecx+0x1c], eax
        mov     eax, dword ptr [ebp-0x28]
        mov     dword ptr [ecx+0x24], eax
        mov     dword ptr [ecx+0x18], edx
        mov     edx, dword ptr [ebp-0x2c]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        mov     dword ptr [ecx+0x20], edx
        lea     eax, [eax+eax*4]
        fst     dword ptr [ecx+0xc]
        fld     st(0)
        fmul    dword ptr [ecx+0x8]
        fstp    dword ptr [ecx+0x8]
        fld     dword ptr [g_007da87c]
        fmul    dword ptr [ecx]
        fmul    st(0), st(1)
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ecx]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [ecx+0x4]
        fmul    st(0), st(1)
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ecx+0x4]
        mov     ecx, dword ptr [ebx+0xb0]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebx+0xa4]
        fstp    st(0)
        mov     edx, dword ptr [edx+esi*4]
        mov     dword ptr [ecx+eax*8+0x10], edx
        jmp     L_c757
L_c648:
        mov     edx, dword ptr [ebx+0x14]
        mov     ecx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [ebx+0x1c]
        add     ecx, edx
        mov     edx, dword ptr [ebx+0x44]
        mov     dword ptr [ebp-0x20], ecx
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        lea     edi, [eax+esi*8]
        shl     ecx, 5
        add     ecx, edx
        mov     dword ptr [ebp-0x24], ecx
        mov     edx, dword ptr [ebp+0x8]
        mov     eax, dword ptr [ebp-0x20]
        fld     dword ptr [eax]
        fld     dword ptr [eax+0x4]
        fld     dword ptr [eax+0x8]
        mov     eax, dword ptr [ebp-0x24]
        fld     dword ptr [edx+0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx+0x38]
        fmul    st(0), st(2)
        fxch
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
        fxch
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
        fxch
        fstp    dword ptr [eax+0x4]
        fadd    dword ptr [edx+0x2c]
        fld     dword ptr [edx+0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax+0x8]
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
        fmul    dword ptr [ecx+0x8]
        fstp    dword ptr [ecx+0x8]
        fld     st(0)
        fmul    dword ptr [ecx]
        fmul    dword ptr [g_007da87c]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ecx]
        mov     edx, dword ptr [edi]
        mov     dword ptr [ecx+0x18], edx
        fmul    dword ptr [ecx+0x4]
        fmul    dword ptr [g_007da878]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ecx+0x4]
        mov     eax, dword ptr [edi+0x4]
        mov     dword ptr [ecx+0x1c], eax
        mov     ecx, dword ptr [ebx+0xb0]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebx+0x44]
        mov     edx, dword ptr [edx+esi*4]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        shl     eax, 5
        mov     dword ptr [eax+ecx+0x10], edx
L_c757:
        mov     al, byte ptr [ebp+0x17]
        test    al, al
        jz      L_c790
        mov     ecx, dword ptr [ebx+0x44]
        fld     dword ptr [ebp-0x10]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        xor     edx, edx
        shl     eax, 5
        fadd    dword ptr [eax+ecx+0x18]
        lea     eax, [eax+ecx+0x18]
        fstp    dword ptr [eax]
        mov     dx, word ptr [ebx+0xa]
        mov     eax, dword ptr [ebx+0x44]
        fld     dword ptr [ebp-0x14]
        shl     edx, 5
        fadd    dword ptr [edx+eax+0x1c]
        lea     eax, [edx+eax+0x1c]
        fstp    dword ptr [eax]
L_c790:
        mov     ecx, dword ptr [ebp+0x10]
        test    ecx, ecx
        jz      L_c7b5
        mov     eax, dword ptr [ebx+0x14]
        mov     edx, dword ptr [ebp-0x8]
        add     edx, eax
        push    edx
        call    FUN_00421f00
        mov     edx, dword ptr [ebx+0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        shl     ecx, 5
        mov     byte ptr [ecx+edx+0x17], al
L_c7b5:
        test    byte ptr [ebx+0x13], 2
        jz      L_c7fe
        mov     ecx, dword ptr [ebx+0x44]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        xor     edx, edx
        shl     eax, 5
        lea     eax, [eax+ecx+0x14]
        and     dword ptr [eax], 0xff000000
        mov     dx, word ptr [ebx+0xa]
        mov     eax, dword ptr [ebx+0x44]
        shl     edx, 5
        lea     ecx, [edx+eax+0x14]
        xor     edx, edx
        mov     edx, dword ptr [g_007da664]
        mov     eax, dword ptr [edx]
        xor     edx, edx
        mov     dl, byte ptr [eax+esi]
        mov     eax, edx
        shl     edx, 8
        add     edx, eax
        shl     edx, 8
        add     edx, eax
        add     dword ptr [ecx], edx
L_c7fe:
        inc     word ptr [ebx+0xa]
        mov     edi, dword ptr [ebp+0xc]
        mov     dl, byte ptr [ebp+0x18]
L_c808:
        mov     ecx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [ebp-0xc]
        inc     esi
        add     ecx, 0xc
        cmp     esi, eax
        mov     dword ptr [ebp-0x8], ecx
        jl      L_c4af
L_c81d:
        cmp     dword ptr [g_007b2210], 1
        jnz     L_ca0e
        test    byte ptr [g_007da86c], 2
        jle     L_c910
        mov     eax, dword ptr [ebx+0x28]
        test    ah, 0x3c
        jz      L_c910
        test    dl, dl
        jnz     L_ca26
        mov     ecx, dword ptr [edi+0x4]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        add     ecx, eax
        mov     dword ptr [edi+0x4], ecx
L_c859:
        mov     eax, dword ptr [edi+0xc]
        mov     ecx, dword ptr [edi+0x28]
        lea     eax, [ecx+eax*2]
L_c862:
        mov     ecx, dword ptr [ebx+0x58]
        xor     edx, edx
        xor     edi, edi
        cmp     ecx, edx
        mov     dword ptr [ebx+0x50], eax
        mov     word ptr [ebx+0x54], di
        mov     dword ptr [ebp+0x10], edx
        mov     dword ptr [ebp+0x8], edx
        jle     L_c8e0
        mov     ecx, dword ptr [g_007d98fc]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [ebp+0x14], ecx
        mov     ecx, dword ptr [g_007da5f4]
L_c88b:
        mov     esi, dword ptr [ebp+0x14]
        cmp     byte ptr [esi+edx], 0
        jz      L_c8d1
        mov     edx, dword ptr [ebx+0x48]
        mov     esi, dword ptr [ebp+0x8]
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
        mov     edx, dword ptr [ebp+0x10]
L_c8d1:
        add     dword ptr [ebp+0x8], 3
        mov     esi, dword ptr [ebx+0x58]
        inc     edx
        cmp     edx, esi
        mov     dword ptr [ebp+0x10], edx
        jl      L_c88b
L_c8e0:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        mov     word ptr [ebx+0x54], di
        jnz     L_c8fc
        mov     eax, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [eax+0xc]
        and     edi, 0xffff
        add     ecx, edi
        mov     dword ptr [eax+0xc], ecx
L_c8fc:
        cmp     word ptr [ebx+0xa], 0
        pop     edi
        setnz   al
        pop     esi
        mov     byte ptr [ebx+0x10], al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
L_c910:
        mov     esi, dword ptr [ebx+0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        mov     dword ptr [ebp-0x4], 0
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
        jle     L_c9ee
        mov     eax, dword ptr [ebx+0x44]
        mov     ecx, edx
        shl     ecx, 5
        lea     ecx, [ecx+eax+0xc]
        lea     esi, [eax+0x1c]
        mov     edi, edx
L_c953:
        fld     dword ptr [esi-4]
        fmul    dword ptr [ebx+0x9c]
        fadd    dword ptr [ebx+0x94]
        fadd    dword ptr [ebp-0x18]
        fstp    dword ptr [ecx+0xc]
        fld     dword ptr [ebx+0xa0]
        fmul    dword ptr [esi]
        fadd    dword ptr [ebp-0x1c]
        fadd    dword ptr [ebx+0x98]
        fstp    dword ptr [ecx+0x10]
        fld     dword ptr [ecx]
        fcomp   dword ptr [ebx+0x8c]
        fnstsw  ax
        test    ah, 1
        jz      L_c994
        and     dword ptr [ecx+0x4], 0xffffff
        jmp     L_c9da
L_c994:
        fld     dword ptr [ecx]
        mov     eax, dword ptr [ebp-0x4]
        fcomp   dword ptr [ebx+0x88]
        inc     eax
        mov     dword ptr [ebp-0x4], eax
        fnstsw  ax
        test    ah, 1
        jz      L_c9da
        fld     dword ptr [ecx]
        fsub    dword ptr [ebx+0x8c]
        fmul    dword ptr [ebx+0x90]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp+0x8]
        mov     eax, dword ptr [ebp+0x8]
        and     eax, 0xffff
        shl     eax, 0x18
        or      eax, 0xffffff
        and     dword ptr [ecx+0x4], eax
L_c9da:
        add     esi, 0x20
        add     ecx, 0x20
        dec     edi
        jnz     L_c953
        mov     eax, dword ptr [ebp-0x4]
        test    eax, eax
        jnz     L_c9f4
L_c9ee:
        mov     byte ptr [ebx+0x64], 0
        jmp     L_c9f8
L_c9f4:
        mov     byte ptr [ebx+0x64], 1
L_c9f8:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        jnz     L_ca23
        mov     eax, dword ptr [ebp+0xc]
        lea     ecx, [edx+edx]
        add     dword ptr [eax], ecx
        mov     edi, eax
        jmp     L_c859
L_ca0e:
        test    dl, dl
        jnz     L_ca26
        mov     eax, dword ptr [edi]
        xor     edx, edx
        mov     dx, word ptr [ebx+0xa]
        add     eax, edx
        mov     dword ptr [edi], eax
        jmp     L_c859
L_ca23:
        mov     edi, dword ptr [ebp+0xc]
L_ca26:
        mov     eax, dword ptr [edi+0x48]
        jmp     L_c862
    }
}
