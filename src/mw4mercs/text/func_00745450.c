/*
 * FUN_00745450 (3419 B) - CPU/memory benchmark. Uses RDTSC timing loops to
 * measure memory read/write bandwidth and stores results in globals at
 * 0x008b27xx. Also probes display adapter memory via FUN_00734e70 etc.
 *
 * __cdecl, no params, RET (plain).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* IAT function pointers */
extern void *(__cdecl *g_76b294)(unsigned int);              /* malloc */
extern void *(__stdcall *g_76b214)(void);                    /* GetCurrentThread */
extern void *(__stdcall *g_76b23c)(void);                    /* GetCurrentProcess */
extern int (__stdcall *g_76b1c4)(void *);                    /* GetThreadPriority */
extern unsigned int (__stdcall *g_76b1c8)(void *);           /* GetPriorityClass */
extern void (__stdcall *g_76b0d8)(unsigned int);             /* Sleep */
extern int (__stdcall *g_76b1cc)(void *, unsigned int);      /* SetPriorityClass */
extern int (__stdcall *g_76b1fc)(void *, int);               /* SetThreadPriority */
extern int (__stdcall *g_76b224)(void *);                    /* QueryPerformanceFrequency */
extern int (__stdcall *g_76b220)(void *);                    /* QueryPerformanceCounter */
extern int (__stdcall *g_76b128)(const void *, unsigned int);/* IsBadReadPtr */
extern void (__cdecl *g_76b2d0)(void *);                     /* free */
extern int (__cdecl *g_76b420)(char *, const char *, ...);   /* sprintf */

/* direct calls */
extern void *__cdecl FUN_0075dd60(unsigned int, unsigned int, unsigned int, unsigned int); /* __alldiv */
extern int __cdecl FUN_00734e70(int, int, void *, int);
extern int __cdecl FUN_00735280(void *, void *, int);
extern int __cdecl FUN_00735230(void *, void *, void *, int);
extern int __cdecl FUN_007353f0(void *, int, void *, int, int);
extern int __cdecl FUN_00735440(void *, int);
extern int __cdecl FUN_00740db0(void *);
extern int __cdecl FUN_00735030(void *, void *);

/* data globals */
extern float g_8b2768;   /* DAT_008b2768 */
extern float g_8b275c;   /* DAT_008b275c */
extern float g_8b2764;   /* DAT_008b2764 */
extern float g_8b2758;   /* DAT_008b2758 */
extern float g_8b2760;   /* DAT_008b2760 */
extern float g_8b2754;   /* DAT_008b2754 */
extern float g_8b2748;   /* DAT_008b2748 */
extern float g_8b274c;   /* DAT_008b274c */
extern float g_8b2750;   /* DAT_008b2750 */
extern float g_8b273c;   /* DAT_008b273c */
extern float g_8b2740;   /* DAT_008b2740 */
extern float g_8b2744;   /* DAT_008b2744 */
extern float g_8b2728;   /* DAT_008b2728 */
extern float g_8b2724;   /* DAT_008b2724 */
extern int g_859278;     /* DAT_00859278 */
extern char g_87dd0a;    /* DAT_0087dd0a */
extern void *g_858bf8;   /* DAT_00858bf8 */
extern float g_78096c;   /* float constant */
extern float g_76d064;   /* float constant */
extern float g_76dd60;   /* float constant */

__declspec(naked) void __cdecl FUN_00745450(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x2c0
        push    ebx
        push    esi
        push    edi
        push    0x210000
        call    dword ptr [g_76b294]
        mov     dword ptr [ebp - 0x38], eax
        add     eax, 0x1f
        and     eax, 0xffffffe0
        add     esp, 0x4
        mov     dword ptr [ebp - 0x28], eax
        call    dword ptr [g_76b214]
        mov     esi, eax
        call    dword ptr [g_76b23c]
        mov     edi, eax
        push    esi
        mov     dword ptr [ebp - 0x44], edi
        call    dword ptr [g_76b1c4]
        push    edi
        mov     dword ptr [ebp - 0x48], eax
        call    dword ptr [g_76b1c8]
        mov     ebx, dword ptr [g_76b0d8]
        push    0x1
        mov     dword ptr [ebp - 0x4c], eax
        call    ebx
        push    0x100
        push    edi
        call    dword ptr [g_76b1cc]
        push    0xf
        push    esi
        call    dword ptr [g_76b1fc]
        push    0x1
        call    ebx
        lea     eax, [ebp - 0x10]
        push    eax
        call    dword ptr [g_76b224]
        lea     ecx, [ebp - 0x8]
        push    ecx
        call    dword ptr [g_76b220]
        mov     edx, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ebp - 0x10]
        push    0x0
        push    0x2
        push    edx
        push    eax
        call    FUN_0075dd60
        mov     ebx, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp - 0x4]
        add     ebx, eax
        adc     ecx, edx
        mov     dword ptr [ebp - 0x8], ebx
        mov     dword ptr [ebp - 0x4], ecx
        push    eax
        push    edx
        rdtsc
        mov     dword ptr [ebp - 0x40], eax
        mov     dword ptr [ebp - 0x3c], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x28]
        mov     edx, 0x0
L_745509:
        mov     ebx, dword ptr [eax + edx]
        add     edx, 0x20
        cmp     edx, 0x20000
        jnz     L_745509
        push    eax
        push    edx
        rdtsc
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x28]
        mov     edx, 0x0
        mov     ecx, 0x4000
L_745530:
        mov     ebx, dword ptr [eax + edx]
        mov     ebx, dword ptr [eax + edx + 0x1e4]
        mov     ebx, dword ptr [eax + edx + 0x20]
        mov     ebx, dword ptr [eax + edx + 0x1c4]
        mov     ebx, dword ptr [eax + edx + 0x40]
        mov     ebx, dword ptr [eax + edx + 0x1a4]
        mov     ebx, dword ptr [eax + edx + 0x60]
        mov     ebx, dword ptr [eax + edx + 0x184]
        mov     ebx, dword ptr [eax + edx + 0x80]
        mov     ebx, dword ptr [eax + edx + 0x164]
        mov     ebx, dword ptr [eax + edx + 0xa0]
        mov     ebx, dword ptr [eax + edx + 0x184]
        mov     ebx, dword ptr [eax + edx + 0xc0]
        mov     ebx, dword ptr [eax + edx + 0x1a4]
        mov     ebx, dword ptr [eax + edx + 0xe0]
        mov     ebx, dword ptr [eax + edx + 0x1c4]
        add     edx, 0x200
        and     edx, 0x1ffff
        dec     ecx
        jnz     L_745530
        push    eax
        push    edx
        rdtsc
        sub     eax, dword ptr [ebp - 0x1c]
        sbb     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     ecx, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [ebp - 0x1c]
        push    0x0
        push    0x40000
        push    ecx
        push    edx
        call    FUN_0075dd60
        mov     dword ptr [ebp - 0x24], eax
        mov     dword ptr [ebp - 0x20], edx
        fild    qword ptr [ebp - 0x24]
        fstp    dword ptr [g_8b2768]
        push    eax
        push    edx
        rdtsc
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x28]
        mov     edx, 0x22000
        mov     ecx, 0x2000
L_7455f0:
        mov     ebx, dword ptr [eax + edx]
        mov     ebx, dword ptr [eax + edx + 0x1e4]
        mov     ebx, dword ptr [eax + edx + 0x20]
        mov     ebx, dword ptr [eax + edx + 0x1c4]
        mov     ebx, dword ptr [eax + edx + 0x40]
        mov     ebx, dword ptr [eax + edx + 0x1a4]
        mov     ebx, dword ptr [eax + edx + 0x60]
        mov     ebx, dword ptr [eax + edx + 0x184]
        mov     ebx, dword ptr [eax + edx + 0x80]
        mov     ebx, dword ptr [eax + edx + 0x164]
        mov     ebx, dword ptr [eax + edx + 0xa0]
        mov     ebx, dword ptr [eax + edx + 0x184]
        mov     ebx, dword ptr [eax + edx + 0xc0]
        mov     ebx, dword ptr [eax + edx + 0x1a4]
        mov     ebx, dword ptr [eax + edx + 0xe0]
        mov     ebx, dword ptr [eax + edx + 0x1c4]
        add     edx, 0x200
        and     edx, 0xfffff
        dec     ecx
        jnz     L_7455f0
        push    eax
        push    edx
        rdtsc
        sub     eax, dword ptr [ebp - 0x1c]
        sbb     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x18]
        mov     ecx, dword ptr [ebp - 0x1c]
        push    0x0
        push    0x20000
        push    eax
        push    ecx
        call    FUN_0075dd60
        mov     dword ptr [ebp - 0x24], eax
        mov     dword ptr [ebp - 0x20], edx
        fild    qword ptr [ebp - 0x24]
        fstp    dword ptr [g_8b275c]
        mov     eax, dword ptr [ebp - 0x28]
        add     eax, 0x100000
        mov     edx, 0x0
L_7456a4:
        mov     ebx, dword ptr [eax + edx]
        add     edx, 0x20
        cmp     edx, 0x20000
        jnz     L_7456a4
        push    eax
        push    edx
        rdtsc
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x28]
        add     eax, 0x100000
        mov     edx, 0x0
        mov     ecx, 0x4000
L_7456d0:
        mov     dword ptr [eax + edx], ecx
        mov     dword ptr [eax + edx + 0x1e4], ecx
        mov     dword ptr [eax + edx + 0x20], ecx
        mov     dword ptr [eax + edx + 0x1c4], ecx
        mov     dword ptr [eax + edx + 0x40], ecx
        mov     dword ptr [eax + edx + 0x1a4], ecx
        mov     dword ptr [eax + edx + 0x60], ecx
        mov     dword ptr [eax + edx + 0x184], ecx
        mov     dword ptr [eax + edx + 0x80], ecx
        mov     dword ptr [eax + edx + 0x164], ecx
        mov     dword ptr [eax + edx + 0xa0], ecx
        mov     dword ptr [eax + edx + 0x184], ecx
        mov     dword ptr [eax + edx + 0xc0], ecx
        mov     dword ptr [eax + edx + 0x1a4], ecx
        mov     dword ptr [eax + edx + 0xe0], ecx
        mov     dword ptr [eax + edx + 0x1c4], ecx
        add     edx, 0x200
        and     edx, 0x1ffff
        dec     ecx
        jnz     L_7456d0
        push    eax
        push    edx
        rdtsc
        sub     eax, dword ptr [ebp - 0x1c]
        sbb     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     edx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x1c]
        xor     ebx, ebx
        push    ebx
        push    0x40000
        push    edx
        push    eax
        call    FUN_0075dd60
        mov     dword ptr [ebp - 0x24], eax
        mov     dword ptr [ebp - 0x20], edx
        fild    qword ptr [ebp - 0x24]
        fstp    dword ptr [g_8b2764]
        push    eax
        push    edx
        rdtsc
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x28]
        add     eax, 0x100000
        mov     edx, 0x22000
        mov     ecx, 0x2000
L_745796:
        mov     dword ptr [eax + edx], ecx
        mov     dword ptr [eax + edx + 0x1e4], ecx
        mov     dword ptr [eax + edx + 0x20], ecx
        mov     dword ptr [eax + edx + 0x1c4], ecx
        mov     dword ptr [eax + edx + 0x40], ecx
        mov     dword ptr [eax + edx + 0x1a4], ecx
        mov     dword ptr [eax + edx + 0x60], ecx
        mov     dword ptr [eax + edx + 0x184], ecx
        mov     dword ptr [eax + edx + 0x80], ecx
        mov     dword ptr [eax + edx + 0x164], ecx
        mov     dword ptr [eax + edx + 0xa0], ecx
        mov     dword ptr [eax + edx + 0x184], ecx
        mov     dword ptr [eax + edx + 0xc0], ecx
        mov     dword ptr [eax + edx + 0x1a4], ecx
        mov     dword ptr [eax + edx + 0xe0], ecx
        mov     dword ptr [eax + edx + 0x1c4], ecx
        add     edx, 0x200
        and     edx, 0xfffff
        dec     ecx
        jnz     L_745796
        push    eax
        push    edx
        rdtsc
        sub     eax, dword ptr [ebp - 0x1c]
        sbb     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     ecx, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [ebp - 0x1c]
        push    ebx
        push    0x20000
        push    ecx
        push    edx
        call    FUN_0075dd60
        mov     dword ptr [ebp - 0x24], eax
        mov     dword ptr [ebp - 0x20], edx
        fild    qword ptr [ebp - 0x24]
        fstp    dword ptr [g_8b2758]
        mov     eax, dword ptr [ebp - 0x28]
        mov     edx, 0x0
L_745844:
        mov     dword ptr [eax + edx], ebx
        add     edx, 0x20
        cmp     edx, 0x20000
        jnz     L_745844
        push    eax
        push    edx
        rdtsc
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x28]
        mov     edx, 0x0
        mov     ecx, 0x4000
L_74586b:
        add     dword ptr [eax + edx], ecx
        add     dword ptr [eax + edx + 0x1e4], ecx
        add     dword ptr [eax + edx + 0x20], ecx
        add     dword ptr [eax + edx + 0x1c4], ecx
        add     dword ptr [eax + edx + 0x40], ecx
        add     dword ptr [eax + edx + 0x1a4], ecx
        add     dword ptr [eax + edx + 0x60], ecx
        add     dword ptr [eax + edx + 0x184], ecx
        add     dword ptr [eax + edx + 0x80], ecx
        add     dword ptr [eax + edx + 0x164], ecx
        add     dword ptr [eax + edx + 0xa0], ecx
        add     dword ptr [eax + edx + 0x184], ecx
        add     dword ptr [eax + edx + 0xc0], ecx
        add     dword ptr [eax + edx + 0x1a4], ecx
        add     dword ptr [eax + edx + 0xe0], ecx
        add     dword ptr [eax + edx + 0x1c4], ecx
        add     edx, 0x200
        and     edx, 0x1ffff
        dec     ecx
        jnz     L_74586b
        push    eax
        push    edx
        rdtsc
        sub     eax, dword ptr [ebp - 0x1c]
        sbb     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x18]
        mov     ecx, dword ptr [ebp - 0x1c]
        push    ebx
        push    0x40000
        push    eax
        push    ecx
        call    FUN_0075dd60
        mov     dword ptr [ebp - 0x24], eax
        mov     dword ptr [ebp - 0x20], edx
        fild    qword ptr [ebp - 0x24]
        fstp    dword ptr [g_8b2760]
        push    eax
        push    edx
        rdtsc
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x28]
        mov     edx, 0x22000
        mov     ecx, 0x2000
L_74592a:
        add     dword ptr [eax + edx], ecx
        add     dword ptr [eax + edx + 0x1e4], ecx
        add     dword ptr [eax + edx + 0x20], ecx
        add     dword ptr [eax + edx + 0x1c4], ecx
        add     dword ptr [eax + edx + 0x40], ecx
        add     dword ptr [eax + edx + 0x1a4], ecx
        add     dword ptr [eax + edx + 0x60], ecx
        add     dword ptr [eax + edx + 0x184], ecx
        add     dword ptr [eax + edx + 0x80], ecx
        add     dword ptr [eax + edx + 0x164], ecx
        add     dword ptr [eax + edx + 0xa0], ecx
        add     dword ptr [eax + edx + 0x184], ecx
        add     dword ptr [eax + edx + 0xc0], ecx
        add     dword ptr [eax + edx + 0x1a4], ecx
        add     dword ptr [eax + edx + 0xe0], ecx
        add     dword ptr [eax + edx + 0x1c4], ecx
        add     edx, 0x200
        and     edx, 0xfffff
        dec     ecx
        jnz     L_74592a
        push    eax
        push    edx
        rdtsc
        sub     eax, dword ptr [ebp - 0x1c]
        sbb     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     edx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x1c]
        push    ebx
        push    0x20000
        push    edx
        push    eax
        call    FUN_0075dd60
        mov     dword ptr [ebp - 0x2c], eax
        cmp     dword ptr [g_859278], 0x2
        mov     dword ptr [ebp - 0x28], edx
        fild    qword ptr [ebp - 0x2c]
        mov     dword ptr [g_8b2748], ebx
        mov     dword ptr [g_8b274c], ebx
        fstp    dword ptr [g_8b2754]
        mov     dword ptr [g_8b2750], ebx
        mov     dword ptr [g_8b273c], ebx
        mov     dword ptr [g_8b2740], ebx
        mov     dword ptr [g_8b2744], ebx
        jz      L_746097
        push    ebx
        push    0x7a2d10
        lea     ecx, [ebp - 0x20]
        push    ecx
        push    ebx
        mov     dword ptr [ebp - 0x14], ebx
        mov     dword ptr [ebp - 0x20], ebx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00734e70
        test    eax, eax
        jl      L_746090
        mov     edx, dword ptr [g_858bf8]
        mov     eax, dword ptr [ebp - 0x20]
        push    0x8
        push    edx
        push    eax
        call    FUN_00735280
        xor     eax, eax
        push    eax
        mov     ecx, 0x1f
        lea     edi, [ebp - 0xc8]
        rep stosd
        mov     eax, dword ptr [ebp - 0x20]
        lea     ecx, [ebp - 0x14]
        push    ecx
        lea     edx, [ebp - 0xc8]
        push    edx
        mov     ebx, 0x180
        mov     edi, 0x7c
        push    eax
        mov     dword ptr [ebp - 0xc8], edi
        mov     dword ptr [ebp - 0xc4], 0x7
        mov     dword ptr [ebp - 0x60], 0x10004040
        mov     dword ptr [ebp - 0xbc], ebx
        mov     dword ptr [ebp - 0xc0], ebx
        call    FUN_00735230
        test    eax, eax
        jl      L_745d4c
        mov     edx, dword ptr [ebp - 0x14]
        push    0x0
        push    0x801
        lea     ecx, [ebp - 0x144]
        push    ecx
        push    0x0
        push    edx
        mov     dword ptr [ebp - 0x144], edi
        call    FUN_007353f0
        test    eax, eax
        jl      L_745d43
        test    dword ptr [ebp - 0xdc], 0x10000000
        jz      L_745d38
        mov     eax, dword ptr [ebp - 0x120]
        test    eax, eax
        jz      L_745d38
        push    0x24000
        push    eax
        call    dword ptr [g_76b128]
        test    eax, eax
        jnz     L_745d38
        mov     eax, dword ptr [ebp - 0x120]
        mov     dword ptr [ebp - 0x28], eax
        push    eax
        push    edx
        rdtsc
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x28]
        mov     edx, 0x0
        mov     ecx, 0x2000
L_745b0c:
        mov     ebx, dword ptr [eax + edx]
        mov     ebx, dword ptr [eax + edx + 0x1e4]
        mov     ebx, dword ptr [eax + edx + 0x20]
        mov     ebx, dword ptr [eax + edx + 0x1c4]
        mov     ebx, dword ptr [eax + edx + 0x40]
        mov     ebx, dword ptr [eax + edx + 0x1a4]
        mov     ebx, dword ptr [eax + edx + 0x60]
        mov     ebx, dword ptr [eax + edx + 0x184]
        mov     ebx, dword ptr [eax + edx + 0x80]
        mov     ebx, dword ptr [eax + edx + 0x164]
        mov     ebx, dword ptr [eax + edx + 0xa0]
        mov     ebx, dword ptr [eax + edx + 0x184]
        mov     ebx, dword ptr [eax + edx + 0xc0]
        mov     ebx, dword ptr [eax + edx + 0x1a4]
        mov     ebx, dword ptr [eax + edx + 0xe0]
        mov     ebx, dword ptr [eax + edx + 0x1c4]
        add     edx, 0x200
        and     edx, 0x1ffff
        dec     ecx
        jnz     L_745b0c
        push    eax
        push    edx
        rdtsc
        sub     eax, dword ptr [ebp - 0x1c]
        sbb     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     ecx, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [ebp - 0x1c]
        push    0x0
        push    0x20000
        push    ecx
        push    edx
        call    FUN_0075dd60
        mov     dword ptr [ebp - 0x34], eax
        mov     dword ptr [ebp - 0x30], edx
        fild    qword ptr [ebp - 0x34]
        fstp    dword ptr [g_8b2750]
        push    eax
        push    edx
        rdtsc
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x28]
        mov     edx, 0x0
        mov     ecx, 0x2000
L_745bcc:
        mov     dword ptr [eax + edx], ecx
        mov     dword ptr [eax + edx + 0x1e4], ecx
        mov     dword ptr [eax + edx + 0x20], ecx
        mov     dword ptr [eax + edx + 0x1c4], ecx
        mov     dword ptr [eax + edx + 0x40], ecx
        mov     dword ptr [eax + edx + 0x1a4], ecx
        mov     dword ptr [eax + edx + 0x60], ecx
        mov     dword ptr [eax + edx + 0x184], ecx
        mov     dword ptr [eax + edx + 0x80], ecx
        mov     dword ptr [eax + edx + 0x164], ecx
        mov     dword ptr [eax + edx + 0xa0], ecx
        mov     dword ptr [eax + edx + 0x184], ecx
        mov     dword ptr [eax + edx + 0xc0], ecx
        mov     dword ptr [eax + edx + 0x1a4], ecx
        mov     dword ptr [eax + edx + 0xe0], ecx
        mov     dword ptr [eax + edx + 0x1c4], ecx
        add     edx, 0x200
        and     edx, 0x1ffff
        dec     ecx
        jnz     L_745bcc
        push    eax
        push    edx
        rdtsc
        sub     eax, dword ptr [ebp - 0x1c]
        sbb     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x18]
        mov     ecx, dword ptr [ebp - 0x1c]
        push    0x0
        push    0x20000
        push    eax
        push    ecx
        call    FUN_0075dd60
        mov     dword ptr [ebp - 0x34], eax
        mov     dword ptr [ebp - 0x30], edx
        fild    qword ptr [ebp - 0x34]
        fstp    dword ptr [g_8b274c]
        push    eax
        push    edx
        rdtsc
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x28]
        mov     edx, 0x0
        mov     ecx, 0x2000
L_745c8c:
        add     dword ptr [eax + edx], ecx
        add     dword ptr [eax + edx + 0x1e4], ecx
        add     dword ptr [eax + edx + 0x20], ecx
        add     dword ptr [eax + edx + 0x1c4], ecx
        add     dword ptr [eax + edx + 0x40], ecx
        add     dword ptr [eax + edx + 0x1a4], ecx
        add     dword ptr [eax + edx + 0x60], ecx
        add     dword ptr [eax + edx + 0x184], ecx
        add     dword ptr [eax + edx + 0x80], ecx
        add     dword ptr [eax + edx + 0x164], ecx
        add     dword ptr [eax + edx + 0xa0], ecx
        add     dword ptr [eax + edx + 0x184], ecx
        add     dword ptr [eax + edx + 0xc0], ecx
        add     dword ptr [eax + edx + 0x1a4], ecx
        add     dword ptr [eax + edx + 0xe0], ecx
        add     dword ptr [eax + edx + 0x1c4], ecx
        add     edx, 0x200
        and     edx, 0x1ffff
        dec     ecx
        jnz     L_745c8c
        push    eax
        push    edx
        rdtsc
        sub     eax, dword ptr [ebp - 0x1c]
        sbb     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     edx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x1c]
        push    0x0
        push    0x20000
        push    edx
        push    eax
        call    FUN_0075dd60
        mov     dword ptr [ebp - 0x34], eax
        mov     dword ptr [ebp - 0x30], edx
        fild    qword ptr [ebp - 0x34]
        mov     ebx, 0x180
        fstp    dword ptr [g_8b2748]
L_745d38:
        mov     ecx, dword ptr [ebp - 0x14]
        push    0x0
        push    ecx
        call    FUN_00735440
L_745d43:
        mov     edx, dword ptr [ebp - 0x14]
        push    edx
        call    FUN_00740db0
L_745d4c:
        xor     eax, eax
        push    eax
        mov     ecx, 0x1f
        lea     edi, [ebp - 0xc8]
        rep stosd
        mov     ecx, dword ptr [ebp - 0x20]
        lea     eax, [ebp - 0x2c0]
        push    eax
        mov     edi, 0x7c
        push    ecx
        mov     dword ptr [ebp - 0xc8], edi
        mov     dword ptr [ebp - 0xc4], 0x7
        mov     dword ptr [ebp - 0x60], 0x20004040
        mov     dword ptr [ebp - 0xbc], ebx
        mov     dword ptr [ebp - 0xc0], ebx
        mov     dword ptr [ebp - 0x2c0], 0x17c
        call    FUN_00735030
        mov     edx, dword ptr [ebp - 0x2b8]
        shr     edx, 0x9
        test    dl, 0x1
        jz      L_746084
        mov     edx, dword ptr [ebp - 0x20]
        push    0x0
        lea     eax, [ebp - 0x14]
        push    eax
        lea     ecx, [ebp - 0xc8]
        push    ecx
        push    edx
        call    FUN_00735230
        test    eax, eax
        jl      L_746084
        mov     ecx, dword ptr [ebp - 0x14]
        push    0x0
        push    0x801
        lea     eax, [ebp - 0x144]
        push    eax
        push    0x0
        push    ecx
        mov     dword ptr [ebp - 0x144], edi
        call    FUN_007353f0
        test    eax, eax
        jl      L_74607b
        test    dword ptr [ebp - 0xdc], 0x20000000
        jz      L_746070
        mov     eax, dword ptr [ebp - 0x120]
        test    eax, eax
        jz      L_746070
        push    0x24000
        push    eax
        call    dword ptr [g_76b128]
        test    eax, eax
        jnz     L_746070
        mov     edx, dword ptr [ebp - 0x120]
        mov     dword ptr [ebp - 0x28], edx
        push    eax
        push    edx
        rdtsc
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x28]
        mov     edx, 0x0
        mov     ecx, 0x2000
L_745e49:
        mov     ebx, dword ptr [eax + edx]
        mov     ebx, dword ptr [eax + edx + 0x1e4]
        mov     ebx, dword ptr [eax + edx + 0x20]
        mov     ebx, dword ptr [eax + edx + 0x1c4]
        mov     ebx, dword ptr [eax + edx + 0x40]
        mov     ebx, dword ptr [eax + edx + 0x1a4]
        mov     ebx, dword ptr [eax + edx + 0x60]
        mov     ebx, dword ptr [eax + edx + 0x184]
        mov     ebx, dword ptr [eax + edx + 0x80]
        mov     ebx, dword ptr [eax + edx + 0x164]
        mov     ebx, dword ptr [eax + edx + 0xa0]
        mov     ebx, dword ptr [eax + edx + 0x184]
        mov     ebx, dword ptr [eax + edx + 0xc0]
        mov     ebx, dword ptr [eax + edx + 0x1a4]
        mov     ebx, dword ptr [eax + edx + 0xe0]
        mov     ebx, dword ptr [eax + edx + 0x1c4]
        add     edx, 0x200
        and     edx, 0x1ffff
        dec     ecx
        jnz     L_745e49
        push    eax
        push    edx
        rdtsc
        sub     eax, dword ptr [ebp - 0x1c]
        sbb     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x18]
        mov     ecx, dword ptr [ebp - 0x1c]
        push    0x0
        push    0x20000
        push    eax
        push    ecx
        call    FUN_0075dd60
        mov     dword ptr [ebp - 0x34], eax
        mov     dword ptr [ebp - 0x30], edx
        fild    qword ptr [ebp - 0x34]
        fstp    dword ptr [g_8b2744]
        push    eax
        push    edx
        rdtsc
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x28]
        mov     edx, 0x0
        mov     ecx, 0x2000
L_745f09:
        mov     dword ptr [eax + edx], ecx
        mov     dword ptr [eax + edx + 0x1e4], ecx
        mov     dword ptr [eax + edx + 0x20], ecx
        mov     dword ptr [eax + edx + 0x1c4], ecx
        mov     dword ptr [eax + edx + 0x40], ecx
        mov     dword ptr [eax + edx + 0x1a4], ecx
        mov     dword ptr [eax + edx + 0x60], ecx
        mov     dword ptr [eax + edx + 0x184], ecx
        mov     dword ptr [eax + edx + 0x80], ecx
        mov     dword ptr [eax + edx + 0x164], ecx
        mov     dword ptr [eax + edx + 0xa0], ecx
        mov     dword ptr [eax + edx + 0x184], ecx
        mov     dword ptr [eax + edx + 0xc0], ecx
        mov     dword ptr [eax + edx + 0x1a4], ecx
        mov     dword ptr [eax + edx + 0xe0], ecx
        mov     dword ptr [eax + edx + 0x1c4], ecx
        add     edx, 0x200
        and     edx, 0x1ffff
        dec     ecx
        jnz     L_745f09
        push    eax
        push    edx
        rdtsc
        sub     eax, dword ptr [ebp - 0x1c]
        sbb     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     edx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x1c]
        push    0x0
        push    0x20000
        push    edx
        push    eax
        call    FUN_0075dd60
        mov     dword ptr [ebp - 0x34], eax
        mov     dword ptr [ebp - 0x30], edx
        fild    qword ptr [ebp - 0x34]
        fstp    dword ptr [g_8b2740]
        push    eax
        push    edx
        rdtsc
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     eax, dword ptr [ebp - 0x28]
        mov     edx, 0x0
        mov     ecx, 0x2000
L_745fc9:
        add     dword ptr [eax + edx], ecx
        add     dword ptr [eax + edx + 0x1e4], ecx
        add     dword ptr [eax + edx + 0x20], ecx
        add     dword ptr [eax + edx + 0x1c4], ecx
        add     dword ptr [eax + edx + 0x40], ecx
        add     dword ptr [eax + edx + 0x1a4], ecx
        add     dword ptr [eax + edx + 0x60], ecx
        add     dword ptr [eax + edx + 0x184], ecx
        add     dword ptr [eax + edx + 0x80], ecx
        add     dword ptr [eax + edx + 0x164], ecx
        add     dword ptr [eax + edx + 0xa0], ecx
        add     dword ptr [eax + edx + 0x184], ecx
        add     dword ptr [eax + edx + 0xc0], ecx
        add     dword ptr [eax + edx + 0x1a4], ecx
        add     dword ptr [eax + edx + 0xe0], ecx
        add     dword ptr [eax + edx + 0x1c4], ecx
        add     edx, 0x200
        and     edx, 0x1ffff
        dec     ecx
        jnz     L_745fc9
        push    eax
        push    edx
        rdtsc
        sub     eax, dword ptr [ebp - 0x1c]
        sbb     edx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        pop     edx
        pop     eax
        mov     ecx, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [ebp - 0x1c]
        push    0x0
        push    0x20000
        push    ecx
        push    edx
        call    FUN_0075dd60
        mov     dword ptr [ebp - 0x34], eax
        mov     dword ptr [ebp - 0x30], edx
        fild    qword ptr [ebp - 0x34]
        fstp    dword ptr [g_8b273c]
L_746070:
        mov     eax, dword ptr [ebp - 0x14]
        push    0x0
        push    eax
        call    FUN_00735440
L_74607b:
        mov     ecx, dword ptr [ebp - 0x14]
        push    ecx
        call    FUN_00740db0
L_746084:
        mov     edx, dword ptr [ebp - 0x20]
        push    edx
        call    FUN_00740db0
        mov     edi, dword ptr [ebp - 0x44]
L_746090:
        mov     byte ptr [g_87dd0a], 0x0
L_746097:
        mov     ebx, dword ptr [g_76b220]
        lea     eax, [ebp - 0x10]
        push    eax
        call    ebx
        mov     ecx, dword ptr [ebp - 0x4]
        cmp     ecx, dword ptr [ebp - 0xc]
        jg      L_7460f2
        jl      L_7460b5
        mov     edx, dword ptr [ebp - 0x8]
        cmp     edx, dword ptr [ebp - 0x10]
        jnc     L_7460f2
L_7460b5:
        lea     eax, [ebp - 0x10]
        push    eax
        call    dword ptr [g_76b224]
        lea     ecx, [ebp - 0x8]
        push    ecx
        call    ebx
        mov     edx, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ebp - 0x10]
        push    0x0
        push    0x2
        push    edx
        push    eax
        call    FUN_0075dd60
        mov     ecx, dword ptr [ebp - 0x8]
        add     ecx, eax
        mov     eax, dword ptr [ebp - 0x4]
        adc     eax, edx
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0x4], eax
        push    eax
        push    edx
        rdtsc
        mov     dword ptr [ebp - 0x40], eax
        mov     dword ptr [ebp - 0x3c], edx
        pop     edx
        pop     eax
L_7460f2:
        lea     ecx, [ebp - 0x10]
        push    ecx
        call    ebx
        mov     edx, dword ptr [ebp - 0x4]
        cmp     edx, dword ptr [ebp - 0xc]
        jg      L_7460f2
        jl      L_74610a
        mov     eax, dword ptr [ebp - 0x8]
        cmp     eax, dword ptr [ebp - 0x10]
        ja      L_7460f2
L_74610a:
        push    eax
        push    edx
        rdtsc
        sub     eax, dword ptr [ebp - 0x40]
        sbb     edx, dword ptr [ebp - 0x3c]
        mov     dword ptr [ebp - 0x40], eax
        mov     dword ptr [ebp - 0x3c], edx
        pop     edx
        pop     eax
        mov     ecx, dword ptr [ebp - 0x48]
        push    ecx
        push    esi
        call    dword ptr [g_76b1fc]
        mov     edx, dword ptr [ebp - 0x4c]
        push    edx
        push    edi
        call    dword ptr [g_76b1cc]
        mov     eax, dword ptr [ebp - 0x38]
        push    eax
        call    dword ptr [g_76b2d0]
        mov     ecx, dword ptr [ebp - 0x3c]
        mov     edx, dword ptr [ebp - 0x40]
        add     esp, 0x4
        push    0x0
        push    0x7a120
        push    ecx
        push    edx
        call    FUN_0075dd60
        mov     dword ptr [ebp - 0x34], eax
        mov     dword ptr [ebp - 0x30], edx
        fild    qword ptr [ebp - 0x34]
        fst     dword ptr [g_8b2728]
        fmul    dword ptr [g_78096c]
        fdivr   dword ptr [g_76d064]
        fstp    dword ptr [g_8b2724]
        fld     dword ptr [g_8b2728]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [ebp - 0x38]
        mov     eax, dword ptr [ebp - 0x38]
        and     eax, 0x7fffff
        sub     eax, 0x400000
        push    eax
        push    0x7a9d58
        push    0x8b272c
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
