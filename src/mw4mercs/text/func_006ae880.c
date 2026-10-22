/*
 * FUN_006ae880 (1890 B) — __thiscall (ECX = this), RET 8 (2 stack args).
 *
 * Large geometry/collision routine with heavy FPU math (ray/plane
 * intersection, distance checks) and several list-insertion blocks.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void *p);
extern void __cdecl FUN_00587830(void *p, void *q, void *r);
extern void __cdecl FUN_005d6fa0(void *p);
extern void __cdecl FUN_005d6fc0(void *p);
extern void __cdecl FUN_0040c410(void *p, void *q);
extern void __cdecl FUN_006aeff0(void *p, void *q);
extern void __cdecl FUN_0040ccd0(void *p);
extern void __cdecl FUN_0040c9c0(void *p, void *q, void *r);
extern void __cdecl FUN_0040c5d0(void *p, void *q);
extern void __cdecl FUN_0040ca10(void *p, void *q, void *r);
extern void __cdecl FUN_00686640(void *p, void *q, void *r, void *s);
extern void __cdecl FUN_0041c540(void *p, void *q, void *r);
extern void __cdecl FUN_00687ca0(void *p, void *q);
extern void __cdecl FUN_00687ae0(void *p, void *q, void *r, void *s);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00687c70(void *p, void *q);

extern int   g_7f2464;   /* 0x007f2464 */
extern float g_76d064;   /* 0x0076d064 */
extern float g_76d978;   /* 0x0076d978 */
extern float g_76c5b0;   /* 0x0076c5b0 */
extern float g_798ed8;   /* 0x00798ed8 */
extern double g_76d968;  /* 0x0076d968 */
extern int   g_7b220c;   /* 0x007b220c */

__declspec(naked) void __cdecl FUN_006ae880(void)
{
    __asm {
        sub     esp, 0x84
        mov     eax, dword ptr [g_7f2464]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        mov     eax, dword ptr [esp + 0x98]
        mov     edi, dword ptr [eax + 0x4]
        mov     ebp, dword ptr [eax]
        mov     ecx, dword ptr [edi + 0x14]
        mov     eax, dword ptr [edi + 0x18]
        sub     eax, ecx
        sar     eax, 0x2
        xor     ecx, ecx
        test    eax, eax
        mov     dword ptr [esp + 0x4c], ebp
        jle     LAB_6ae8c7
        mov     edx, dword ptr [edi + 0x14]
LAB_6ae8bb:
        cmp     dword ptr [edx], ebp
        jz      LAB_6ae92d
        inc     ecx
        add     edx, 0x4
        cmp     ecx, eax
        jl      LAB_6ae8bb
LAB_6ae8c7:
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x88]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_005d6fa0
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_005d6fc0
LAB_6ae8f6:
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x74]
        call    FUN_0040c410
        mov     ecx, dword ptr [ebp + 0x4]
        cmp     ecx, edi
        jnz     LAB_6ae90e
        mov     ecx, dword ptr [ebp + 0x8]
LAB_6ae90e:
        mov     eax, dword ptr [ecx + 0x18]
        mov     ebx, dword ptr [ecx + 0x14]
        sub     eax, ebx
        sar     eax, 0x2
        xor     edx, edx
        test    eax, eax
        jle     LAB_6ae953
LAB_6ae91f:
        cmp     dword ptr [ebx], ebp
        jz      LAB_6ae946
        inc     edx
        add     ebx, 0x4
        cmp     edx, eax
        jl      LAB_6ae91f
        jmp     LAB_6ae953
LAB_6ae92d:
        push    ecx
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, edi
        call    FUN_006aeff0
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_0040ccd0
        jmp     LAB_6ae8f6
LAB_6ae946:
        push    edx
        lea     eax, [esp + 0x38]
        push    eax
        call    FUN_006aeff0
        jmp     LAB_6ae97c
LAB_6ae953:
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x1c]
        call    FUN_0040c9c0
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x80]
        call    FUN_005d6fa0
LAB_6ae97c:
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_005d6fc0
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x5c]
        call    FUN_0040c410
        lea     eax, [edi + 0x8]
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     ecx, [esp + 0x68]
        call    FUN_0040c410
        mov     ebx, dword ptr [esp + 0x9c]
        push    ebx
        lea     edx, [esp + 0x68]
        push    edx
        lea     ecx, [esp + 0x90]
        mov     dword ptr [esp + 0x70], 0x0
        mov     dword ptr [esp + 0x64], 0x0
        mov     dword ptr [esp + 0x7c], 0x0
        call    FUN_0040ca10
        fld     dword ptr [edi + 0x48]
        fld     dword ptr [esp + 0x58]
        fcomp   dword ptr [ebx]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      LAB_6ae9fa
        mov     dword ptr [esp + 0x30], 0x47c35000
        jmp     LAB_6aea0d
LAB_6ae9fa:
        fld     dword ptr [esp + 0x60]
        fsub    dword ptr [ebx + 0x8]
        fld     dword ptr [esp + 0x58]
        fsub    dword ptr [ebx]
        fdivp   st(1), st(0)
        fstp    dword ptr [esp + 0x30]
LAB_6aea0d:
        fld     dword ptr [esp + 0x30]
        fmul    dword ptr [esp + 0x58]
        fsubr   dword ptr [esp + 0x60]
        fst     dword ptr [esp + 0x54]
        fsub    dword ptr [esp + 0x6c]
        fld     dword ptr [esp + 0x30]
        fmul    dword ptr [esp + 0x30]
        fadd    dword ptr [g_76d064]
        fstp    dword ptr [esp + 0x1c]
        fld     st(0)
        fmul    dword ptr [esp + 0x30]
        fadd    st(0), st(0)
        fld     dword ptr [esp + 0x64]
        fadd    st(0), st(0)
        fsubp   st(1), st(0)
        fst     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        fld     st(1)
        fmul    st(0), st(2)
        fsub    st(0), st(3)
        fld     dword ptr [esp + 0x64]
        fmul    dword ptr [esp + 0x64]
        faddp   st(1), st(0)
        fmul    dword ptr [esp + 0x1c]
        fmul    dword ptr [g_76d978]
        fsubp   st(1), st(0)
        __emit 0xDD   /* __emit: fstp st(2) — MSVC6 rejects fstp st(n>0) register form */
        __emit 0xDA
        fstp    st(0)
        fcom    dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      LAB_6aebee
        mov     eax, dword ptr [esp + 0x98]
        fstp    st(0)
        mov     edi, dword ptr [eax + 0x8]
        push    edi
        lea     ecx, [esp + 0x5c]
        push    ecx
        mov     ecx, dword ptr [esi + 0x34]
        push    ebx
        lea     edx, [esp + 0x40]
        push    edx
        call    FUN_00686640
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        mov     eax, dword ptr [g_7b220c]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        mov     dword ptr [esp + 0x30], 0xbf800000
        mov     dword ptr [esp + 0x34], 0xbf800000
        mov     dword ptr [esp + 0x38], 0xbf800000
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     LAB_6aeb37
        mov     ebp, dword ptr [ebp]
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0040c410
        mov     ebx, dword ptr [esi + 0x54]
        mov     eax, dword ptr [esi + 0x58]
        cmp     ebx, eax
        mov     dword ptr [esp + 0x48], ebp
        lea     ebp, [esi + 0x50]
        mov     dword ptr [esp + 0x40], edi
        mov     byte ptr [esp + 0x44], 0x0
        jz      LAB_6aeb1d
        test    ebx, ebx
        jz      LAB_6aeb15
        lea     ecx, [esp + 0x34]
        push    ecx
        mov     ecx, ebx
        call    FUN_00687ca0
LAB_6aeb15:
        add     ebx, 0x18
        mov     dword ptr [ebp + 0x4], ebx
        jmp     LAB_6aeb2c
LAB_6aeb1d:
        push    0x1
        lea     edx, [esp + 0x38]
        push    edx
        push    ebx
        mov     ecx, ebp
        call    FUN_00687ae0
LAB_6aeb2c:
        mov     ebx, dword ptr [esp + 0x9c]
        mov     ebp, dword ptr [esp + 0x4c]
LAB_6aeb37:
        push    edi
        lea     eax, [esp + 0x74]
        push    eax
        push    ebx
        lea     ecx, [esp + 0x40]
        push    ecx
        mov     ecx, dword ptr [esi + 0x34]
        call    FUN_00686640
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x30]
        call    FUN_0040c9c0
        mov     edx, dword ptr [g_7b220c]
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     LAB_6aebe4
        mov     ebp, dword ptr [ebp]
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_0040c410
        mov     eax, dword ptr [esi + 0x58]
        add     esi, 0x50
        mov     dword ptr [esp + 0x40], edi
        mov     edi, dword ptr [esi + 0x4]
        cmp     edi, eax
        mov     byte ptr [esp + 0x44], 0x0
        mov     dword ptr [esp + 0x48], ebp
        jz      LAB_6aebd5
        test    edi, edi
        jz      LAB_6aebc5
        lea     eax, [esp + 0x34]
        push    eax
        mov     ecx, edi
        call    FUN_00687ca0
LAB_6aebc5:
        add     edi, 0x18
        lea     edx, [esp + 0x10]
        mov     dword ptr [esi + 0x4], edi
        push    edx
        jmp     LAB_6aefc9
LAB_6aebd5:
        push    0x1
        lea     ecx, [esp + 0x38]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_00687ae0
LAB_6aebe4:
        lea     edx, [esp + 0x10]
        push    edx
        jmp     LAB_6aefc9
LAB_6aebee:
        fsqrt
        fld     dword ptr [esp + 0x1c]
        fadd    st(0), st(0)
        fld     st(1)
        fsub    dword ptr [esp + 0x20]
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x20]
        fchs
        fsub    st(0), st(2)
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0x20]
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [esp + 0x58]
        fcomp   dword ptr [ebx]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      LAB_6aec3b
        fld     dword ptr [esp + 0x50]
        fsub    dword ptr [ebx]
        fmul    dword ptr [g_798ed8]
        fld     dword ptr [esp + 0x20]
        fsub    dword ptr [ebx]
        fmul    dword ptr [g_798ed8]
        jmp     LAB_6aec59
LAB_6aec3b:
        fld     dword ptr [esp + 0x58]
        fsub    dword ptr [ebx]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x50]
        fsub    dword ptr [ebx]
        fdiv    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x20]
        fsub    dword ptr [ebx]
        fdiv    dword ptr [esp + 0x1c]
LAB_6aec59:
        fstp    dword ptr [esp + 0x1c]
        fcom    dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     LAB_6aed60
        fcomp   qword ptr [g_76d968]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      LAB_6aed62
        mov     ecx, dword ptr [esp + 0x98]
        fld     dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0x30]
        mov     edi, dword ptr [ecx + 0x8]
        mov     eax, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [esi + 0x34]
        fadd    dword ptr [esp + 0x54]
        push    edi
        lea     edx, [esp + 0x14]
        push    edx
        mov     dword ptr [esp + 0x18], eax
        push    ebx
        lea     eax, [esp + 0x40]
        fstp    dword ptr [esp + 0x24]
        push    eax
        mov     dword ptr [esp + 0x24], 0x0
        call    FUN_00686640
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x30]
        call    FUN_0040c9c0
        mov     ecx, dword ptr [g_7b220c]
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     LAB_6aed56
        mov     ebp, dword ptr [ebp]
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_0040c410
        mov     eax, dword ptr [esi + 0x58]
        add     esi, 0x50
        mov     dword ptr [esp + 0x40], edi
        mov     edi, dword ptr [esi + 0x4]
        cmp     edi, eax
        mov     byte ptr [esp + 0x44], 0x0
        mov     dword ptr [esp + 0x48], ebp
        jz      LAB_6aed47
        test    edi, edi
        jz      LAB_6aed37
        lea     edx, [esp + 0x34]
        push    edx
        mov     ecx, edi
        call    FUN_00687ca0
LAB_6aed37:
        add     edi, 0x18
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esi + 0x4], edi
        push    ecx
        jmp     LAB_6aefc9
LAB_6aed47:
        push    0x1
        lea     eax, [esp + 0x38]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_00687ae0
LAB_6aed56:
        lea     ecx, [esp + 0x10]
        push    ecx
        jmp     LAB_6aefc9
LAB_6aed60:
        fstp    st(0)
LAB_6aed62:
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     LAB_6aee6a
        fld     dword ptr [esp + 0x1c]
        fcomp   qword ptr [g_76d968]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      LAB_6aee6a
        mov     eax, dword ptr [esp + 0x98]
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x30]
        mov     edi, dword ptr [eax + 0x8]
        mov     edx, dword ptr [esp + 0x20]
        push    edi
        fadd    dword ptr [esp + 0x58]
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [esi + 0x34]
        mov     dword ptr [esp + 0x18], edx
        push    ebx
        lea     edx, [esp + 0x40]
        fstp    dword ptr [esp + 0x24]
        push    edx
        mov     dword ptr [esp + 0x24], 0x0
        call    FUN_00686640
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        mov     eax, dword ptr [g_7b220c]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        mov     dword ptr [esp + 0x30], 0xbf800000
        mov     dword ptr [esp + 0x34], 0xbf800000
        mov     dword ptr [esp + 0x38], 0xbf800000
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     LAB_6aee61
        mov     ebp, dword ptr [ebp]
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0040c410
        mov     eax, dword ptr [esi + 0x58]
        add     esi, 0x50
        mov     dword ptr [esp + 0x40], edi
        mov     edi, dword ptr [esi + 0x4]
        cmp     edi, eax
        mov     byte ptr [esp + 0x44], 0x0
        mov     dword ptr [esp + 0x48], ebp
        jz      LAB_6aee52
        test    edi, edi
        jz      LAB_6aee43
        lea     ecx, [esp + 0x34]
        push    ecx
        mov     ecx, edi
        call    FUN_00687ca0
LAB_6aee43:
        add     edi, 0x18
        mov     dword ptr [esi + 0x4], edi
        lea     eax, [esp + 0x10]
        jmp     LAB_6aefc8
LAB_6aee52:
        push    0x1
        lea     edx, [esp + 0x38]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_00687ae0
LAB_6aee61:
        lea     eax, [esp + 0x10]
        jmp     LAB_6aefc8
LAB_6aee6a:
        mov     ecx, dword ptr [esp + 0x98]
        mov     edi, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [esi + 0x34]
        push    edi
        lea     edx, [esp + 0x5c]
        push    edx
        push    ebx
        lea     eax, [esp + 0x40]
        push    eax
        call    FUN_00686640
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x30]
        call    FUN_0040c9c0
        mov     ecx, dword ptr [g_7b220c]
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     LAB_6aef22
        mov     ebp, dword ptr [ebp]
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_0040c410
        mov     ebx, dword ptr [esi + 0x54]
        mov     eax, dword ptr [esi + 0x58]
        cmp     ebx, eax
        mov     dword ptr [esp + 0x48], ebp
        lea     ebp, [esi + 0x50]
        mov     dword ptr [esp + 0x40], edi
        mov     byte ptr [esp + 0x44], 0x0
        jz      LAB_6aef08
        lea     edx, [esp + 0x34]
        push    edx
        push    ebx
        call    FUN_00687c70
        add     esp, 0x8
        add     ebx, 0x18
        mov     dword ptr [ebp + 0x4], ebx
        jmp     LAB_6aef17
LAB_6aef08:
        push    0x1
        lea     eax, [esp + 0x38]
        push    eax
        push    ebx
        mov     ecx, ebp
        call    FUN_00687ae0
LAB_6aef17:
        mov     ebx, dword ptr [esp + 0x9c]
        mov     ebp, dword ptr [esp + 0x4c]
LAB_6aef22:
        push    edi
        lea     ecx, [esp + 0x74]
        push    ecx
        mov     ecx, dword ptr [esi + 0x34]
        push    ebx
        lea     edx, [esp + 0x40]
        push    edx
        call    FUN_00686640
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x30]
        call    FUN_0040c9c0
        mov     eax, dword ptr [g_7b220c]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     LAB_6aefc4
        mov     ebp, dword ptr [ebp]
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0040c410
        mov     eax, dword ptr [esi + 0x58]
        add     esi, 0x50
        mov     dword ptr [esp + 0x40], edi
        mov     edi, dword ptr [esi + 0x4]
        cmp     edi, eax
        mov     byte ptr [esp + 0x44], 0x0
        mov     dword ptr [esp + 0x48], ebp
        jz      LAB_6aefb5
        lea     ecx, [esp + 0x34]
        push    ecx
        push    edi
        call    FUN_00687c70
        add     esp, 0x8
        add     edi, 0x18
        mov     dword ptr [esi + 0x4], edi
        jmp     LAB_6aefc4
LAB_6aefb5:
        push    0x1
        lea     edx, [esp + 0x38]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_00687ae0
LAB_6aefc4:
        lea     eax, [esp + 0x10]
LAB_6aefc8:
        push    eax
LAB_6aefc9:
        mov     ecx, ebx
        call    FUN_0040c410
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x84
        ret     8
    }
}
