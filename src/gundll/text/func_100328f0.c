/*
 * FUN_100328f0 (942 B) - __thiscall, RET 0x4.
 * Timer/clock update routine using QueryPerformanceCounter/Frequency and
 * timeGetTime, with a per-frame delta correction.
 *
 * CFLAGS: /O1
 */

extern void *g_100490b8;   /* lstrlenW (IAT) */
extern void *g_100490b4;   /* QueryPerformanceCounter (IAT) */
extern void *g_100490b0;   /* QueryPerformanceFrequency (IAT) */
extern void *g_10049090;   /* Sleep (IAT) */
extern void *g_10049204;   /* timeGetTime (IAT) */

extern int g_10075478;
extern int g_1007547c;
extern __int64 g_10075470;
extern double g_10075480;
extern double g_10075490;
extern int g_10075488;
extern int g_10075494;
extern double g_1004af80;
extern double g_1004af78;
extern double g_1004af70;
extern double g_1004af68;

extern void FUN_10032730(void);
extern void FUN_10032ca0(void);

__declspec(naked) void FUN_100328f0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x44
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi]
        push    edi
        call    dword ptr [eax + 0x44]
        mov     esi, dword ptr [ebp + 0x8]
        mov     cl, byte ptr [esi + 0xc]
        xor     ebx, ebx
        mov     byte ptr [esp + 0xf], cl
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x18], ebx
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x4]
        cmp     eax, ebx
        jl      L_10032c95
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax]
        push    ebx
        push    eax
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x18]
        mov     eax, dword ptr [esi + 0x10]
        mov     edx, dword ptr [esi + 0x4]
        movzx   ebx, word ptr [esi + 0x8]
        push    eax
        mov     dword ptr [esp + 0x24], edx
        call    dword ptr [g_100490b8]
        mov     ecx, dword ptr [esi + 0x10]
        lea     eax, [eax + eax*0x1 + 0x2]
        lea     edx, [eax + eax*0x1]
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x48], eax
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        mov     word ptr [esp + 0x38], 0x4
        mov     dword ptr [esp + 0x3c], ecx
        mov     word ptr [esp + 0x40], dx
        mov     word ptr [esp + 0x44], 0x6
        mov     word ptr [esp + 0x4c], bx
        jz      L_10032aa8
        mov     ecx, dword ptr [eax]
        push    0x2
        lea     edx, [esp + 0x3c]
        push    edx
        push    0x8
        push    0x1
        lea     edx, [esp + 0x2c]
        push    edx
        push    eax
        call    dword ptr [ecx]
        test    eax, eax
        jl      L_10032c95
        mov     eax, dword ptr [esp + 0x1c]
        mov     bl, byte ptr [esp + 0xf]
        mov     byte ptr [eax + 0x2], bl
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x38]
        cmp     bl, 0x1
        jnz     L_10032adf
        mov     ebx, dword ptr [g_100490b4]
        lea     edx, [esp + 0x28]
        push    edx
        call    ebx
        mov     eax, dword ptr [esp + 0x28]
        mov     esi, dword ptr [g_10075478]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [g_1007547c]
        sub     eax, esi
        sbb     ecx, edx
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x24], ecx
        fild    qword ptr [esp + 0x20]
        fild    qword ptr [g_10075470]
        fdivp   st(1), st(0)
        fadd    qword ptr [g_10075480]
        fst     qword ptr [esp + 0x20]
        fsub    qword ptr [g_10075490]
        fcomp   qword ptr [g_1004af80]
        fnstsw ax
        test ah, 0x41
        jnz     L_10032ad1
        call    dword ptr [g_10049204]
        fld     qword ptr [esp + 0x20]
        fsub    qword ptr [g_10075490]
        mov     esi, eax
        mov     eax, dword ptr [g_10075488]
        mov     edx, esi
        sub     edx, eax
        mov     dword ptr [esp + 0x30], edx
        mov     dword ptr [esp + 0x34], 0x0
        fild    qword ptr [esp + 0x30]
        fmul    qword ptr [g_1004af78]
        fsubp   st(1), st(0)
        fcom    qword ptr [g_1004af70]
        fnstsw ax
        test ah, 0x41
        jz      L_10032a7a
        fcom    qword ptr [g_1004af68]
        fnstsw ax
        test ah, 0x05
        jp      L_10032ab6
    L_10032a7a:
        fld     qword ptr [g_10075480]
        push    0x10075470
        fsub    st(0), st(1)
        fstp    qword ptr [g_10075480]
        fld     qword ptr [esp + 0x24]
        fsub    st(0), st(1)
        fstp    qword ptr [esp + 0x24]
        fstp    st(0)
        call    dword ptr [g_100490b0]
        push    0x10075478
        call    ebx
        jmp     L_10032ab8
    L_10032aa8:
        mov     eax, 0x80070057
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    L_10032ab6:
        fstp    st(0)
    L_10032ab8:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [g_10075488], esi
        mov     dword ptr [g_10075490], eax
        mov     dword ptr [g_10075494], ecx
    L_10032ad1:
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [edi + 0x70], edx
        mov     dword ptr [edi + 0x74], eax
    L_10032adf:
        mov     ecx, dword ptr [edi]
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x1c]
        push    eax
        push    edi
        call    dword ptr [ecx + 0x18]
        mov     ebx, eax
        test    ebx, ebx
        jl      L_10032c93
        mov     eax, dword ptr [esp + 0x14]
        xor     esi, esi
        test    eax, eax
        jle     L_10032b40
    L_10032b03:
        mov     edx, dword ptr [esp + 0x18]
        push    0x3
        push    0x0
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x28], 0x0
        mov     eax, dword ptr [edx + esi*0x4]
        push    ecx
        push    eax
        mov     ecx, edi
        call    FUN_10032730
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jbe     L_10032b37
        push    0xa
        xor     esi, esi
        call    dword ptr [g_10049090]
    L_10032b37:
        mov     eax, dword ptr [esp + 0x14]
        inc     esi
        cmp     esi, eax
        jl      L_10032b03
    L_10032b40:
        movzx   eax, byte ptr [esp + 0xf]
        dec     eax
        jz      L_10032c6d
        dec     eax
        jnz     L_10032c93
        push    0xbb8
        mov     ecx, edi
        call    FUN_10032ca0
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     byte ptr [edi + 0x6c], 0x0
        call    dword ptr [g_100490b4]
        mov     edx, dword ptr [esp + 0x30]
        mov     esi, dword ptr [g_10075478]
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [g_1007547c]
        sub     edx, esi
        sbb     eax, ecx
        mov     dword ptr [esp + 0x2c], eax
        mov     dword ptr [esp + 0x28], edx
        fild    qword ptr [esp + 0x28]
        fild    qword ptr [g_10075470]
        fdivp   st(1), st(0)
        fadd    qword ptr [g_10075480]
        fst     qword ptr [esp + 0x20]
        fsub    qword ptr [g_10075490]
        fcomp   qword ptr [g_1004af80]
        fnstsw ax
        test ah, 0x41
        jnz     L_10032c55
        call    dword ptr [g_10049204]
        fld     qword ptr [esp + 0x20]
        fsub    qword ptr [g_10075490]
        mov     esi, eax
        mov     eax, dword ptr [g_10075488]
        mov     ecx, esi
        sub     ecx, eax
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x2c], 0x0
        fild    qword ptr [esp + 0x28]
        fmul    qword ptr [g_1004af78]
        fsubp   st(1), st(0)
        fcom    qword ptr [g_1004af70]
        fnstsw ax
        test ah, 0x41
        jz      L_10032c08
        fcom    qword ptr [g_1004af68]
        fnstsw ax
        test ah, 0x05
        jp      L_10032c3a
    L_10032c08:
        fld     qword ptr [g_10075480]
        push    0x10075470
        fsub    st(0), st(1)
        fstp    qword ptr [g_10075480]
        fld     qword ptr [esp + 0x24]
        fsub    st(0), st(1)
        fstp    qword ptr [esp + 0x24]
        fstp    st(0)
        call    dword ptr [g_100490b0]
        push    0x10075478
        call    dword ptr [g_100490b4]
        jmp     L_10032c3c
    L_10032c3a:
        fstp    st(0)
    L_10032c3c:
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [g_10075488], esi
        mov     dword ptr [g_10075490], edx
        mov     dword ptr [g_10075494], eax
    L_10032c55:
        fld     qword ptr [esp + 0x20]
        mov     eax, ebx
        fsub    qword ptr [edi + 0x70]
        fadd    qword ptr [edi + 0x28]
        fstp    qword ptr [edi + 0x28]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    L_10032c6d:
        push    0x3e8
        call    dword ptr [g_10049090]
        push    -0x1
        mov     ecx, edi
        call    FUN_10032ca0
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     byte ptr [edi + 0x6c], 0x1
    L_10032c93:
        mov     eax, ebx
    L_10032c95:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
