/*
 * FUN_0047b160 (1046 B) — MLR vertex-transform / index-buffer build
 * (__thiscall, RET 0x14). Heavy FPU matrix transform, global LOD/scale
 * dispatch, and index remap via g_007da5f4.
 *
 * CFLAGS: /O1
 */

extern int *g_007da848;
extern int g_007da864;
extern float g_0076d064;
extern float g_007da87c;
extern float g_007da874;
extern float g_007da878;
extern float g_007da870;
extern int *g_007da600;
extern int *g_007da5f4;
extern int *g_007da5e8;
extern int __cdecl FUN_00491cd0(void);
extern char __cdecl FUN_00421f00(void);

__declspec(naked) void FUN_0047b160(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x24
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x24]
        and     eax, 0x3fff
        push    edi
        mov     byte ptr [ebp - 0x1], 0x0
        mov     dword ptr [ebp - 0x14], 0x0
        mov     dword ptr [ebp - 0x18], 0x0
        jz      L_47b240
        test    eax, eax
        jle     L_47b240
        mov     ecx, dword ptr [g_007da848]
        mov     edi, dword ptr [ecx + eax*4 + 0x24]
        test    edi, edi
        jz      L_47b240
        mov     edx, dword ptr [edi]
        push    0x0
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        jl      L_47b1c7
        mov     dword ptr [g_007da864], 0x1
        jmp     L_47b222
L_47b1c7:
        cmp     eax, 0x80
        jl      L_47b1da
        mov     dword ptr [g_007da864], 0x2
        jmp     L_47b222
L_47b1da:
        cmp     eax, 0x40
        jl      L_47b1eb
        mov     dword ptr [g_007da864], 0x4
        jmp     L_47b222
L_47b1eb:
        cmp     eax, 0x20
        jl      L_47b1fc
        mov     dword ptr [g_007da864], 0x8
        jmp     L_47b222
L_47b1fc:
        cmp     eax, 0x10
        jl      L_47b20d
        mov     dword ptr [g_007da864], 0x10
        jmp     L_47b222
L_47b20d:
        xor     ecx, ecx
        cmp     eax, 0x8
        setl    cl
        dec     ecx
        and     ecx, 0xffffffe0
        add     ecx, 0x40
        mov     dword ptr [g_007da864], ecx
L_47b222:
        mov     al, byte ptr [edi + 0x24]
        test    al, al
        jnz     L_47b26e
        mov     edi, dword ptr [edi + 0x28]
        test    edi, edi
        jz      L_47b26e
        mov     edx, dword ptr [edi + 0xc]
        mov     eax, dword ptr [edi + 0x1c]
        mov     byte ptr [ebp - 0x1], 0x1
        mov     dword ptr [ebp - 0x14], edx
        mov     dword ptr [ebp - 0x18], eax
L_47b240:
        mov     ecx, dword ptr [esi + 0x64]
        push    ebx
        mov     ebx, dword ptr [esi + 0x18]
        cmp     ebx, 0x100
        mov     dword ptr [ebp - 0x1c], ecx
        mov     dword ptr [ebp - 0x10], ebx
        jle     L_47b25f
        mov     dword ptr [ebp - 0x10], 0x100
        mov     ebx, dword ptr [ebp - 0x10]
L_47b25f:
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        jz      L_47b274
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [edx + 0x30]
        jmp     L_47b281
L_47b26e:
        mov     byte ptr [ebp - 0x1], 0x0
        jmp     L_47b240
L_47b274:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ecx + 0x10]
        shl     eax, 0x5
        add     eax, edx
L_47b281:
        cmp     word ptr [esi + 0x56], 0x0
        mov     dword ptr [esi + 0x44], eax
        mov     word ptr [esi + 0xa], 0x0
        jnz     L_47b29b
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x98]
L_47b29b:
        xor     edi, edi
        cmp     ebx, edi
        mov     dword ptr [ebp - 0x8], edi
        jle     L_47b452
        mov     dword ptr [ebp - 0xc], edi
L_47b2ab:
        mov     ecx, dword ptr [g_007da600]
        mov     edx, dword ptr [ecx]
        cmp     byte ptr [edx + edi], 0x0
        jnz     L_47b2c1
        inc     dword ptr [ebp - 0x8]
        jmp     L_47b43e
L_47b2c1:
        mov     edx, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [g_007da5f4]
        mov     eax, edi
        sub     eax, edx
        mov     edx, dword ptr [esi + 0x1c]
        mov     word ptr [ecx + edi*2], ax
        mov     ecx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [ebp - 0xc]
        add     eax, ecx
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0xa]
        mov     dword ptr [ebp - 0x24], eax
        mov     eax, dword ptr [esi + 0x44]
        lea     ebx, [edx + edi*8]
        shl     ecx, 0x5
        add     ecx, eax
        mov     dword ptr [ebp - 0x20], ecx
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp - 0x24]
        fld     dword ptr [eax]
        fld     dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x20]
        fld     dword ptr [edx + 0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx + 0x38]
        fmul    st(0), st(2)
        fxch
        fadd    dword ptr [edx + 0x3c]
        fld     dword ptr [edx + 0x30]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld     dword ptr [edx + 0x10]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x24]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax + 0x4]
        fadd    dword ptr [edx + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax + 0x8]
        fadd    dword ptr [edx + 0xc]
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
        fdiv    dword ptr [ecx + 0xc]
        fst     dword ptr [ecx + 0xc]
        fld     st(0)
        fmul    dword ptr [ecx + 0x8]
        fstp    dword ptr [ecx + 0x8]
        fld     st(0)
        fmul    dword ptr [ecx]
        fmul    dword ptr [g_007da87c]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ecx]
        mov     edx, dword ptr [ebx]
        mov     dword ptr [ecx + 0x18], edx
        fmul    dword ptr [ecx + 0x4]
        mov     edx, dword ptr [esi + 0x44]
        fmul    dword ptr [g_007da878]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ecx + 0x4]
        mov     eax, dword ptr [ebx + 0x4]
        mov     dword ptr [ecx + 0x1c], eax
        mov     eax, dword ptr [ebp + 0x14]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0xa]
        shl     ecx, 0x5
        mov     dword ptr [ecx + edx + 0x10], eax
        mov     ecx, dword ptr [ebp + 0x10]
        test    ecx, ecx
        jz      L_47b3fe
        mov     eax, dword ptr [esi + 0x14]
        mov     edx, dword ptr [ebp - 0xc]
        add     edx, eax
        push    edx
        call    FUN_00421f00
        mov     edx, dword ptr [esi + 0x44]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0xa]
        shl     ecx, 0x5
        mov     byte ptr [ecx + edx + 0x17], al
L_47b3fe:
        mov     al, byte ptr [ebp - 0x1]
        test    al, al
        jz      L_47b437
        mov     ecx, dword ptr [esi + 0x44]
        fld     dword ptr [ebp - 0x14]
        xor     eax, eax
        mov     ax, word ptr [esi + 0xa]
        xor     edx, edx
        shl     eax, 0x5
        fadd    dword ptr [eax + ecx + 0x18]
        lea     eax, [eax + ecx + 0x18]
        fstp    dword ptr [eax]
        mov     dx, word ptr [esi + 0xa]
        mov     eax, dword ptr [esi + 0x44]
        fld     dword ptr [ebp - 0x18]
        shl     edx, 0x5
        fadd    dword ptr [edx + eax + 0x1c]
        lea     eax, [edx + eax + 0x1c]
        fstp    dword ptr [eax]
L_47b437:
        inc     word ptr [esi + 0xa]
        mov     ebx, dword ptr [ebp - 0x10]
L_47b43e:
        mov     ecx, dword ptr [ebp - 0xc]
        inc     edi
        add     ecx, 0xc
        cmp     edi, ebx
        mov     dword ptr [ebp - 0xc], ecx
        jl      L_47b2ab
        xor     edi, edi
L_47b452:
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        jnz     L_47b4d2
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ecx]
        xor     edx, edx
        mov     dx, word ptr [esi + 0xa]
        add     eax, edx
        mov     edx, dword ptr [ecx + 0xc]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [ecx + 0x28]
        lea     eax, [eax + edx*2]
        mov     dword ptr [ebp + 0x10], eax
L_47b474:
        mov     ebx, dword ptr [ebp - 0x1c]
        xor     edx, edx
        cmp     ebx, edi
        mov     dword ptr [esi + 0x50], eax
        mov     word ptr [esi + 0x54], di
        mov     dword ptr [ebp - 0x18], edx
        mov     dword ptr [ebp + 0x8], edi
        jle     L_47b549
        mov     ecx, dword ptr [g_007da5e8]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [ebp - 0x24], ecx
L_47b499:
        mov     ecx, dword ptr [esi + 0x60]
        movzx   cx, byte ptr [ecx + edx]
        mov     ebx, dword ptr [ebp - 0x24]
        cmp     byte ptr [ebx + edx], 0x0
        mov     dword ptr [ebp - 0x8], ecx
        jz      L_47b529
        mov     ebx, ecx
        and     ebx, 0xffff
        dec     ebx
        cmp     ebx, 0x1
        jle     L_47b529
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [esi + 0x48]
        add     edx, ecx
        dec     ebx
        lea     eax, [eax + edi*2]
        mov     dword ptr [ebp - 0x20], edx
        lea     ecx, [edx + 0x1]
        mov     dword ptr [ebp + 0x14], ebx
        jmp     L_47b4e3
L_47b4d2:
        mov     eax, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [eax + 0x48]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp + 0x10], eax
        jmp     L_47b474
L_47b4e0:
        mov     edx, dword ptr [ebp - 0x20]
L_47b4e3:
        xor     ebx, ebx
        mov     bl, byte ptr [edx]
        mov     edx, dword ptr [g_007da5f4]
        add     eax, 0x2
        inc     edi
        add     eax, 0x2
        add     eax, 0x2
        mov     bx, word ptr [edx + ebx*2]
        mov     word ptr [eax - 0x6], bx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx + 0x1]
        inc     edi
        mov     bx, word ptr [edx + ebx*2]
        mov     word ptr [eax - 0x4], bx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx]
        inc     edi
        inc     ecx
        mov     dx, word ptr [edx + ebx*2]
        mov     word ptr [eax - 0x2], dx
        dec     dword ptr [ebp + 0x14]
        jnz     L_47b4e0
        mov     edx, dword ptr [ebp - 0x18]
        mov     ecx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp + 0x10]
L_47b529:
        mov     ebx, dword ptr [ebp + 0x8]
        and     ecx, 0xffff
        add     ebx, ecx
        mov     ecx, dword ptr [ebp - 0x1c]
        inc     edx
        cmp     edx, ecx
        mov     dword ptr [ebp + 0x8], ebx
        mov     dword ptr [ebp - 0x18], edx
        jl      L_47b499
        mov     ecx, dword ptr [ebp + 0xc]
L_47b549:
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        mov     word ptr [esi + 0x54], di
        pop     ebx
        jnz     L_47b563
        mov     eax, dword ptr [ecx + 0xc]
        and     edi, 0xffff
        add     eax, edi
        mov     dword ptr [ecx + 0xc], eax
L_47b563:
        cmp     word ptr [esi + 0xa], 0x0
        pop     edi
        setnz   al
        mov     byte ptr [esi + 0x10], al
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}
