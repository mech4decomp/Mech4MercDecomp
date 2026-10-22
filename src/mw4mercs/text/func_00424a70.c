/*
 * FUN_00424a70 (1239 B) — __thiscall, RET 0x14. MLR render-state /
 * light setup. Computes a light level from a material index, builds a
 * per-vertex color/light buffer (matrix transform + normalization),
 * and writes index/color tables into the destination object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00458e10(int a, int b, int c, int d, int e);
extern void __cdecl FUN_00491cd0(int a);
extern void __cdecl FUN_00421f00(int a);

extern int g_007da848;
extern int g_007da864;
extern int g_007da600;
extern int g_007da5f4;
extern int g_007b963c;
extern int g_007b9640;
extern int g_007d98fc;
extern float g_0076d064;
extern float g_007da87c;
extern float g_007da874;
extern float g_007da878;
extern float g_007da870;

__declspec(naked) void FUN_00424a70(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x30
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x68]
        test    eax, eax
        jnz     L_a2
        mov     eax, dword ptr [ebp+0x18]
        mov     ecx, dword ptr [ebp+0x14]
        mov     edx, dword ptr [ebp+0x10]
        push    eax
        mov     eax, dword ptr [ebp+0xc]
        push    ecx
        mov     ecx, dword ptr [ebp+8]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00458e10
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14
L_a2:
        mov     eax, dword ptr [esi+0x24]
        and     eax, 0x3fff
        push    ebx
        push    edi
        mov     byte ptr [ebp+0x17], 0
        mov     dword ptr [ebp-0x18], 0
        mov     dword ptr [ebp-0x1c], 0
        mov     ebx, 1
        jz      L_b7a
        test    eax, eax
        jle     L_b7a
        mov     edx, dword ptr [g_007da848]
        mov     edi, dword ptr [edx+eax*4+0x24]
        test    edi, edi
        jz      L_b7a
        mov     eax, dword ptr [edi]
        push    0
        mov     ecx, edi
        call    dword ptr [eax+4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        jl      L_b02
        mov     dword ptr [g_007da864], ebx
        jmp     L_b5d
L_b02:
        cmp     eax, 0x80
        jl      L_b15
        mov     dword ptr [g_007da864], 2
        jmp     L_b5d
L_b15:
        cmp     eax, 0x40
        jl      L_b26
        mov     dword ptr [g_007da864], 4
        jmp     L_b5d
L_b26:
        cmp     eax, 0x20
        jl      L_b37
        mov     dword ptr [g_007da864], 8
        jmp     L_b5d
L_b37:
        cmp     eax, 0x10
        jl      L_b48
        mov     dword ptr [g_007da864], 0x10
        jmp     L_b5d
L_b48:
        xor     ecx, ecx
        cmp     eax, 8
        setl    cl
        dec     ecx
        and     ecx, 0xffffffe0
        add     ecx, 0x40
        mov     dword ptr [g_007da864], ecx
L_b5d:
        mov     al, byte ptr [edi+0x24]
        test    al, al
        jnz     L_bd1
        mov     edi, dword ptr [edi+0x28]
        test    edi, edi
        jz      L_bd1
        mov     edx, dword ptr [edi+0xc]
        mov     eax, dword ptr [edi+0x1c]
        mov     byte ptr [ebp+0x17], bl
        mov     dword ptr [ebp-0x18], edx
        mov     dword ptr [ebp-0x1c], eax
L_b7a:
        mov     edi, dword ptr [esi+0x18]
        cmp     edi, 0x100
        mov     dword ptr [ebp-0x14], edi
        jle     L_b92
        mov     dword ptr [ebp-0x14], 0x100
        mov     edi, dword ptr [ebp-0x14]
L_b92:
        mov     eax, dword ptr [esi+0x88]
        test    eax, eax
        mov     byte ptr [ebp-1], 0
        mov     dword ptr [ebp-0x20], 0
        mov     dword ptr [ebp-0x24], 0
        jz      L_be9
        jle     L_be9
        mov     ecx, dword ptr [g_007da848]
        mov     eax, dword ptr [ecx+eax*4+0x24]
        test    eax, eax
        jz      L_be9
        mov     cl, byte ptr [eax+0x24]
        test    cl, cl
        jnz     L_bd7
        mov     eax, dword ptr [eax+0x28]
        test    eax, eax
        jz      L_bd7
        mov     byte ptr [ebp-1], bl
        jmp     L_bdd
L_bd1:
        mov     byte ptr [ebp+0x17], 0
        jmp     L_b7a
L_bd7:
        mov     byte ptr [ebp-1], 0
        jmp     L_be9
L_bdd:
        mov     edx, dword ptr [eax+0xc]
        mov     eax, dword ptr [eax+0x1c]
        mov     dword ptr [ebp-0x20], edx
        mov     dword ptr [ebp-0x24], eax
L_be9:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        jz      L_bf8
        mov     ebx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ebx+0x40]
        jmp     L_c0b
L_bf8:
        mov     ecx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ecx+8]
        mov     edx, dword ptr [ecx+0x20]
        lea     eax, [eax+eax*2]
        shl     eax, 4
        add     eax, edx
        mov     ebx, ecx
L_c0b:
        cmp     word ptr [esi+0x56], 0
        mov     dword ptr [esi+0x70], eax
        mov     word ptr [esi+0xa], 0
        jnz     L_c25
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+0x98]
L_c25:
        xor     ecx, ecx
        xor     eax, eax
        cmp     edi, ecx
        mov     dword ptr [ebp-8], eax
        mov     dword ptr [ebp-0x10], ecx
        jle     L_e71
        mov     dword ptr [ebp-0xc], ecx
L_c3a:
        mov     ecx, dword ptr [g_007da600]
        mov     edx, dword ptr [ecx]
        cmp     byte ptr [edx+eax], 0
        jnz     L_c50
        inc     dword ptr [ebp-0x10]
        jmp     L_e5a
L_c50:
        mov     edi, dword ptr [ebp-0x10]
        mov     edx, dword ptr [g_007da5f4]
        mov     ecx, eax
        sub     ecx, edi
        mov     dword ptr [edx+eax*2], ecx
        mov     ecx, dword ptr [g_007b963c]
        mov     edx, dword ptr [ecx]
        shl     eax, 3
        mov     edi, eax
        add     edi, edx
        mov     edx, dword ptr [g_007b9640]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [esi+0x70]
        mov     ebx, eax
        add     ebx, ecx
        mov     ecx, dword ptr [esi+0x1c]
        add     ecx, eax
        mov     eax, dword ptr [ebp-0xc]
        mov     dword ptr [ebp-0x30], ecx
        add     eax, dword ptr [esi+0x14]
        xor     ecx, ecx
        mov     cx, word ptr [esi+0xa]
        mov     dword ptr [ebp-0x2c], eax
        lea     ecx, [ecx+ecx*2]
        shl     ecx, 4
        add     ecx, edx
        mov     dword ptr [ebp-0x28], ecx
        mov     edx, dword ptr [ebp+8]
        mov     eax, dword ptr [ebp-0x2c]
        fld     dword ptr [eax]
        fld     dword ptr [eax+4]
        fld     dword ptr [eax+8]
        mov     eax, dword ptr [ebp-0x28]
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
        fxch
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
        mov     eax, dword ptr [ebp-0x30]
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [eax+4]
        mov     dword ptr [ecx+0x1c], eax
        mov     eax, dword ptr [ebx+4]
        mov     dword ptr [ecx+0x24], eax
        mov     eax, dword ptr [edi+4]
        mov     dword ptr [ecx+0x2c], eax
        mov     dword ptr [ecx+0x18], edx
        mov     edx, dword ptr [ebx]
        xor     eax, eax
        mov     ax, word ptr [esi+0xa]
        mov     dword ptr [ecx+0x20], edx
        mov     edx, dword ptr [edi]
        mov     edi, dword ptr [ebp-8]
        mov     dword ptr [ecx+0x28], edx
        lea     eax, [eax+eax*2]
        shl     eax, 4
        fst     dword ptr [ecx+0xc]
        fld     st(0)
        fmul    dword ptr [ecx+8]
        fstp    dword ptr [ecx+8]
        fld     st(0)
        fmul    dword ptr [ecx]
        fmul    dword ptr [g_007da87c]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ecx]
        fmul    dword ptr [g_007da878]
        fmul    dword ptr [ecx+4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ecx+4]
        mov     ecx, dword ptr [esi+0x6c]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esi+0x70]
        mov     edx, dword ptr [edx+edi*4]
        mov     dword ptr [eax+ecx+0x10], edx
        mov     al, byte ptr [ebp+0x17]
        test    al, al
        jz      L_de8
        mov     ecx, dword ptr [esi+0x70]
        fld     dword ptr [ebp-0x18]
        xor     eax, eax
        mov     ax, word ptr [esi+0xa]
        lea     eax, [eax+eax*2]
        shl     eax, 4
        fadd    dword ptr [eax+ecx+0x18]
        lea     eax, [eax+ecx+0x18]
        fstp    dword ptr [eax]
        xor     eax, eax
        mov     ax, word ptr [esi+0xa]
        fld     dword ptr [ebp-0x1c]
        lea     edx, [eax+eax*2]
        mov     eax, dword ptr [esi+0x70]
        shl     edx, 4
        fadd    dword ptr [edx+eax+0x1c]
        lea     eax, [edx+eax+0x1c]
        fstp    dword ptr [eax]
L_de8:
        mov     al, byte ptr [ebp-1]
        test    al, al
        jz      L_e27
        mov     edx, dword ptr [esi+0x70]
        fld     dword ptr [ebp-0x20]
        xor     eax, eax
        mov     ax, word ptr [esi+0xa]
        lea     ecx, [eax+eax*2]
        shl     ecx, 4
        fadd    dword ptr [ecx+edx+0x20]
        lea     eax, [ecx+edx+0x20]
        fstp    dword ptr [eax]
        mov     ecx, dword ptr [esi+0x70]
        fld     dword ptr [ebp-0x24]
        xor     eax, eax
        mov     ax, word ptr [esi+0xa]
        lea     eax, [eax+eax*2]
        shl     eax, 4
        fadd    dword ptr [eax+ecx+0x24]
        lea     eax, [eax+ecx+0x24]
        fstp    dword ptr [eax]
L_e27:
        mov     ecx, dword ptr [ebp+0x10]
        test    ecx, ecx
        jz      L_e4d
        mov     edx, dword ptr [ebp-0xc]
        add     edx, dword ptr [esi+0x14]
        push    edx
        call    FUN_00421f00
        mov     edx, dword ptr [esi+0x70]
        xor     ecx, ecx
        mov     cx, word ptr [esi+0xa]
        lea     ecx, [ecx+ecx*2]
        shl     ecx, 4
        mov     byte ptr [ecx+edx+0x17], al
L_e4d:
        inc     word ptr [esi+0xa]
        mov     ebx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ebp-8]
        mov     edi, dword ptr [ebp-0x14]
L_e5a:
        mov     edx, dword ptr [ebp-0xc]
        inc     eax
        add     edx, 0xc
        cmp     eax, edi
        mov     dword ptr [ebp-8], eax
        mov     dword ptr [ebp-0xc], edx
        jl      L_c3a
        xor     ecx, ecx
L_e71:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        jnz     L_f3f
        mov     edx, dword ptr [ebx]
        xor     eax, eax
        mov     ax, word ptr [esi+0xa]
        add     edx, eax
        mov     eax, dword ptr [ebx+0x28]
        mov     dword ptr [ebx], edx
        mov     edx, dword ptr [ebx+0xc]
        lea     eax, [eax+edx*2]
L_e91:
        mov     edx, dword ptr [esi+0x58]
        mov     word ptr [esi+0x54], cx
        xor     ecx, ecx
        xor     edi, edi
        cmp     edx, ecx
        mov     dword ptr [esi+0x50], eax
        mov     dword ptr [ebp+8], ecx
        mov     dword ptr [ebp-8], ecx
        jle     L_f12
        mov     edx, dword ptr [g_007d98fc]
        mov     edx, dword ptr [edx]
        mov     dword ptr [ebp+0x10], edx
        mov     edx, dword ptr [g_007da5f4]
L_eba:
        mov     ebx, dword ptr [ebp+0x10]
        cmp     byte ptr [ebx+ecx], 0
        jz      L_f00
        mov     ebx, dword ptr [ebp-8]
        mov     ecx, dword ptr [esi+0x48]
        add     ecx, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx]
        add     eax, 2
        inc     edi
        add     eax, 2
        mov     bx, word ptr [edx+ebx*2]
        mov     word ptr [eax-4], bx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx+2]
        inc     edi
        mov     bx, word ptr [edx+ebx*2]
        mov     word ptr [eax-2], bx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx+1]
        inc     edi
        add     eax, 2
        mov     cx, word ptr [edx+ebx*2]
        mov     word ptr [eax-2], cx
        mov     ecx, dword ptr [ebp+8]
L_f00:
        add     dword ptr [ebp-8], 3
        mov     ebx, dword ptr [esi+0x58]
        inc     ecx
        cmp     ecx, ebx
        mov     dword ptr [ebp+8], ecx
        jl      L_eba
        mov     ebx, dword ptr [ebp+0xc]
L_f12:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        mov     word ptr [esi+0x54], di
        jnz     L_f2b
        mov     eax, dword ptr [ebx+0xc]
        and     edi, 0xffff
        add     eax, edi
        mov     dword ptr [ebx+0xc], eax
L_f2b:
        cmp     word ptr [esi+0xa], 0
        pop     edi
        setnz   dl
        pop     ebx
        mov     byte ptr [esi+0x10], dl
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14
L_f3f:
        mov     eax, dword ptr [ebx+0x48]
        jmp     L_e91
    }
}
