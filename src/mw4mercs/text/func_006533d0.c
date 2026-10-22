/*
 * FUN_006533d0 (1863 B) — __cdecl, EBP frame, RET (no stack cleanup).
 *
 * Large collision/selection routine with heavy FPU math (distance checks,
 * atan2, squared-length comparisons) and a linked-list iteration loop.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(int a);
extern void __cdecl FUN_00580540(void *p);
extern void __cdecl FUN_00653b20(void *p, void *q, void *r);
extern void __cdecl FUN_00652d90(void *p, void *q, void *r);
extern void __cdecl FUN_005fbb00(void *p);
extern void __cdecl FUN_0040ca10(void *p, void *q, void *r);
extern void __cdecl FUN_0041c830(void *p, void *q, void *r);
extern void __cdecl FUN_00707e70(int a);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_00684530(void *p, void *q, void *r, void *s);
extern void __cdecl FUN_006847e0(void *p);
extern void __cdecl FUN_00684840(void *p, void *q, int a);
extern void __cdecl FUN_00580760(void *p, void *q, int a);
extern void __cdecl FUN_004fcb30(void *p);
extern void __cdecl FUN_00415230(void *p);
extern void __cdecl FUN_00652fb0(void *p, void *q);
extern void __cdecl FUN_005b9560(void *p, void *q);
extern void __cdecl FUN_006531c0(void *p, void *q, void *r, void *s);
extern void __cdecl FUN_005ba2c0(void *p);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_005b9cc0(void *p);
extern void __cdecl FUN_005fb8e0(void *p);
extern void __cdecl FUN_00652780(void *p, void *q, void *r);
extern void __cdecl FUN_00652f70(void *p, void *q, void *r, void *s);

extern float g_76c5b0;   /* 0x0076c5b0 */
extern int   g_7dab44;   /* 0x007dab44 */
extern int   g_7dab40;   /* 0x007dab40 */
extern float g_794940;   /* 0x00794940 */
extern int   g_794920;   /* 0x00794920 */
extern float g_7b220c;   /* 0x007b220c */
extern float g_79491c;   /* 0x0079491c */
extern float g_79493c;   /* 0x0079493c */
extern float g_794934;   /* 0x00794934 */
extern int   g_7f268c;   /* 0x007f268c */
extern float g_794938;   /* 0x00794938 */
extern float g_78b950;   /* 0x0078b950 */
extern float g_76d064;   /* 0x0076d064 */

__declspec(naked) void __cdecl FUN_006533d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xcc
        fld     dword ptr [ebp + 0x1c]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 — MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      LAB_6533f0
        mov     dword ptr [ebp + 0x1c], 0x44fa0000
LAB_6533f0:
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi + 0x2cc]
        test    eax, eax
        push    edi
        jnz     LAB_653425
        push    0xc
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      LAB_65341d
        lea     eax, [ebp + 0xb]
        push    eax
        mov     ecx, edi
        call    FUN_00580540
        jmp     LAB_65341f
LAB_65341d:
        xor     edi, edi
LAB_65341f:
        mov     dword ptr [esi + 0x2cc], edi
LAB_653425:
        mov     edi, dword ptr [esi + 0x2cc]
        mov     ecx, dword ptr [edi + 0x4]
        mov     edx, dword ptr [edi]
        push    ecx
        push    edx
        mov     ecx, edi
        mov     dword ptr [ebp + 0x8], edi
        call    FUN_00653b20
        test    byte ptr [ebp + 0x18], 0x2
        jz      LAB_65376a
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [ecx + 0x20]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + 0x78]
        add     eax, 0x78
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
        test    eax, eax
        jz      LAB_65376a
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0x18]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x18]
        jz      LAB_65376a
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        jz      LAB_65376a
        mov     eax, dword ptr [eax + 0x178]
        test    eax, eax
        jz      LAB_65376a
        mov     ecx, dword ptr [eax + 0x384]
        test    ecx, ecx
        jz      LAB_65376a
        mov     eax, dword ptr [ebp + 0xc]
        push    eax
        mov     ebx, ecx
        push    ebx
        push    esi
        call    FUN_00652d90
        add     esp, 0xc
        cmp     al, 0x1
        jnz     LAB_653767
        mov     ecx, dword ptr [ebx + 0x10]
        shr     ecx, 0x13
        /* __emit: test al,cl — MSVC6 swaps operands (emits 84 C1 test cl,al; ref needs 84 C8) */
        __emit 0x84
        __emit 0xC8
        jnz     LAB_653767
        mov     edx, dword ptr [ebx + 0x30]
        cmp     edx, dword ptr [esi + 0x30]
        jz      LAB_653767
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [ecx + 0x20]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + 0x78]
        add     eax, 0x78
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0x80]
        mov     dword ptr [ebp - 0x4], eax
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_794940]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     LAB_653528
        mov     dword ptr [ebp - 0x4], 0x44960000
LAB_653528:
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [ebp + 0x1c]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     LAB_65353b
        mov     ecx, dword ptr [ebp + 0x1c]
        mov     dword ptr [ebp - 0x4], ecx
LAB_65353b:
        lea     edx, [ebp - 0x14]
        push    edx
        mov     ecx, ebx
        call    FUN_005fbb00
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp - 0x34], ecx
        mov     edx, dword ptr [eax + 0x4]
        lea     ecx, [ebp - 0x14]
        mov     dword ptr [ebp - 0x30], edx
        mov     eax, dword ptr [eax + 0x8]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebp - 0x2c], eax
        call    FUN_005fbb00
        mov     edx, dword ptr [eax]
        mov     dword ptr [ebp - 0x28], edx
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [ebp - 0x24], ecx
        mov     edx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [esi]
        lea     ecx, [ebp - 0x70]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebp - 0x20], edx
        call    dword ptr [eax + 0xf0]
        lea     edx, [ebp - 0x28]
        push    edx
        lea     eax, [ebp - 0x34]
        push    eax
        lea     ecx, [ebp - 0x14]
        call    FUN_0040ca10
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [ebp - 0x4]
        fcompp
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     LAB_653767
        mov     ecx, dword ptr [g_794920]
        lea     edx, [ebp - 0x70]
        push    edx
        lea     eax, [ebp - 0x34]
        mov     dword ptr [ebp - 0x4], ecx
        push    eax
        lea     ecx, [ebp - 0x14]
        call    FUN_0041c830
        fld     dword ptr [ebp - 0x4]
        fabs
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x38]
        mov     eax, dword ptr [ebp - 0x38]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x18], eax
        fld     dword ptr [ebp - 0x18]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      LAB_653683
        mov     ecx, dword ptr [ebp - 0x8]
        mov     dword ptr [ebp - 0x18], ecx
        mov     eax, dword ptr [ebp - 0x18]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x8], eax
        fld     dword ptr [ebp - 0x8]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     LAB_653655
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_79491c]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     LAB_653683
        jmp     LAB_653767
LAB_653655:
        fld     dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0xc]
        fpatan
        fabs
        fcomp   dword ptr [ebp - 0x4]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      LAB_653767
        fld     dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x8]
        fpatan
        fcomp   dword ptr [ebp - 0x4]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      LAB_653767
LAB_653683:
        mov     edi, dword ptr [esi + 0x2c8]
        test    edi, edi
        jz      LAB_6536bc
        fld     dword ptr [g_79493c]
        push    0x0
        fadd    dword ptr [edi]
        fstp    qword ptr [ebp - 0x1c]
        call    FUN_00707e70
        fcomp   qword ptr [ebp - 0x1c]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     LAB_6536bc
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x2c8], 0x0
LAB_6536bc:
        mov     eax, dword ptr [esi + 0x2c8]
        test    eax, eax
        jz      LAB_6536cb
        mov     eax, dword ptr [eax + 0x4]
        jmp     LAB_653727
LAB_6536cb:
        lea     edx, [ebp - 0x34]
        push    edx
        lea     eax, [ebp - 0x28]
        push    eax
        push    esi
        lea     ecx, [ebp - 0xb4]
        call    FUN_00684530
        lea     ecx, [ebp - 0xb4]
        call    FUN_006847e0
        push    0x0
        push    ebx
        lea     ecx, [ebp - 0xb4]
        call    FUN_00684840
        push    0x8
        mov     dword ptr [ebp - 0x8], eax
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      LAB_65371c
        push    0x0
        call    FUN_00707e70
        mov     ecx, dword ptr [ebp - 0x8]
        fstp    dword ptr [edi]
        mov     dword ptr [edi + 0x4], ecx
        jmp     LAB_65371e
LAB_65371c:
        xor     edi, edi
LAB_65371e:
        mov     eax, dword ptr [ebp - 0x8]
        mov     dword ptr [esi + 0x2c8], edi
LAB_653727:
        test    eax, eax
        jnz     LAB_653767
        mov     eax, dword ptr [esi + 0x3d4]
        test    eax, eax
        jnz     LAB_65373f
        mov     eax, dword ptr [ebx + 0x30]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_65373f:
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x4]
        cmp     eax, dword ptr [ecx + 0x8]
        mov     dword ptr [ebp - 0x18], ebx
        jz      LAB_65375b
        test    eax, eax
        jz      LAB_653753
        mov     dword ptr [eax], ebx
LAB_653753:
        add     eax, 0x4
        mov     dword ptr [ecx + 0x4], eax
        jmp     LAB_653767
LAB_65375b:
        push    0x1
        lea     edx, [ebp - 0x18]
        push    edx
        push    eax
        call    FUN_00580760
LAB_653767:
        mov     edi, dword ptr [ebp + 0x8]
LAB_65376a:
        mov     eax, dword ptr [esi + 0x3d4]
        test    eax, eax
        jnz     LAB_65378c
        mov     eax, dword ptr [edi + 0x4]
        sub     eax, dword ptr [edi]
        test    eax, 0xfffffffc
        jnz     LAB_65378c
        pop     edi
        pop     esi
        mov     eax, 0xfffffffe
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_65378c:
        test    byte ptr [ebp + 0x18], 0x1
        jz      LAB_653890
        mov     ebx, dword ptr [esi + 0x2fc]
        test    ebx, ebx
        jz      LAB_653890
        push    0x0
        call    FUN_00707e70
        fsub    dword ptr [g_794934]
        fld     dword ptr [ebx + 0x1d8]
        fcompp
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     LAB_653890
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [g_7dab40]
        mov     eax, dword ptr [ecx]
        xor     eax, edx
        mov     edx, dword ptr [eax + 0x10]
        xor     edx, 0x85739531
        jz      LAB_653890
        mov     ecx, dword ptr [ebx + 0x1d4]
        cmp     ecx, -0x1
        jz      LAB_653890
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     edi, eax
        test    edi, edi
        jz      LAB_65388d
        mov     eax, dword ptr [edi + 0x10]
        shr     eax, 0x13
        and     al, 0x1
        cmp     al, 0x1
        jz      LAB_65388d
        mov     ebx, dword ptr [ebx + 0x170]
        cmp     edi, ebx
        jz      LAB_65388d
        test    ebx, ebx
        jz      LAB_653851
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x60]
        mov     edx, eax
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x18], edx
        call    dword ptr [eax + 0x60]
        mov     ecx, dword ptr [ebp - 0x18]
        cmp     ecx, eax
        jnz     LAB_653851
        mov     ecx, dword ptr [esi + 0x2fc]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0xc8]
        cmp     al, 0x1
        jz      LAB_65388d
LAB_653851:
        cmp     edi, esi
        jz      LAB_65388d
        mov     eax, dword ptr [g_7f268c]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     LAB_65388d
        mov     eax, dword ptr [edi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     LAB_65388d
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        push    edi
        push    esi
        call    FUN_00652d90
        add     esp, 0xc
        cmp     al, 0x1
        jnz     LAB_65388d
        mov     eax, dword ptr [edi + 0x30]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_65388d:
        mov     edi, dword ptr [ebp + 0x8]
LAB_653890:
        test    byte ptr [ebp + 0x18], 0x4
        jz      LAB_6538a2
        push    edi
        push    esi
        call    FUN_00652fb0
        add     esp, 0x8
        jmp     LAB_65391d
LAB_6538a2:
        mov     ecx, dword ptr [esi + 0x3d4]
        mov     edx, dword ptr [ecx + 0x17c]
        push    edi
        push    edx
        call    FUN_005b9560
        push    eax
        push    esi
        call    FUN_006531c0
        mov     al, byte ptr [ebp + 0x10]
        add     esp, 0x10
        test    al, 0x40
        jz      LAB_65391d
        mov     edi, dword ptr [esi + 0x3d4]
        mov     ecx, edi
        call    FUN_005ba2c0
        fstp    qword ptr [ebp - 0x3c]
        call    FUN_00415020
        fstp    qword ptr [ebp - 0x1c]
        push    0x0
        call    FUN_00707e70
        fadd    qword ptr [ebp - 0x1c]
        fadd    dword ptr [g_794938]
        fcomp   qword ptr [ebp - 0x3c]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     LAB_6538ff
        mov     ecx, edi
        call    FUN_005b9cc0
LAB_6538ff:
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [edi + 0x180]
        push    eax
        push    ecx
        add     edi, 0x254
        push    edi
        push    esi
        call    FUN_006531c0
        mov     edi, dword ptr [ebp + 0x8]
        add     esp, 0x10
LAB_65391d:
        mov     ecx, dword ptr [edi + 0x4]
        mov     edi, dword ptr [edi]
        mov     edx, ecx
        sub     edx, edi
        test    edx, 0xfffffffc
        jnz     LAB_65393a
        pop     edi
        pop     esi
        mov     eax, 0xfffffffe
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_65393a:
        fld     dword ptr [ebp + 0x1c]
        mov     eax, dword ptr [esi + 0xd8]
        fmul    dword ptr [ebp + 0x1c]
        mov     ebx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        cmp     edi, ecx
        mov     eax, dword ptr [eax + 0x2c]
        fstp    dword ptr [ebp - 0x18]
        mov     edx, ecx
        mov     dword ptr [ebp + 0x1c], 0x0
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [ebp - 0x40], ebx
        mov     dword ptr [ebp - 0x38], eax
        jz      LAB_653ae9
LAB_653971:
        mov     eax, dword ptr [ebp + 0x20]
        test    eax, eax
        jz      LAB_653985
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [ecx + 0x30]
        cmp     edx, dword ptr [eax]
        jz      LAB_653ad5
LAB_653985:
        test    byte ptr [ebp + 0x18], 0x8
        jz      LAB_653a00
        mov     ecx, dword ptr [edi]
        lea     eax, [ebp - 0xcc]
        push    eax
        call    FUN_005fbb00
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp - 0x34], ecx
        mov     edx, dword ptr [eax + 0x4]
        lea     ecx, [ebp - 0xc0]
        mov     dword ptr [ebp - 0x30], edx
        mov     eax, dword ptr [eax + 0x8]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebp - 0x2c], eax
        call    FUN_005fbb00
        mov     edx, dword ptr [eax]
        mov     dword ptr [ebp - 0x14], edx
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [ebp - 0x10], ecx
        mov     edx, dword ptr [eax + 0x8]
        lea     eax, [ebp - 0x34]
        push    eax
        lea     ecx, [ebp - 0x14]
        push    ecx
        push    esi
        lea     ecx, [ebp - 0xb4]
        mov     dword ptr [ebp - 0xc], edx
        call    FUN_00684530
        lea     ecx, [ebp - 0xb4]
        call    FUN_006847e0
        mov     edx, dword ptr [edi]
        push    0x0
        push    edx
        lea     ecx, [ebp - 0xb4]
        call    FUN_00684840
        test    eax, eax
        jnz     LAB_653ad5
LAB_653a00:
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [edi]
        push    eax
        push    ecx
        push    edx
        push    esi
        call    FUN_00652f70
        add     esp, 0x10
        cmp     al, 0x1
        jnz     LAB_653ad5
        mov     eax, dword ptr [edi]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x28], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [esi + 0x2fc]
        test    ecx, ecx
        mov     dword ptr [ebp - 0x24], edx
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0x20], eax
        jz      LAB_653a63
        mov     edx, dword ptr [ecx]
        lea     eax, [ebp - 0x28]
        push    eax
        call    dword ptr [edx + 0x13c]
        fcom    dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      LAB_653a7d
        fstp    st(0)
LAB_653a63:
        fld     dword ptr [ebp - 0x40]
        fsub    dword ptr [ebp - 0x28]
        fld     dword ptr [ebp - 0x38]
        fsub    dword ptr [ebp - 0x20]
        fld     st(0)
        fmul    st(0), st(1)
        __emit 0xD9   /* __emit: fld st(2) — MSVC6 rejects fld st(n>0) register form */
        __emit 0xC2
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        __emit 0xDD   /* __emit: fstp st(2) — MSVC6 rejects fstp st(n>0) register form */
        __emit 0xDA
        fstp    st(0)
LAB_653a7d:
        fcomp   dword ptr [ebp - 0x18]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      LAB_653ad5
        mov     ebx, dword ptr [edi]
        mov     ecx, ebx
        call    FUN_005fb8e0
        fcomp   dword ptr [g_78b950]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      LAB_653aad
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    ebx
        push    esi
        call    FUN_00652780
        add     esp, 0xc
        jmp     LAB_653ab4
LAB_653aad:
        mov     ecx, ebx
        call    FUN_005fb8e0
LAB_653ab4:
        fcom    dword ptr [ebp + 0x1c]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     LAB_653ad3
        fcom    dword ptr [g_76d064]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jnz     LAB_653afd
        fstp    dword ptr [ebp + 0x1c]
        mov     dword ptr [ebp - 0x8], edi
        jmp     LAB_653ad5
LAB_653ad3:
        fstp    st(0)
LAB_653ad5:
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x4]
        add     edi, 0x4
        cmp     edi, eax
        jnz     LAB_653971
        mov     edx, dword ptr [ebp - 0x8]
LAB_653ae9:
        mov     ecx, dword ptr [ebp + 0x8]
        cmp     edx, dword ptr [ecx + 0x4]
        jnz     LAB_653b0b
        pop     edi
        pop     esi
        mov     eax, 0xfffffffe
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_653afd:
        mov     eax, dword ptr [edi]
        fstp    st(0)
        mov     eax, dword ptr [eax + 0x30]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_653b0b:
        mov     edx, dword ptr [edx]
        mov     eax, dword ptr [edx + 0x30]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
