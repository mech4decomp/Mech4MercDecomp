/*
 * FUN_0044d300 (1041 B) — MLR mesh render/transform (__thiscall, RET 0x14,
 * 5 args). Selects a texture format, transforms vertices via FPU matrix
 * math, builds index/vertex buffers, and dispatches to FUN_00458e10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9574;
extern int g_007da848;
extern int g_007da864;
extern int g_007da600;
extern int g_007da5f4;
extern int g_007d98fc;
extern float g_0076d064;
extern float g_007da87c;
extern float g_007da874;
extern float g_007da878;
extern float g_007da870;

extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_00458e10(void);

__declspec(naked) void FUN_0044d300(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x6c]
        test    eax, eax
        jz      L_d6ef
        mov     ecx, dword ptr [eax+0x4]
        test    ecx, ecx
        jz      L_d6ef
        mov     eax, dword ptr [g_007b9574]
        test    eax, eax
        ja      L_d6ef
        mov     eax, dword ptr [esi+0x24]
        and     eax, 0x3fff
        push    edi
        mov     byte ptr [ebp+0x17], 0x0
        mov     dword ptr [ebp-0x10], 0x0
        mov     dword ptr [ebp-0x14], 0x0
        jz      L_d403
        test    eax, eax
        jle     L_d403
        mov     ecx, dword ptr [g_007da848]
        mov     edi, dword ptr [ecx+eax*0x4+0x24]
        test    edi, edi
        jz      L_d403
        mov     edx, dword ptr [edi]
        push    0x0
        mov     ecx, edi
        call    dword ptr [edx+0x4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        mov     ecx, 0x1
        jl      L_d38b
        mov     dword ptr [g_007da864], ecx
        jmp     L_d3e6
L_d38b:
        cmp     eax, 0x80
        jl      L_d39e
        mov     dword ptr [g_007da864], 0x2
        jmp     L_d3e6
L_d39e:
        cmp     eax, 0x40
        jl      L_d3af
        mov     dword ptr [g_007da864], 0x4
        jmp     L_d3e6
L_d3af:
        cmp     eax, 0x20
        jl      L_d3c0
        mov     dword ptr [g_007da864], 0x8
        jmp     L_d3e6
L_d3c0:
        cmp     eax, 0x10
        jl      L_d3d1
        mov     dword ptr [g_007da864], 0x10
        jmp     L_d3e6
L_d3d1:
        xor     edx, edx
        cmp     eax, 0x8
        setl    dl
        dec     edx
        and     edx, 0xffffffe0
        add     edx, 0x40
        mov     dword ptr [g_007da864], edx
L_d3e6:
        mov     al, byte ptr [edi+0x24]
        test    al, al
        jnz     L_d42b
        mov     edi, dword ptr [edi+0x28]
        test    edi, edi
        jz      L_d42b
        mov     eax, dword ptr [edi+0xc]
        mov     byte ptr [ebp+0x17], cl
        mov     ecx, dword ptr [edi+0x1c]
        mov     dword ptr [ebp-0x10], eax
        mov     dword ptr [ebp-0x14], ecx
L_d403:
        push    ebx
        mov     ebx, dword ptr [esi+0x18]
        cmp     ebx, 0x100
        mov     dword ptr [ebp-0xc], ebx
        jle     L_d41c
        mov     dword ptr [ebp-0xc], 0x100
        mov     ebx, dword ptr [ebp-0xc]
L_d41c:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        jz      L_d431
        mov     edx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [edx+0x30]
        jmp     L_d43e
L_d42b:
        mov     byte ptr [ebp+0x17], 0x0
        jmp     L_d403
L_d431:
        mov     ecx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ecx+0x10]
        shl     eax, 0x5
        add     eax, edx
L_d43e:
        cmp     word ptr [esi+0x56], 0x0
        mov     dword ptr [esi+0x44], eax
        mov     word ptr [esi+0xa], 0x0
        jnz     L_d458
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+0x98]
L_d458:
        xor     edi, edi
        cmp     ebx, edi
        mov     dword ptr [ebp-0x8], edi
        jle     L_d611
        mov     dword ptr [ebp-0x4], edi
L_d468:
        mov     ecx, dword ptr [g_007da600]
        mov     edx, dword ptr [ecx]
        cmp     byte ptr [edx+edi], 0x0
        jnz     L_d47e
        inc     dword ptr [ebp-0x8]
        jmp     L_d5ff
L_d47e:
        mov     edx, dword ptr [ebp-0x8]
        mov     ecx, dword ptr [g_007da5f4]
        mov     eax, edi
        sub     eax, edx
        mov     edx, dword ptr [esi+0x1c]
        mov     dword ptr [ecx+edi*0x2], eax
        mov     ecx, dword ptr [esi+0x14]
        mov     eax, dword ptr [ebp-0x4]
        add     eax, ecx
        xor     ecx, ecx
        mov     cx, word ptr [esi+0xa]
        lea     ebx, [edx+edi*0x8]
        mov     edx, dword ptr [esi+0x44]
        mov     dword ptr [ebp-0x1c], eax
        shl     ecx, 0x5
        add     ecx, edx
        mov     dword ptr [ebp-0x18], ecx
        mov     edx, dword ptr [ebp+0x8]
        mov     eax, dword ptr [ebp-0x1c]
        fld     dword ptr [eax]
        fld     dword ptr [eax+0x4]
        fld     dword ptr [eax+0x8]
        mov     eax, dword ptr [ebp-0x18]
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
        mov     edx, dword ptr [ebx]
        mov     dword ptr [ecx+0x18], edx
        fmul    dword ptr [ecx+0x4]
        fmul    dword ptr [g_007da878]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ecx+0x4]
        mov     eax, dword ptr [ebx+0x4]
        mov     dword ptr [ecx+0x1c], eax
        mov     ecx, dword ptr [esi+0x6c]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esi+0x44]
        mov     edx, dword ptr [edx+edi*0x4]
        xor     eax, eax
        mov     ax, word ptr [esi+0xa]
        shl     eax, 0x5
        mov     dword ptr [eax+ecx+0x10], edx
        mov     al, byte ptr [ebp+0x17]
        test    al, al
        jz      L_d5d3
        mov     ecx, dword ptr [esi+0x44]
        fld     dword ptr [ebp-0x10]
        xor     eax, eax
        mov     ax, word ptr [esi+0xa]
        xor     edx, edx
        shl     eax, 0x5
        fadd    dword ptr [eax+ecx+0x18]
        lea     eax, [eax+ecx+0x18]
        fstp    dword ptr [eax]
        mov     dx, word ptr [esi+0xa]
        mov     eax, dword ptr [esi+0x44]
        fld     dword ptr [ebp-0x14]
        shl     edx, 0x5
        fadd    dword ptr [edx+eax+0x1c]
        lea     eax, [edx+eax+0x1c]
        fstp    dword ptr [eax]
L_d5d3:
        mov     ecx, dword ptr [ebp+0x10]
        test    ecx, ecx
        jz      L_d5f8
        mov     eax, dword ptr [esi+0x14]
        mov     edx, dword ptr [ebp-0x4]
        add     edx, eax
        push    edx
        call    FUN_00421f00
        mov     edx, dword ptr [esi+0x44]
        xor     ecx, ecx
        mov     cx, word ptr [esi+0xa]
        shl     ecx, 0x5
        mov     byte ptr [ecx+edx+0x17], al
L_d5f8:
        inc     word ptr [esi+0xa]
        mov     ebx, dword ptr [ebp-0xc]
L_d5ff:
        mov     ecx, dword ptr [ebp-0x4]
        inc     edi
        add     ecx, 0xc
        cmp     edi, ebx
        mov     dword ptr [ebp-0x4], ecx
        jl      L_d468
L_d611:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        jnz     L_d6e2
        mov     edx, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [edx]
        xor     eax, eax
        mov     ax, word ptr [esi+0xa]
        add     ecx, eax
        mov     eax, dword ptr [edx+0xc]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [edx+0x28]
        lea     eax, [ecx+eax*0x2]
L_d634:
        mov     ebx, dword ptr [esi+0x58]
        xor     ecx, ecx
        xor     edi, edi
        cmp     ebx, ecx
        mov     dword ptr [esi+0x50], eax
        mov     word ptr [esi+0x54], cx
        mov     dword ptr [ebp+0x8], ecx
        mov     dword ptr [ebp+0x10], ecx
        jle     L_d6b5
        mov     edx, dword ptr [g_007d98fc]
        mov     edx, dword ptr [edx]
        mov     dword ptr [ebp+0x14], edx
        mov     edx, dword ptr [g_007da5f4]
L_d65d:
        mov     ebx, dword ptr [ebp+0x14]
        cmp     byte ptr [ebx+ecx], 0x0
        jz      L_d6a3
        mov     ebx, dword ptr [ebp+0x10]
        mov     ecx, dword ptr [esi+0x48]
        add     ecx, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx]
        add     eax, 0x2
        inc     edi
        add     eax, 0x2
        mov     bx, word ptr [edx+ebx*0x2]
        mov     word ptr [eax-0x4], bx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx+0x2]
        inc     edi
        mov     bx, word ptr [edx+ebx*0x2]
        mov     word ptr [eax-0x2], bx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx+0x1]
        inc     edi
        add     eax, 0x2
        mov     cx, word ptr [edx+ebx*0x2]
        mov     word ptr [eax-0x2], cx
        mov     ecx, dword ptr [ebp+0x8]
L_d6a3:
        add     dword ptr [ebp+0x10], 0x3
        mov     ebx, dword ptr [esi+0x58]
        inc     ecx
        cmp     ecx, ebx
        mov     dword ptr [ebp+0x8], ecx
        jl      L_d65d
        mov     edx, dword ptr [ebp+0xc]
L_d6b5:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        mov     word ptr [esi+0x54], di
        pop     ebx
        jnz     L_d6cf
        mov     eax, dword ptr [edx+0xc]
        and     edi, 0xffff
        add     eax, edi
        mov     dword ptr [edx+0xc], eax
L_d6cf:
        cmp     word ptr [esi+0xa], 0x0
        pop     edi
        setnz   dl
        mov     byte ptr [esi+0x10], dl
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14
L_d6e2:
        mov     ecx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ecx+0x48]
        mov     edx, ecx
        jmp     L_d634
L_d6ef:
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
        mov     ecx, esi
        call    FUN_00458e10
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}
