/*
 * FUN_0043a0e0 (1619 B) — MLR light/material renderer (__thiscall, RET 0x14).
 * Builds a vertex/light buffer, applies a 4x4 transform via FPU, and
 * dispatches through vtables. Heavy FPU + extern-global usage.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9574;
extern void *g_007da848;
extern int g_007da864;
extern void *g_007da5f4;
extern char g_007da86c;
extern float g_0076d064;
extern float g_007da87c;
extern float g_007da874;
extern float g_007da878;
extern float g_007da870;
extern void *g_007b9864;
extern void *g_007da600;
extern void *g_007d98fc;

extern void FUN_00491cd0(void);
extern void FUN_00421f00(void);
extern void FUN_0043e0e0(void);
extern void FUN_004422b0(void);

__declspec(naked) void FUN_0043a0e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x24
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x90]
        test    eax, eax
        jz      L_a711
        mov     ecx, dword ptr [eax + 0x4]
        test    ecx, ecx
        jz      L_a711
        mov     eax, dword ptr [g_007b9574]
        test    eax, eax
        ja      L_a711
        mov     eax, dword ptr [ebx + 0x24]
        and     eax, 0x3fff
        push    esi
        push    edi
        mov     byte ptr [ebp + 0x17], 0x0
        mov     dword ptr [ebp + -0xc], 0x0
        mov     dword ptr [ebp + -0x10], 0x0
        jz      L_a1e7
        test    eax, eax
        jle     L_a1e7
        mov     ecx, dword ptr [g_007da848]
        mov     esi, dword ptr [ecx + eax*0x4 + 0x24]
        test    esi, esi
        jz      L_a1e7
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        jl      L_a16e
        mov     dword ptr [g_007da864], 0x1
        jmp     L_a1c9
L_a16e:
        cmp     eax, 0x80
        jl      L_a181
        mov     dword ptr [g_007da864], 0x2
        jmp     L_a1c9
L_a181:
        cmp     eax, 0x40
        jl      L_a192
        mov     dword ptr [g_007da864], 0x4
        jmp     L_a1c9
L_a192:
        cmp     eax, 0x20
        jl      L_a1a3
        mov     dword ptr [g_007da864], 0x8
        jmp     L_a1c9
L_a1a3:
        cmp     eax, 0x10
        jl      L_a1b4
        mov     dword ptr [g_007da864], 0x10
        jmp     L_a1c9
L_a1b4:
        xor     ecx, ecx
        cmp     eax, 0x8
        setl    cl
        dec     ecx
        and     ecx, 0xffffffe0
        add     ecx, 0x40
        mov     dword ptr [g_007da864], ecx
L_a1c9:
        mov     al, byte ptr [esi + 0x24]
        test    al, al
        jnz     L_a1f6
        mov     esi, dword ptr [esi + 0x28]
        test    esi, esi
        jz      L_a1f6
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x1c]
        mov     byte ptr [ebp + 0x17], 0x1
        mov     dword ptr [ebp + -0xc], edx
        mov     dword ptr [ebp + -0x10], eax
L_a1e7:
        mov     dl, byte ptr [ebp + 0x18]
        test    dl, dl
        mov     ecx, dword ptr [ebp + 0xc]
        jz      L_a1fc
        mov     eax, dword ptr [ecx + 0x38]
        jmp     L_a20b
L_a1f6:
        mov     byte ptr [ebp + 0x17], 0x0
        jmp     L_a1e7
L_a1fc:
        mov     eax, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x18]
        lea     eax, [eax + eax*0x4]
        lea     eax, [ecx + eax*0x8]
        mov     ecx, dword ptr [ebp + 0xc]
L_a20b:
        mov     dword ptr [ebx + 0x84], eax
        mov     eax, dword ptr [ebx + 0x64]
        and     eax, 0x3fff
        jz      L_a22c
        test    eax, eax
        jle     L_a22c
        mov     esi, dword ptr [g_007da848]
        mov     eax, dword ptr [esi + eax*0x4 + 0x24]
        mov     dword ptr [ebp + -0x24], eax
L_a22c:
        mov     edi, dword ptr [ebx + 0x18]
        cmp     edi, 0x100
        mov     dword ptr [ebp + -0x18], edi
        jle     L_a244
        mov     dword ptr [ebp + -0x18], 0x100
        mov     edi, dword ptr [ebp + -0x18]
L_a244:
        test    dl, dl
        jz      L_a24d
        mov     eax, dword ptr [ecx + 0x30]
        jmp     L_a257
L_a24d:
        mov     eax, dword ptr [ecx]
        mov     esi, dword ptr [ecx + 0x10]
        shl     eax, 0x5
        add     eax, esi
L_a257:
        test    dl, dl
        mov     dword ptr [ebx + 0x44], eax
        jz      L_a263
        mov     eax, dword ptr [ecx + 0x38]
        jmp     L_a26f
L_a263:
        mov     eax, dword ptr [ecx + 0x4]
        lea     edx, [eax + eax*0x4]
        mov     eax, dword ptr [ecx + 0x18]
        lea     eax, [eax + edx*0x8]
L_a26f:
        xor     esi, esi
        cmp     word ptr [ebx + 0x56], si
        mov     dword ptr [ebx + 0x84], eax
        mov     word ptr [ebx + 0xa], si
        jnz     L_a28b
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x98]
L_a28b:
        xor     eax, eax
        cmp     edi, eax
        mov     dword ptr [ebp + -0x14], eax
        jle     L_a530
        lea     ecx, [edi*0x8 + 0x0]
        mov     dword ptr [ebp + -0x8], eax
        mov     dword ptr [ebp + -0x1c], eax
        mov     dword ptr [ebp + -0x4], ecx
L_a2a8:
        mov     edx, dword ptr [g_007da600]
        mov     ecx, dword ptr [edx]
        cmp     byte ptr [ecx + esi*0x1], 0x0
        jnz     L_a2be
        inc     dword ptr [ebp + -0x14]
        jmp     L_a518
L_a2be:
        mov     edi, dword ptr [ebp + -0x14]
        mov     ecx, dword ptr [g_007da5f4]
        mov     edx, esi
        sub     edx, edi
        mov     dword ptr [ecx + esi*0x2], edx
        test    byte ptr [g_007da86c], 0x2
        jle     L_a439
        mov     ecx, dword ptr [ebx + 0x28]
        test    ch, 0x3c
        jz      L_a439
        mov     ecx, dword ptr [ebx + 0x14]
        mov     edi, dword ptr [ebx + 0x1c]
        add     eax, ecx
        mov     dword ptr [ebp + -0x24], eax
        xor     eax, eax
        mov     ax, word ptr [ebx + 0xa]
        lea     edx, [eax + eax*0x4]
        mov     eax, dword ptr [ebx + 0x84]
        lea     ecx, [eax + edx*0x8]
        mov     dword ptr [ebp + -0x20], ecx
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + -0x24]
        fld     dword ptr [eax]
        fld     dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp + -0x20]
        fld     dword ptr [edx + 0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx + 0x38]
        fmul    st(0), st(2)
        /* __emit: MSVC6 FPU stack tracker rejects fxch (D9 C9) */
        __emit 0xD9
        __emit 0xC9
        fadd    dword ptr [edx + 0x3c]
        fld     dword ptr [edx + 0x30]
        fmul    st(0), st(5)
        /* __emit: MSVC6 FPU stack tracker rejects fxch st(2) (D9 CA) */
        __emit 0xD9
        __emit 0xCA
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    st(0), st(4)
        /* __emit: MSVC6 FPU stack tracker rejects fxch st(2) (D9 CA) */
        __emit 0xD9
        __emit 0xCA
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    st(0), st(3)
        /* __emit: MSVC6 FPU stack tracker rejects fxch (D9 C9) */
        __emit 0xD9
        __emit 0xC9
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld     dword ptr [edx + 0x10]
        fmul    st(0), st(5)
        /* __emit: MSVC6 FPU stack tracker rejects fxch st(2) (D9 CA) */
        __emit 0xD9
        __emit 0xCA
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x24]
        fmul    st(0), st(4)
        /* __emit: MSVC6 FPU stack tracker rejects fxch st(2) (D9 CA) */
        __emit 0xD9
        __emit 0xCA
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    st(0), st(3)
        /* __emit: MSVC6 FPU stack tracker rejects fxch (D9 C9) */
        __emit 0xD9
        __emit 0xC9
        fstp    dword ptr [eax + 0x4]
        fadd    dword ptr [edx + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    st(0), st(5)
        /* __emit: MSVC6 FPU stack tracker rejects fxch st(2) (D9 CA) */
        __emit 0xD9
        __emit 0xCA
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    st(0), st(4)
        /* __emit: MSVC6 FPU stack tracker rejects fxch st(2) (D9 CA) */
        __emit 0xD9
        __emit 0xCA
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    st(0), st(3)
        /* __emit: MSVC6 FPU stack tracker rejects fxch (D9 C9) */
        __emit 0xD9
        __emit 0xC9
        fstp    dword ptr [eax + 0x8]
        fadd    dword ptr [edx + 0xc]
        fld     dword ptr [edx]
        fmul    st(0), st(5)
        /* __emit: MSVC6 FPU stack tracker rejects fxch st(2) (D9 CA) */
        __emit 0xD9
        __emit 0xCA
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [g_0076d064]
        fdiv    dword ptr [ecx + 0xc]
        mov     eax, dword ptr [edi + esi*0x8 + 0x4]
        mov     edx, dword ptr [edi + esi*0x8]
        mov     dword ptr [ecx + 0x1c], eax
        mov     eax, dword ptr [ebp + -0x4]
        mov     dword ptr [ecx + 0x18], edx
        mov     edx, dword ptr [edi + eax*0x1]
        mov     eax, dword ptr [edi + eax*0x1 + 0x4]
        mov     edi, dword ptr [ebp + 0x10]
        mov     dword ptr [ecx + 0x24], eax
        xor     eax, eax
        test    edi, edi
        mov     ax, word ptr [ebx + 0xa]
        mov     dword ptr [ecx + 0x20], edx
        lea     eax, [eax + eax*0x4]
        fst     dword ptr [ecx + 0xc]
        fld     st(0)
        fmul    dword ptr [ecx + 0x8]
        fstp    dword ptr [ecx + 0x8]
        fld     st(0)
        fmul    dword ptr [ecx]
        fmul    dword ptr [g_007da87c]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ecx]
        fmul    dword ptr [ecx + 0x4]
        fmul    dword ptr [g_007da878]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ebx + 0x90]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebx + 0x84]
        mov     edx, dword ptr [edx + esi*0x4]
        mov     dword ptr [ecx + eax*0x8 + 0x10], edx
        jz      L_a4b1
        mov     edx, dword ptr [ebx + 0x14]
        mov     eax, dword ptr [ebp + -0x8]
        add     eax, edx
        push    eax
        mov     ecx, edi
        call    FUN_00421f00
        mov     edx, dword ptr [ebx + 0x84]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        lea     ecx, [ecx + ecx*0x4]
        mov     byte ptr [edx + ecx*0x8 + 0x17], al
        jmp     L_a4b1
L_a439:
        mov     edx, dword ptr [ebx + 0x44]
        mov     edi, dword ptr [ebx + 0x1c]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        shl     ecx, 0x5
        add     ecx, edx
        mov     edx, dword ptr [ebx + 0x14]
        add     eax, edx
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        push    eax
        mov     dword ptr [ebp + -0x20], ecx
        mov     dword ptr [ebp + -0x24], eax
        call    FUN_0043e0e0
        mov     eax, dword ptr [ebp + -0x20]
        mov     ecx, dword ptr [edi + esi*0x8]
        mov     edx, dword ptr [edi + esi*0x8 + 0x4]
        mov     dword ptr [eax + 0x18], ecx
        mov     ecx, dword ptr [ebp + -0x1c]
        mov     dword ptr [eax + 0x1c], edx
        mov     eax, ecx
        add     ecx, 0x8
        mov     dword ptr [ebp + -0x1c], ecx
        mov     ecx, dword ptr [g_007b9864]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebp + -0x4]
        mov     ecx, dword ptr [edi + ecx*0x1]
        mov     dword ptr [edx + eax*0x1], ecx
        mov     ecx, dword ptr [ebp + -0x4]
        mov     ecx, dword ptr [edi + ecx*0x1 + 0x4]
        mov     dword ptr [edx + eax*0x1 + 0x4], ecx
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jz      L_a4ae
        mov     edx, dword ptr [ebp + -0x24]
        push    edx
        mov     ecx, eax
        call    FUN_00421f00
        mov     ecx, dword ptr [ebp + -0x20]
        mov     byte ptr [ecx + 0x17], al
L_a4ae:
        mov     edi, dword ptr [ebp + 0x10]
L_a4b1:
        mov     al, byte ptr [ebp + 0x17]
        test    al, al
        jz      L_a4ea
        mov     eax, dword ptr [ebx + 0x44]
        fld     dword ptr [ebp + -0xc]
        xor     edx, edx
        mov     dx, word ptr [ebx + 0xa]
        xor     ecx, ecx
        shl     edx, 0x5
        fadd    dword ptr [edx + eax*0x1 + 0x18]
        lea     eax, [edx + eax*0x1 + 0x18]
        fstp    dword ptr [eax]
        mov     cx, word ptr [ebx + 0xa]
        mov     edx, dword ptr [ebx + 0x44]
        fld     dword ptr [ebp + -0x10]
        shl     ecx, 0x5
        fadd    dword ptr [ecx + edx*0x1 + 0x1c]
        lea     eax, [ecx + edx*0x1 + 0x1c]
        fstp    dword ptr [eax]
L_a4ea:
        test    edi, edi
        jz      L_a50e
        mov     edx, dword ptr [ebx + 0x14]
        mov     eax, dword ptr [ebp + -0x8]
        add     eax, edx
        push    eax
        mov     ecx, edi
        call    FUN_00421f00
        mov     edx, dword ptr [ebx + 0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        shl     ecx, 0x5
        mov     byte ptr [ecx + edx*0x1 + 0x17], al
L_a50e:
        inc     word ptr [ebx + 0xa]
        mov     eax, dword ptr [ebp + -0x8]
        mov     edi, dword ptr [ebp + -0x18]
L_a518:
        mov     ecx, dword ptr [ebp + -0x4]
        inc     esi
        add     ecx, 0x8
        add     eax, 0xc
        cmp     esi, edi
        mov     dword ptr [ebp + -0x4], ecx
        mov     dword ptr [ebp + -0x8], eax
        jl      L_a2a8
L_a530:
        test    byte ptr [g_007da86c], 0x2
        jle     L_a61c
        mov     eax, dword ptr [ebx + 0x28]
        test    ah, 0x3c
        jz      L_a61c
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        jnz     L_a706
        mov     eax, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [eax + 0x4]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        add     edx, ecx
        mov     dword ptr [eax + 0x4], edx
L_a565:
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 0x28]
        lea     eax, [edx + ecx*0x2]
L_a56e:
        mov     ecx, dword ptr [ebx + 0x58]
        xor     edx, edx
        xor     edi, edi
        cmp     ecx, edx
        mov     dword ptr [ebx + 0x50], eax
        mov     word ptr [ebx + 0x54], di
        mov     dword ptr [ebp + 0x8], edx
        mov     dword ptr [ebp + 0x10], edx
        jle     L_a5ec
        mov     ecx, dword ptr [g_007d98fc]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [ebp + 0x14], ecx
        mov     ecx, dword ptr [g_007da5f4]
L_a597:
        mov     esi, dword ptr [ebp + 0x14]
        cmp     byte ptr [esi + edx*0x1], 0x0
        jz      L_a5dd
        mov     edx, dword ptr [ebx + 0x48]
        mov     esi, dword ptr [ebp + 0x10]
        add     esi, edx
        xor     edx, edx
        mov     dl, byte ptr [esi]
        add     eax, 0x2
        inc     edi
        add     eax, 0x2
        mov     dx, word ptr [ecx + edx*0x2]
        mov     word ptr [eax + -0x4], dx
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x2]
        inc     edi
        mov     dx, word ptr [ecx + edx*0x2]
        mov     word ptr [eax + -0x2], dx
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x1]
        inc     edi
        add     eax, 0x2
        mov     dx, word ptr [ecx + edx*0x2]
        mov     word ptr [eax + -0x2], dx
        mov     edx, dword ptr [ebp + 0x8]
L_a5dd:
        add     dword ptr [ebp + 0x10], 0x3
        mov     esi, dword ptr [ebx + 0x58]
        inc     edx
        cmp     edx, esi
        mov     dword ptr [ebp + 0x8], edx
        jl      L_a597
L_a5ec:
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        mov     word ptr [ebx + 0x54], di
        jnz     L_a608
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [eax + 0xc]
        and     edi, 0xffff
        add     ecx, edi
        mov     dword ptr [eax + 0xc], ecx
L_a608:
        cmp     word ptr [ebx + 0xa], 0x0
        pop     edi
        setnz   al
        pop     esi
        mov     byte ptr [ebx + 0x10], al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
L_a61c:
        mov     eax, dword ptr [ebx + 0x64]
        and     eax, 0x3fff
        jz      L_a656
        test    eax, eax
        jle     L_a656
        mov     edx, dword ptr [g_007da848]
        mov     eax, dword ptr [edx + eax*0x4 + 0x24]
        test    eax, eax
        jz      L_a656
        mov     cl, byte ptr [eax + 0x24]
        test    cl, cl
        jnz     L_a6b7
        mov     eax, dword ptr [eax + 0x28]
        test    eax, eax
        jz      L_a6b7
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 0x1c]
        mov     byte ptr [ebp + 0x17], 0x1
        mov     dword ptr [ebp + -0xc], ecx
        mov     dword ptr [ebp + -0x10], edx
L_a656:
        mov     esi, dword ptr [ebx + 0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        shl     ecx, 0x5
        lea     edi, [esi + ecx*0x1]
        mov     eax, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        mov     al, byte ptr [ebp + 0x17]
        and     ecx, 0x3
        test    al, al
        rep movsb
        jz      L_a6bd
        xor     edx, edx
        mov     dx, word ptr [ebx + 0xa]
        test    edx, edx
        jle     L_a6ef
        mov     ecx, dword ptr [g_007b9864]
        mov     eax, dword ptr [ecx]
        mov     esi, dword ptr [ebx + 0x44]
        mov     ecx, edx
        shl     ecx, 0x5
        lea     ecx, [ecx + esi*0x1 + 0x1c]
        mov     esi, edx
L_a69a:
        fld     dword ptr [ebp + -0xc]
        add     eax, 0x8
        fadd    dword ptr [eax + -0x8]
        add     ecx, 0x20
        dec     esi
        fstp    dword ptr [ecx + -0x24]
        fld     dword ptr [ebp + -0x10]
        fadd    dword ptr [eax + -0x4]
        fstp    dword ptr [ecx + -0x20]
        jnz     L_a69a
        jmp     L_a6ef
L_a6b7:
        mov     byte ptr [ebp + 0x17], 0x0
        jmp     L_a656
L_a6bd:
        xor     edx, edx
        mov     dx, word ptr [ebx + 0xa]
        test    edx, edx
        jle     L_a6ef
        mov     esi, dword ptr [ebx + 0x44]
        mov     eax, dword ptr [g_007b9864]
        mov     eax, dword ptr [eax]
        mov     ecx, edx
        shl     ecx, 0x5
        lea     ecx, [ecx + esi*0x1 + 0x1c]
        mov     esi, edx
L_a6dc:
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx + -0x4], edi
        mov     edi, dword ptr [eax + 0x4]
        mov     dword ptr [ecx], edi
        add     eax, 0x8
        add     ecx, 0x20
        dec     esi
        jnz     L_a6dc
L_a6ef:
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        jnz     L_a706
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [eax]
        add     edx, edx
        add     ecx, edx
        mov     dword ptr [eax], ecx
        jmp     L_a565
L_a706:
        mov     eax, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [eax + 0x48]
        jmp     L_a56e
L_a711:
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0x10]
        push    ecx
        mov     ecx, dword ptr [ebp + 0xc]
        push    edx
        mov     edx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        push    edx
        mov     ecx, ebx
        call    FUN_004422b0
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}


