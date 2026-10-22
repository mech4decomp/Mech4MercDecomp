/*
 * FUN_006680a0 (8002 B) — GameData parameter setter dispatcher.
 *
 * A giant switch on param_2[4] (0x33..0x8D). Each case optionally calls a
 * virtual method (param_2 vtable +4) to fetch a value, validates a float
 * field on param_1, and either returns the "changed" flag or formats an
 * error message via _snprintf (IAT 0x0076b424) and returns 0.
 *
 * __cdecl, 5 params. Uses EBP frame + ESP-aligned locals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0066a3c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

extern float g_76c5b0;   /* 0x0076c5b0 */
extern float g_795498;   /* 0x00795498 */
extern float g_79549c;   /* 0x0079549c */
extern float g_76d064;   /* 0x0076d064 */
extern float g_7899f0;   /* 0x007899f0 */
extern void *g_76b424;   /* 0x0076b424 IAT (_snprintf) */
extern unsigned short g_7db0ac; /* 0x007db0ac */
extern unsigned short g_7db0ae; /* 0x007db0ae */
extern int g_jt[];       /* 0x00669fe4 jump table */

__declspec(naked) void __cdecl FUN_006680a0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x14
        mov     eax, dword ptr [ebp + 0x10]
        mov     cl, byte ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        push    edi
        mov     edi, dword ptr [ebp + 0x18]
        test    cl, cl
        mov     ecx, dword ptr [ebp + 0x14]
        push    edi
        push    ecx
        push    eax
        push    esi
        push    ebx
        setnz   byte ptr [esp + 0x23]
        call    FUN_0066a3c0
        mov     byte ptr [esp + 0x22], al
        mov     eax, dword ptr [esi + 0x10]
        add     eax, -0x33
        add     esp, 0x14
        cmp     eax, 0x5a
        ja      L_d7
        jmp     dword ptr [eax*4 + g_jt]

    /* case 0x33 */
    case33:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c33_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c33_skip:
        fld     dword ptr [ebx + 0x2f8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [g_795498]
        sub     esp, 8
        fmul    dword ptr [ebx + 0x2f8]
        fstp    qword ptr [esp]
        push    0x796638
        jmp     L_c2

    /* case 0x34 */
    case34:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c34_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c34_skip:
        fld     dword ptr [ebx + 0x2fc]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [g_795498]
        mov     edx, dword ptr [ebp + 0x14]
        fmul    dword ptr [ebx + 0x2fc]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796608
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x35 */
    case35:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c35_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c35_skip:
        fld     dword ptr [ebx + 0x344]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x344]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7965cc
        jmp     L_c2

    /* case 0x36 */
    case36:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c36_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c36_skip:
        fld     dword ptr [ebx + 0x300]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x300]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796594
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x37 */
    case37:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c37_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c37_skip:
        fld     dword ptr [ebx + 0x30c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x30c]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796558
        jmp     L_c2

    /* case 0x38 */
    case38:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c38_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c38_skip:
        fld     dword ptr [ebx + 0x310]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x310]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x79651c
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x39 */
    case39:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c39_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c39_skip:
        fld     dword ptr [ebx + 0x314]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x314]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7964dc
        jmp     L_c2

    /* case 0x3a */
    case3a:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c3a_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c3a_skip:
        fld     dword ptr [ebx + 0x318]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x318]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x79649c
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x3b */
    case3b:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c3b_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c3b_skip:
        fld     dword ptr [ebx + 0x304]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x304]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x79645c
        jmp     L_c2

    /* case 0x3c */
    case3c:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c3c_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c3c_skip:
        fld     dword ptr [ebx + 0x308]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x308]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796418
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x3d */
    case3d:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c3d_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c3d_skip:
        fld     dword ptr [ebx + 0x31c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c3d_ok
        fld     dword ptr [ebx + 0x31c]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_d7
    c3d_ok:
        fld     dword ptr [ebx + 0x31c]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7963d8
        jmp     L_c2

    /* case 0x3e */
    case3e:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c3e_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c3e_skip:
        fld     dword ptr [ebx + 0x320]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c3e_ok
        fld     dword ptr [ebx + 0x320]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_d7
    c3e_ok:
        fld     dword ptr [ebx + 0x320]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796398
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x3f */
    case3f:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c3f_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c3f_skip:
        fld     dword ptr [ebx + 0x324]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c3f_ok
        fld     dword ptr [ebx + 0x324]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_d7
    c3f_ok:
        fld     dword ptr [ebx + 0x324]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796358
        jmp     L_c2

    /* case 0x40 */
    case40:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c40_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c40_skip:
        fld     dword ptr [ebx + 0x328]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c40_ok
        fld     dword ptr [ebx + 0x328]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_d7
    c40_ok:
        fld     dword ptr [ebx + 0x328]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796318
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x41 */
    case41:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c41_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c41_skip:
        fld     dword ptr [ebx + 0x32c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c41_ok
        fld     dword ptr [ebx + 0x32c]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_d7
    c41_ok:
        fld     dword ptr [ebx + 0x32c]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7962d0
        jmp     L_c2

    /* case 0x42 */
    case42:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c42_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c42_skip:
        fld     dword ptr [ebx + 0x330]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c42_ok
        fld     dword ptr [ebx + 0x330]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_d7
    c42_ok:
        fld     dword ptr [ebx + 0x330]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x79628c
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x43 */
    case43:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c43_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c43_skip:
        fld     dword ptr [ebx + 0x334]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c43_ok
        fld     dword ptr [ebx + 0x334]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_d7
    c43_ok:
        fld     dword ptr [ebx + 0x334]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796248
        jmp     L_c2

    /* case 0x44 */
    case44:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c44_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c44_skip:
        fld     dword ptr [ebx + 0x338]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c44_ok
        fld     dword ptr [ebx + 0x338]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_d7
    c44_ok:
        fld     dword ptr [ebx + 0x338]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796204
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x45 */
    case45:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c45_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c45_skip:
        fld     dword ptr [ebx + 0x33c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c45_ok
        fld     dword ptr [ebx + 0x33c]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_d7
    c45_ok:
        fld     dword ptr [ebx + 0x33c]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7961c4
        jmp     L_c2

    /* case 0x46 */
    case46:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c46_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c46_skip:
        fld     dword ptr [ebx + 0x340]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c46_ok
        fld     dword ptr [ebx + 0x340]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_d7
    c46_ok:
        fld     dword ptr [ebx + 0x340]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x79617c
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x47 */
    case47:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c47_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c47_skip:
        fld     dword ptr [ebx + 0x348]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x348]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796144
        jmp     L_c2

    /* case 0x48 */
    case48:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c48_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c48_skip:
        fld     dword ptr [ebx + 0x34c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x34c]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796110
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x49 */
    case49:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c49_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c49_skip:
        fld     dword ptr [ebx + 0x350]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x350]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7960dc
        jmp     L_c2

    /* case 0x4a */
    case4a:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c4a_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c4a_skip:
        fld     dword ptr [ebx + 0x354]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x354]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796098
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x4b */
    case4b:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c4b_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c4b_skip:
        fld     dword ptr [ebx + 0x358]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x358]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796050
        jmp     L_c2

    /* case 0x4c */
    case4c:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c4c_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c4c_skip:
        fld     dword ptr [ebx + 0x35c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      c4c_ok
        fld     dword ptr [ebx + 0x35c]
        fcomp   dword ptr [g_7899f0]
        fnstsw  ax
        test    ah, 0x41
        jnz     c4c_ok
        fld     dword ptr [ebx + 0x35c]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796004
        push    edi
        push    eax
        jmp     L_c9
    c4c_ok:
        fld     dword ptr [g_79549c]
        mov     al, byte ptr [esp + 0xe]
        fmul    dword ptr [ebx + 0x35c]
        fstp    dword ptr [ebx + 0x35c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x4d */
    case4d:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c4d_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c4d_skip:
        fld     dword ptr [ebx + 0x360]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      c4d_ok
        fld     dword ptr [ebx + 0x360]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795fc4
        jmp     L_c2
    c4d_ok:
        fld     dword ptr [g_79549c]
        mov     al, byte ptr [esp + 0xe]
        fmul    dword ptr [ebx + 0x360]
        fstp    dword ptr [ebx + 0x360]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x4e */
    case4e:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c4e_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c4e_skip:
        fld     dword ptr [ebx + 0x364]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      c4e_ok
        fld     dword ptr [ebx + 0x364]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795f84
        push    edi
        push    eax
        jmp     L_c9
    c4e_ok:
        fld     dword ptr [g_79549c]
        mov     al, byte ptr [esp + 0xe]
        fmul    dword ptr [ebx + 0x364]
        fstp    dword ptr [ebx + 0x364]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x4f */
    case4f:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c4f_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c4f_skip:
        fld     dword ptr [ebx + 0x368]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      c4f_ok
        fld     dword ptr [ebx + 0x368]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795f4c
        jmp     L_c2
    c4f_ok:
        fld     dword ptr [g_79549c]
        mov     al, byte ptr [esp + 0xe]
        fmul    dword ptr [ebx + 0x368]
        fstp    dword ptr [ebx + 0x368]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x50 */
    case50:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c50_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c50_skip:
        fld     dword ptr [ebx + 0x36c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      c50_ok
        fld     dword ptr [ebx + 0x36c]
        fcomp   dword ptr [g_7899f0]
        fnstsw  ax
        test    ah, 0x41
        jnz     c50_ok
        fld     dword ptr [ebx + 0x36c]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795f04
        push    edi
        push    eax
        jmp     L_c9
    c50_ok:
        fld     dword ptr [g_79549c]
        mov     al, byte ptr [esp + 0xe]
        fmul    dword ptr [ebx + 0x36c]
        fstp    dword ptr [ebx + 0x36c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x51 */
    case51:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c51_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c51_skip:
        fld     dword ptr [ebx + 0x370]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      c51_ok
        fld     dword ptr [ebx + 0x370]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795ec8
        jmp     L_c2
    c51_ok:
        fld     dword ptr [g_79549c]
        mov     al, byte ptr [esp + 0xe]
        fmul    dword ptr [ebx + 0x370]
        fstp    dword ptr [ebx + 0x370]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x52 */
    case52:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c52_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c52_skip:
        fld     dword ptr [ebx + 0x374]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      c52_ok
        fld     dword ptr [ebx + 0x374]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795e8c
        push    edi
        push    eax
        jmp     L_c9
    c52_ok:
        fld     dword ptr [g_79549c]
        mov     al, byte ptr [esp + 0xe]
        fmul    dword ptr [ebx + 0x374]
        fstp    dword ptr [ebx + 0x374]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x53 */
    case53:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c53_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c53_skip:
        fld     dword ptr [ebx + 0x378]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      c53_ok
        fld     dword ptr [ebx + 0x378]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795e54
        jmp     L_c2
    c53_ok:
        fld     dword ptr [g_79549c]
        mov     al, byte ptr [esp + 0xe]
        fmul    dword ptr [ebx + 0x378]
        fstp    dword ptr [ebx + 0x378]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x54 */
    case54:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c54_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c54_skip:
        fld     dword ptr [ebx + 0x37c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      c54_ok
        fld     dword ptr [ebx + 0x37c]
        fcomp   dword ptr [g_7899f0]
        fnstsw  ax
        test    ah, 0x41
        jnz     c54_ok
        fld     dword ptr [ebx + 0x37c]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795e08
        push    edi
        push    eax
        jmp     L_c9
    c54_ok:
        fld     dword ptr [g_79549c]
        mov     al, byte ptr [esp + 0xe]
        fmul    dword ptr [ebx + 0x37c]
        fstp    dword ptr [ebx + 0x37c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x55 */
    case55:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c55_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c55_skip:
        fld     dword ptr [ebx + 0x380]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      c55_ok
        fld     dword ptr [ebx + 0x380]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795dc8
        jmp     L_c2
    c55_ok:
        fld     dword ptr [g_79549c]
        mov     al, byte ptr [esp + 0xe]
        fmul    dword ptr [ebx + 0x380]
        fstp    dword ptr [ebx + 0x380]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x56 */
    case56:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c56_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c56_skip:
        fld     dword ptr [ebx + 0x384]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      c56_ok
        fld     dword ptr [ebx + 0x384]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795d8c
        push    edi
        push    eax
        jmp     L_c9
    c56_ok:
        fld     dword ptr [g_79549c]
        mov     al, byte ptr [esp + 0xe]
        fmul    dword ptr [ebx + 0x384]
        fstp    dword ptr [ebx + 0x384]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x57 */
    case57:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c57_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c57_skip:
        fld     dword ptr [ebx + 0x388]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      c57_ok
        fld     dword ptr [ebx + 0x388]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795d54
        jmp     L_c2
    c57_ok:
        fld     dword ptr [g_79549c]
        mov     al, byte ptr [esp + 0xe]
        fmul    dword ptr [ebx + 0x388]
        fstp    dword ptr [ebx + 0x388]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x58 */
    case58:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c58_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c58_skip:
        fld     dword ptr [ebx + 0x38c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x38c]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795d14
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x59 */
    case59:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c59_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c59_skip:
        fld     dword ptr [ebx + 0x390]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x390]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795cd0
        jmp     L_c2

    /* case 0x5a */
    case5a:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c5a_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c5a_skip:
        fld     dword ptr [ebx + 0x394]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x394]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795c8c
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x5b */
    case5b:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c5b_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c5b_skip:
        fld     dword ptr [ebx + 0x398]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x398]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795c4c
        jmp     L_c2

    /* case 0x5c */
    case5c:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c5c_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c5c_skip:
        fld     dword ptr [ebx + 0x39c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x39c]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795c0c
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x5d */
    case5d:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c5d_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c5d_skip:
        fld     dword ptr [ebx + 0x3a0]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x3a0]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795bcc
        jmp     L_c2

    /* case 0x5e */
    case5e:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c5e_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c5e_skip:
        fld     dword ptr [ebx + 0x3a4]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x3a4]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795b88
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x5f */
    case5f:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c5f_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c5f_skip:
        fld     dword ptr [ebx + 0x3a8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x3a8]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795b44
        jmp     L_c2

    /* case 0x60 */
    case60:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c60_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c60_skip:
        fld     dword ptr [ebx + 0x3ac]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x3ac]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795b04
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x61 */
    case61:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c61_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c61_skip:
        fld     dword ptr [ebx + 0x3b0]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x3b0]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795ac4
        jmp     L_c2

    /* case 0x62 */
    case62:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c62_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c62_skip:
        fld     dword ptr [ebx + 0x3b4]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x3b4]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795a80
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x63 */
    case63:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c63_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c63_skip:
        fld     dword ptr [ebx + 0x3b8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x3b8]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795a38
        jmp     L_c2

    /* case 0x64 */
    case64:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c64_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c64_skip:
        fld     dword ptr [ebx + 0x3bc]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x3bc]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7959f0
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x65 */
    case65:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c65_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c65_skip:
        fld     dword ptr [ebx + 0x3c0]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x3c0]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7959ac
        jmp     L_c2

    /* case 0x66 */
    case66:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c66_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c66_skip:
        fld     dword ptr [ebx + 0x3c4]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x3c4]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795968
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x67 */
    case67:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c67_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c67_skip:
        fld     dword ptr [ebx + 0x3c8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x3c8]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795930
        jmp     L_c2

    /* case 0x68 */
    case68:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c68_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c68_skip:
        fld     dword ptr [ebx + 0x3cc]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x3cc]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7958f4
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x69 */
    case69:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c69_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c69_skip:
        fld     dword ptr [ebx + 0x3d0]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x3d0]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7958b4
        jmp     L_c2

    /* case 0x6a */
    case6a:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c6a_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c6a_skip:
        fld     dword ptr [ebx + 0x3d4]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x3d4]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795878
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x6b */
    case6b:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c6b_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c6b_skip:
        fld     dword ptr [ebx + 0x3d8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x3d8]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795840
        jmp     L_c2

    /* case 0x6c */
    case6c:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c6c_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], 0
        mov     dword ptr [esp + 0x20], 0
        mov     dword ptr [esp + 0x24], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c6c_skip:
        fld     dword ptr [ebx + 0x3dc]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c6c_ok
        fld     dword ptr [ebx + 0x3e0]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c6c_ok
        fld     dword ptr [ebx + 0x3e4]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
    c6c_ok:
        fld     dword ptr [ebx + 0x3e4]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        sub     esp, 8
        fld     dword ptr [ebx + 0x3e0]
        sub     esp, 8
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [ebx + 0x3dc]
        fstp    qword ptr [esp]
        push    0x795800
        push    edi
        push    eax
        call    dword ptr [g_76b424]
        mov     byte ptr [esp + 0x32], 0
        mov     al, byte ptr [esp + 0x32]
        add     esp, 0x24
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x6d */
    case6d:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c6d_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x14]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], 0
        mov     dword ptr [esp + 0x20], 0
        mov     dword ptr [esp + 0x24], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c6d_skip:
        fld     dword ptr [ebx + 0x3e8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c6d_ok
        fld     dword ptr [ebx + 0x3ec]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c6d_ok
        fld     dword ptr [ebx + 0x3f0]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
    c6d_ok:
        fld     dword ptr [ebx + 0x3f0]
        sub     esp, 8
        fstp    qword ptr [esp]
        sub     esp, 8
        fld     dword ptr [ebx + 0x3ec]
        sub     esp, 8
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [ebx + 0x3e8]
        fstp    qword ptr [esp]
        push    0x7957c4
        jmp     L_6981e

    /* case 0x6e */
    case6e:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c6e_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], 0
        mov     dword ptr [esp + 0x20], 0
        mov     dword ptr [esp + 0x24], 0
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c6e_skip:
        fld     dword ptr [ebx + 0x3f4]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c6e_ok
        fld     dword ptr [ebx + 0x3f8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c6e_ok
        fld     dword ptr [ebx + 0x3fc]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
    c6e_ok:
        fld     dword ptr [ebx + 0x3fc]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        sub     esp, 8
        fld     dword ptr [ebx + 0x3f8]
        sub     esp, 8
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [ebx + 0x3f4]
        fstp    qword ptr [esp]
        push    0x79578c
        push    edi
        push    eax
        call    dword ptr [g_76b424]
        mov     byte ptr [esp + 0x32], 0
        mov     al, byte ptr [esp + 0x32]
        add     esp, 0x24
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x6f */
    case6f:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c6f_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x14]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], 0
        mov     dword ptr [esp + 0x20], 0
        mov     dword ptr [esp + 0x24], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c6f_skip:
        fld     dword ptr [ebx + 0x400]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c6f_ok
        fld     dword ptr [ebx + 0x404]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     c6f_ok
        fld     dword ptr [ebx + 0x408]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
    c6f_ok:
        fld     dword ptr [ebx + 0x408]
        sub     esp, 8
        fstp    qword ptr [esp]
        sub     esp, 8
        fld     dword ptr [ebx + 0x404]
        sub     esp, 8
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [ebx + 0x400]
        fstp    qword ptr [esp]
        push    0x79574c
    L_6981e:
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ecx]
        push    edi
        push    edx
        call    dword ptr [g_76b424]
        mov     byte ptr [esp + 0x32], 0
        mov     al, byte ptr [esp + 0x32]
        add     esp, 0x24
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x70 */
    case70:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     ax, word ptr [g_7db0ac]
        mov     cx, word ptr [g_7db0ae]
        mov     edx, dword ptr [esi]
        mov     word ptr [esp + 0x10], ax
        lea     eax, [esp + 0x10]
        push    eax
        mov     word ptr [esp + 0x16], cx
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x71 */
    /* case 0x71 */
    case71:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     cx, word ptr [g_7db0ac]
        mov     dx, word ptr [g_7db0ae]
        mov     eax, dword ptr [esi]
        mov     word ptr [esp + 0x10], cx
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     word ptr [esp + 0x1a], dx
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x72 */
    case72:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     ax, word ptr [g_7db0ae]
        mov     dx, word ptr [g_7db0ac]
        mov     word ptr [esp + 0x12], ax
        lea     eax, [esp + 0x10]
        push    eax
        mov     word ptr [esp + 0x14], dx
        mov     edx, dword ptr [esi]
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x73 */
    case73:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     cx, word ptr [g_7db0ac]
        mov     dx, word ptr [g_7db0ae]
        mov     eax, dword ptr [esi]
        mov     word ptr [esp + 0x10], cx
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     word ptr [esp + 0x1a], dx
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x74 */
    case74:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     ax, word ptr [g_7db0ae]
        mov     dx, word ptr [g_7db0ac]
        mov     word ptr [esp + 0x12], ax
        lea     eax, [esp + 0x10]
        push    eax
        mov     word ptr [esp + 0x14], dx
        mov     edx, dword ptr [esi]
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x75 */
    case75:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        push    0x100
        call    FUN_004084d0
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        add     esp, 4
        mov     edi, 0x76b768
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ecx]
        push    edx
        push    ebx
        mov     dword ptr [esp + 0x18], edx
        call    dword ptr [eax + 4]
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     byte ptr [esp + 0x12], 1
        call    FUN_004084e0
        mov     al, byte ptr [esp + 0x12]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x76 */
    case76:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        push    0x100
        call    FUN_004084d0
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        add     esp, 4
        mov     edi, 0x76b768
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ecx]
        push    edx
        push    ebx
        mov     dword ptr [esp + 0x18], edx
        call    dword ptr [eax + 4]
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     byte ptr [esp + 0x12], 1
        call    FUN_004084e0
        mov     al, byte ptr [esp + 0x12]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x77 */
    case77:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     ax, word ptr [g_7db0ae]
        mov     dx, word ptr [g_7db0ac]
        mov     word ptr [esp + 0x12], ax
        lea     eax, [esp + 0x10]
        push    eax
        mov     word ptr [esp + 0x14], dx
        mov     edx, dword ptr [esi]
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x78 */
    case78:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c78_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0x42700000
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c78_skip:
        fld     dword ptr [ebx + 0x628]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_d7
        fld     dword ptr [ebx + 0x628]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795720
        jmp     L_c2

    /* case 0x79 */
    case79:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0xffffffff
        call    dword ptr [eax + 4]
        mov     al, 1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x7a */
    case7a:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0xf]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     byte ptr [esp + 0x17], 1
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x7b */
    case7b:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0xf]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     byte ptr [esp + 0x17], 1
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x7c */
    case7c:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0xf]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     byte ptr [esp + 0x17], 1
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x7d */
    case7d:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0xf]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     byte ptr [esp + 0x17], 1
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x7e */
    case7e:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0xf]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     byte ptr [esp + 0x17], 1
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x7f */
    case7f:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0xf]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     byte ptr [esp + 0x17], 1
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret


    /* case 0x80 */
    case80:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0xf]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     byte ptr [esp + 0x17], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x81 */
    case81:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0xf]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     byte ptr [esp + 0x17], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x82 */
    case82:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0xf]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     byte ptr [esp + 0x17], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x83 */
    case83:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c83_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0x3f800000
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c83_skip:
        fld     dword ptr [ebx + 0x664]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x664]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7956e8
        jmp     L_c2

    /* case 0x84 */
    case84:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c84_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0x3f800000
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c84_skip:
        fld     dword ptr [ebx + 0x648]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x648]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7956b4
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x85 */
    case85:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c85_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c85_skip:
        mov     ebx, dword ptr [ebx + 0x638]
        test    ebx, ebx
        jge     L_d7
        push    ebx
        push    0x795684
        jmp     L_69f0d

    /* case 0x86 */
    case86:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     ax, word ptr [g_7db0ac]
        mov     cx, word ptr [g_7db0ae]
        mov     edx, dword ptr [esi]
        mov     word ptr [esp + 0x10], ax
        lea     eax, [esp + 0x10]
        push    eax
        mov     word ptr [esp + 0x16], cx
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x87 */
    case87:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c87_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0x3f800000
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c87_skip:
        fld     dword ptr [ebx + 0x628]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_d7
        fld     dword ptr [ebx + 0x650]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x795648
        jmp     L_c2

    /* case 0x88 */
    case88:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     ax, word ptr [g_7db0ac]
        mov     cx, word ptr [g_7db0ae]
        mov     edx, dword ptr [esi]
        mov     word ptr [esp + 0x10], ax
        lea     eax, [esp + 0x10]
        push    eax
        mov     word ptr [esp + 0x16], cx
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x89 */
    case89:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     cx, word ptr [g_7db0ac]
        mov     dx, word ptr [g_7db0ae]
        mov     eax, dword ptr [esi]
        mov     word ptr [esp + 0x10], cx
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     word ptr [esp + 0x1a], dx
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x8a */
    case8a:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     L_d7
        mov     ax, word ptr [g_7db0ae]
        mov     dx, word ptr [g_7db0ac]
        mov     word ptr [esp + 0x12], ax
        lea     eax, [esp + 0x10]
        push    eax
        mov     word ptr [esp + 0x14], dx
        mov     edx, dword ptr [esi]
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x8b */
    case8b:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c8b_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c8b_skip:
        mov     ebx, dword ptr [ebx + 0x660]
        test    ebx, ebx
        jge     L_d7
        push    ebx
        push    0x795614
    L_69f0d:
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ecx]
        push    edi
        push    edx
        call    dword ptr [g_76b424]
        mov     byte ptr [esp + 0x1e], 0
        mov     al, byte ptr [esp + 0x1e]
        add     esp, 0x10
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    /* case 0x8c */
    case8c:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c8c_skip
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0x42c80000
        call    dword ptr [eax + 4]
        mov     byte ptr [esp + 0xe], 1
    c8c_skip:
        fld     dword ptr [ebx + 0x66c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_d7
        fld     dword ptr [ebx + 0x66c]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7955e0
        push    edi
        push    eax
        jmp     L_c9

    /* case 0x8d */
    case8d:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jnz     c8d_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0x3f800000
        call    dword ptr [edx + 4]
        mov     byte ptr [esp + 0xe], 1
    c8d_skip:
        fld     dword ptr [ebx + 0x670]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_d7
        fld     dword ptr [ebx + 0x670]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7955a8
    L_c2:
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ecx]
        push    edi
        push    edx
    L_c9:
        call    dword ptr [g_76b424]
        add     esp, 0x14
        mov     byte ptr [esp + 0xe], 0
    L_d7:
        mov     al, byte ptr [esp + 0xe]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
