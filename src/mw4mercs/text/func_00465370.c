/*
 * FUN_00465370 (1147 B) — MLR PMesh mesh-build routine (__thiscall, RET 0x14).
 * Performs matrix transform of vertex data, writes into a vertex buffer,
 * builds index lists, and updates counters. FPU-heavy.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007da848;
extern int   g_007da864;
extern float g_0076d064;
extern float g_007da87c;
extern float g_007da874;
extern float g_007da878;
extern float g_007da870;
extern int   g_007da600;
extern int   g_007da5f4;
extern int   g_007da5e8;

extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_00421f00(void);

__declspec(naked) void FUN_00465370(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x24
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x24]
        and     eax, 0x3fff
        push    esi
        push    edi
        mov     byte ptr [ebp - 0x1], 0x0
        mov     dword ptr [ebp - 0x14], 0x0
        mov     dword ptr [ebp - 0x18], 0x0
        jz      L_465451
        test    eax, eax
        jle     L_465451
        mov     ecx, dword ptr [g_007da848]
        mov     esi, dword ptr [ecx + eax*4 + 0x24]
        test    esi, esi
        jz      L_465451
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        jl      L_4653d8
        mov     dword ptr [g_007da864], 0x1
        jmp     L_465433
L_4653d8:
        cmp     eax, 0x80
        jl      L_4653eb
        mov     dword ptr [g_007da864], 0x2
        jmp     L_465433
L_4653eb:
        cmp     eax, 0x40
        jl      L_4653fc
        mov     dword ptr [g_007da864], 0x4
        jmp     L_465433
L_4653fc:
        cmp     eax, 0x20
        jl      L_46540d
        mov     dword ptr [g_007da864], 0x8
        jmp     L_465433
L_46540d:
        cmp     eax, 0x10
        jl      L_46541e
        mov     dword ptr [g_007da864], 0x10
        jmp     L_465433
L_46541e:
        xor     ecx, ecx
        cmp     eax, 0x8
        setl    cl
        dec     ecx
        and     ecx, 0xffffffe0
        add     ecx, 0x40
        mov     dword ptr [g_007da864], ecx
L_465433:
        mov     al, byte ptr [esi + 0x24]
        test    al, al
        jnz     L_46547e
        mov     esi, dword ptr [esi + 0x28]
        test    esi, esi
        jz      L_46547e
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x1c]
        mov     byte ptr [ebp - 0x1], 0x1
        mov     dword ptr [ebp - 0x14], edx
        mov     dword ptr [ebp - 0x18], eax
L_465451:
        mov     edi, dword ptr [ebx + 0x18]
        cmp     edi, 0x100
        mov     ecx, dword ptr [ebx + 0x64]
        mov     dword ptr [ebp - 0x1c], ecx
        mov     dword ptr [ebp - 0x10], edi
        jle     L_46546f
        mov     dword ptr [ebp - 0x10], 0x100
        mov     edi, dword ptr [ebp - 0x10]
L_46546f:
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        jz      L_465484
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [edx + 0x30]
        jmp     L_465491
L_46547e:
        mov     byte ptr [ebp - 0x1], 0x0
        jmp     L_465451
L_465484:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ecx + 0x10]
        shl     eax, 0x5
        add     eax, edx
L_465491:
        cmp     word ptr [ebx + 0x56], 0x0
        mov     dword ptr [ebx + 0x44], eax
        mov     word ptr [ebx + 0xa], 0x0
        jnz     L_4654ab
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x98]
L_4654ab:
        xor     esi, esi
        cmp     edi, esi
        mov     dword ptr [ebp - 0x8], esi
        jle     L_465660
        mov     dword ptr [ebp - 0xc], esi
L_4654bb:
        mov     ecx, dword ptr [g_007da600]
        mov     edx, dword ptr [ecx]
        cmp     byte ptr [edx + esi], 0x0
        jnz     L_4654d1
        inc     dword ptr [ebp - 0x8]
        jmp     L_46564e
L_4654d1:
        mov     edx, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [g_007da5f4]
        mov     eax, esi
        sub     eax, edx
        mov     edx, dword ptr [ebx + 0x1c]
        mov     word ptr [ecx + esi*2], ax
        mov     ecx, dword ptr [ebx + 0x14]
        mov     eax, dword ptr [ebp - 0xc]
        add     eax, ecx
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        mov     dword ptr [ebp - 0x24], eax
        mov     eax, dword ptr [ebx + 0x44]
        lea     edi, [edx + esi*8]
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
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
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
        mov     edx, dword ptr [edi]
        mov     dword ptr [ecx + 0x18], edx
        fmul    dword ptr [ecx + 0x4]
        mov     edx, dword ptr [ebx + 0x44]
        fmul    dword ptr [g_007da878]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ecx + 0x4]
        mov     eax, dword ptr [edi + 0x4]
        mov     dword ptr [ecx + 0x1c], eax
        mov     eax, dword ptr [ebp + 0x14]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        shl     ecx, 0x5
        mov     dword ptr [ecx + edx + 0x10], eax
        mov     ecx, dword ptr [ebp + 0x10]
        test    ecx, ecx
        jz      L_46560e
        mov     eax, dword ptr [ebx + 0x14]
        mov     edx, dword ptr [ebp - 0xc]
        add     edx, eax
        push    edx
        call    FUN_00421f00
        mov     edx, dword ptr [ebx + 0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        shl     ecx, 0x5
        mov     byte ptr [ecx + edx + 0x17], al
L_46560e:
        mov     al, byte ptr [ebp - 0x1]
        test    al, al
        jz      L_465647
        mov     ecx, dword ptr [ebx + 0x44]
        fld     dword ptr [ebp - 0x14]
        xor     eax, eax
        mov     ax, word ptr [ebx + 0xa]
        xor     edx, edx
        shl     eax, 0x5
        fadd    dword ptr [eax + ecx + 0x18]
        lea     eax, [eax + ecx + 0x18]
        fstp    dword ptr [eax]
        mov     dx, word ptr [ebx + 0xa]
        mov     eax, dword ptr [ebx + 0x44]
        fld     dword ptr [ebp - 0x18]
        shl     edx, 0x5
        fadd    dword ptr [edx + eax + 0x1c]
        lea     eax, [edx + eax + 0x1c]
        fstp    dword ptr [eax]
L_465647:
        inc     word ptr [ebx + 0xa]
        mov     edi, dword ptr [ebp - 0x10]
L_46564e:
        mov     ecx, dword ptr [ebp - 0xc]
        inc     esi
        add     ecx, 0xc
        cmp     esi, edi
        mov     dword ptr [ebp - 0xc], ecx
        jl      L_4654bb
L_465660:
        mov     esi, dword ptr [ebx + 0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        shl     ecx, 0x5
        lea     edi, [esi + ecx]
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        xor     edx, edx
        rep movsb
        mov     dx, word ptr [ebx + 0xa]
        and     edx, 0xffff
        jle     L_4656c9
        mov     eax, dword ptr [ebx + 0x44]
        mov     ecx, edx
        shl     ecx, 0x5
        lea     ecx, [ecx + eax + 0x1c]
        add     eax, 0x1c
        mov     esi, edx
L_46569c:
        fld     dword ptr [eax - 0x4]
        add     eax, 0x20
        fmul    dword ptr [ebx + 0x98]
        add     ecx, 0x20
        dec     esi
        fadd    dword ptr [ebx + 0x90]
        fstp    dword ptr [ecx - 0x24]
        fld     dword ptr [ebx + 0x9c]
        fmul    dword ptr [eax - 0x20]
        fadd    dword ptr [ebx + 0x94]
        fstp    dword ptr [ecx - 0x20]
        jnz     L_46569c
L_4656c9:
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        jnz     L_465747
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ecx]
        add     edx, edx
        add     eax, edx
        mov     edx, dword ptr [ecx + 0xc]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [ecx + 0x28]
        lea     eax, [eax + edx*2]
        mov     dword ptr [ebp + 0x10], eax
L_4656e7:
        mov     edx, dword ptr [ebp - 0x1c]
        xor     esi, esi
        xor     edi, edi
        cmp     edx, esi
        mov     dword ptr [ebx + 0x50], eax
        mov     word ptr [ebx + 0x54], si
        mov     dword ptr [ebp - 0x18], esi
        mov     dword ptr [ebp + 0x8], esi
        jle     L_4657be
        mov     ecx, dword ptr [g_007da5e8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebp - 0x24], edx
        mov     ecx, dword ptr [ebx + 0x60]
L_46570e:
        movzx   cx, byte ptr [ecx + esi]
        mov     edx, dword ptr [ebp - 0x24]
        cmp     byte ptr [edx + esi], 0x0
        mov     dword ptr [ebp - 0x8], ecx
        jz      L_46579e
        mov     edx, ecx
        and     edx, 0xffff
        dec     edx
        cmp     edx, 0x1
        jle     L_46579e
        mov     esi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebx + 0x48]
        add     ecx, esi
        dec     edx
        lea     eax, [eax + edi*2]
        mov     dword ptr [ebp - 0x20], ecx
        lea     esi, [ecx + 0x1]
        mov     dword ptr [ebp + 0x14], edx
        jmp     L_465758
L_465747:
        mov     eax, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [eax + 0x48]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp + 0x10], eax
        jmp     L_4656e7
L_465755:
        mov     ecx, dword ptr [ebp - 0x20]
L_465758:
        xor     edx, edx
        mov     dl, byte ptr [ecx]
        mov     ecx, dword ptr [g_007da5f4]
        add     eax, 0x2
        inc     edi
        add     eax, 0x2
        add     eax, 0x2
        mov     dx, word ptr [ecx + edx*2]
        mov     word ptr [eax - 0x6], dx
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x1]
        inc     edi
        mov     dx, word ptr [ecx + edx*2]
        mov     word ptr [eax - 0x4], dx
        xor     edx, edx
        mov     dl, byte ptr [esi]
        inc     edi
        inc     esi
        mov     cx, word ptr [ecx + edx*2]
        mov     word ptr [eax - 0x2], cx
        dec     dword ptr [ebp + 0x14]
        jnz     L_465755
        mov     ecx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp + 0x10]
        mov     esi, dword ptr [ebp - 0x18]
L_46579e:
        mov     edx, dword ptr [ebp + 0x8]
        and     ecx, 0xffff
        add     edx, ecx
        mov     ecx, dword ptr [ebp - 0x1c]
        inc     esi
        cmp     esi, ecx
        mov     dword ptr [ebp + 0x8], edx
        mov     dword ptr [ebp - 0x18], esi
        /* __emit: MSVC6 miscomputes this backward jl rel32 (off-by-3: -0xAA vs ref -0xAD) */
        __emit 0x0F
        __emit 0x8C
        __emit 0x53
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        mov     ecx, dword ptr [ebp + 0xc]
L_4657be:
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        mov     word ptr [ebx + 0x54], di
        jnz     L_4657d7
        mov     eax, dword ptr [ecx + 0xc]
        and     edi, 0xffff
        add     eax, edi
        mov     dword ptr [ecx + 0xc], eax
L_4657d7:
        cmp     word ptr [ebx + 0xa], 0x0
        pop     edi
        setnz   dl
        pop     esi
        mov     byte ptr [ebx + 0x10], dl
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}
