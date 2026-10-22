/*
 * FUN_00630030 (1951 B) — __cdecl, EBP frame, RET (no stack cleanup).
 *
 * Large switch dispatcher (jump table at 0x006307D0, outside function
 * body) with many cases that set object fields and emit log strings via
 * the IAT printf at 0x0076b424.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00502370(void *p, void *q, void *r, void *s, void *t);

extern void *g_76b424;   /* 0x0076b424 (IAT printf-like) */
extern int   g_7b8d6c;   /* 0x007b8d6c */
extern int   g_7b8d68;   /* 0x007b8d68 */
extern int   g_7b8d70;   /* 0x007b8d70 */
extern int   g_7b8ce0;   /* 0x007b8ce0 */
extern int   g_7b8cd8;   /* 0x007b8cd8 */
extern int   g_7b8cdc;   /* 0x007b8cdc */
extern int   g_7b8ce4;   /* 0x007b8ce4 */
extern int   g_7b8d90;   /* 0x007b8d90 */
extern int   g_7b8d88;   /* 0x007b8d88 */
extern int   g_7b8d8c;   /* 0x007b8d8c */
extern float g_76c5b0;   /* 0x0076c5b0 */
extern float g_7b220c;   /* 0x007b220c */
extern float g_770168;   /* 0x00770168 */
extern float g_76d064;   /* 0x0076d064 */
extern short g_7db0ac;   /* 0x007db0ac */
extern short g_7db0ae;   /* 0x007db0ae */
extern int   g_6307d0;   /* 0x006307d0 (jump table base) */

__declspec(naked) void __cdecl FUN_00630030(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x1c
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0x10]
        push    ebx
        mov     bl, byte ptr [eax]
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        push    eax
        push    edi
        test    bl, bl
        push    esi
        setnz   bl
        call    FUN_00502370
        mov     byte ptr [esp + 0x27], al
        mov     eax, dword ptr [edi + 0x10]
        add     eax, -0x6
        add     esp, 0x14
        cmp     eax, 0x12
        /* __emit: ja LAB_6307c4 — MSVC6 miscomputes forward rel32 after `and esp,0xfffffff8` stack alignment */
        __emit 0x0F
        __emit 0x87
        __emit 0x52
        __emit 0x07
        __emit 0x00
        __emit 0x00
        jmp     dword ptr [eax * 4 + g_6307d0]
LAB_630079:
        test    bl, bl
        jnz     LAB_630097
        mov     eax, dword ptr [edi]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [eax + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
LAB_630097:
        mov     esi, dword ptr [esi + 0x20]
        test    esi, esi
        /* __emit: jge LAB_6307c4 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0x0F
        __emit 0x8D
        __emit 0x22
        __emit 0x07
        __emit 0x00
        __emit 0x00
        mov     edx, dword ptr [ebp + 0x18]
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [eax]
        push    esi
        push    0x78d758
        push    edx
        push    ecx
        call    dword ptr [g_76b424]
        mov     byte ptr [esp + 0x23], 0x0
        mov     al, byte ptr [esp + 0x23]
        add     esp, 0x10
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_6300cb:
        test    bl, bl
        /* __emit: jnz LAB_6307c4 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0x0F
        __emit 0x85
        __emit 0xF1
        __emit 0x06
        __emit 0x00
        __emit 0x00
        mov     eax, dword ptr [g_7b8d6c]
        mov     edx, dword ptr [g_7b8d68]
        mov     ecx, dword ptr [g_7b8d70]
        mov     dword ptr [esp + 0x1c], eax
        lea     eax, [esp + 0x18]
        push    eax
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [edi]
        mov     dword ptr [esp + 0x24], ecx
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
        mov     al, byte ptr [esp + 0x13]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_63010d:
        test    bl, bl
        /* __emit: jnz LAB_6307c4 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0x0F
        __emit 0x85
        __emit 0xAF
        __emit 0x06
        __emit 0x00
        __emit 0x00
        mov     eax, dword ptr [g_7b8d70]
        mov     ecx, dword ptr [g_7b8d68]
        mov     edx, dword ptr [g_7b8d6c]
        mov     dword ptr [esp + 0x20], eax
        lea     eax, [esp + 0x18]
        push    eax
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
        mov     al, byte ptr [esp + 0x13]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_63014f:
        test    bl, bl
        /* __emit: jnz LAB_6307c4 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0x0F
        __emit 0x85
        __emit 0x6D
        __emit 0x06
        __emit 0x00
        __emit 0x00
        mov     eax, dword ptr [g_7b8d70]
        mov     ecx, dword ptr [g_7b8d68]
        mov     edx, dword ptr [g_7b8d6c]
        mov     dword ptr [esp + 0x20], eax
        lea     eax, [esp + 0x18]
        push    eax
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
        mov     al, byte ptr [esp + 0x13]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_630191:
        test    bl, bl
        /* __emit: jnz LAB_6307c4 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0x0F
        __emit 0x85
        __emit 0x2B
        __emit 0x06
        __emit 0x00
        __emit 0x00
        mov     eax, dword ptr [g_7b8d70]
        mov     ecx, dword ptr [g_7b8d68]
        mov     edx, dword ptr [g_7b8d6c]
        mov     dword ptr [esp + 0x20], eax
        lea     eax, [esp + 0x18]
        push    eax
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
        mov     al, byte ptr [esp + 0x13]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_6301d3:
        test    bl, bl
        /* __emit: jnz LAB_6307c4 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0x0F
        __emit 0x85
        __emit 0xE9
        __emit 0x05
        __emit 0x00
        __emit 0x00
        mov     eax, dword ptr [g_7b8ce0]
        mov     ecx, dword ptr [g_7b8cd8]
        mov     edx, dword ptr [g_7b8cdc]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [g_7b8ce4]
        mov     dword ptr [esp + 0x20], eax
        lea     eax, [esp + 0x18]
        push    eax
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [edi]
        mov     dword ptr [esp + 0x28], ecx
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
        mov     al, byte ptr [esp + 0x13]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_63021f:
        test    bl, bl
        jnz     LAB_63023d
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x447a0000
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
LAB_63023d:
        fld     dword ptr [esi + 0x64]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        /* __emit: jz LAB_6307c4 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0x0F
        __emit 0x84
        __emit 0x73
        __emit 0x05
        __emit 0x00
        __emit 0x00
        fld     dword ptr [esi + 0x64]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x78d720
        /* __emit: jmp LAB_630778 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0xE9
        __emit 0x14
        __emit 0x05
        __emit 0x00
        __emit 0x00
LAB_630264:
        test    bl, bl
        jnz     LAB_630282
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x40400000
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
LAB_630282:
        fld     dword ptr [esi + 0x6c]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     LAB_6302cd
        fld     dword ptr [esi + 0x6c]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      LAB_6302cd
        fld     dword ptr [esi + 0x6c]
        fcomp   dword ptr [g_770168]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      LAB_6302cd
        fld     dword ptr [g_76d064]
        mov     al, byte ptr [esp + 0x13]
        fdiv    dword ptr [esi + 0x6c]
        fstp    dword ptr [esi + 0x6c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_6302cd:
        push    0x3fd55555
        push    0x60000000
        mov     dword ptr [esi + 0x6c], 0x3eaaaaab
        push    0x78d6e4
        /* __emit: jmp LAB_630778 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0xE9
        __emit 0x90
        __emit 0x04
        __emit 0x00
        __emit 0x00
LAB_6302e8:
        test    bl, bl
        jnz     LAB_630306
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x40400000
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
LAB_630306:
        fld     dword ptr [esi + 0x70]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     LAB_630351
        fld     dword ptr [esi + 0x70]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      LAB_630351
        fld     dword ptr [esi + 0x70]
        fcomp   dword ptr [g_770168]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      LAB_630351
        fld     dword ptr [g_76d064]
        mov     al, byte ptr [esp + 0x13]
        fdiv    dword ptr [esi + 0x70]
        fstp    dword ptr [esi + 0x70]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_630351:
        push    0x3fd55555
        push    0x60000000
        mov     dword ptr [esi + 0x70], 0x3eaaaaab
        push    0x78d6a4
        /* __emit: jmp LAB_630778 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0xE9
        __emit 0x0C
        __emit 0x04
        __emit 0x00
        __emit 0x00
LAB_63036c:
        test    bl, bl
        jnz     LAB_63038a
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x40400000
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
LAB_63038a:
        fld     dword ptr [esi + 0x68]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     LAB_6303d5
        fld     dword ptr [esi + 0x68]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      LAB_6303d5
        fld     dword ptr [esi + 0x68]
        fcomp   dword ptr [g_770168]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      LAB_6303d5
        fld     dword ptr [g_76d064]
        mov     al, byte ptr [esp + 0x13]
        fdiv    dword ptr [esi + 0x68]
        fstp    dword ptr [esi + 0x68]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_6303d5:
        push    0x3fd55555
        push    0x60000000
        mov     dword ptr [esi + 0x68], 0x3eaaaaab
        push    0x78d664
        /* __emit: jmp LAB_630778 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0xE9
        __emit 0x88
        __emit 0x03
        __emit 0x00
        __emit 0x00
LAB_6303f0:
        test    bl, bl
        jnz     LAB_63040e
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x40400000
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
LAB_63040e:
        fld     dword ptr [esi + 0x98]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     LAB_630468
        fld     dword ptr [esi + 0x98]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      LAB_630468
        fld     dword ptr [esi + 0x98]
        fcomp   dword ptr [g_770168]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      LAB_630468
        fld     dword ptr [g_76d064]
        mov     al, byte ptr [esp + 0x13]
        fdiv    dword ptr [esi + 0x98]
        fstp    dword ptr [esi + 0x98]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_630468:
        push    0x3fd55555
        push    0x60000000
        mov     dword ptr [esi + 0x98], 0x3eaaaaab
        push    0x78d624
        /* __emit: jmp LAB_630778 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0xE9
        __emit 0xF2
        __emit 0x02
        __emit 0x00
        __emit 0x00
LAB_630486:
        test    bl, bl
        jnz     LAB_6304a4
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x40400000
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
LAB_6304a4:
        fld     dword ptr [esi + 0x9c]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     LAB_6304fe
        fld     dword ptr [esi + 0x9c]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      LAB_6304fe
        fld     dword ptr [esi + 0x9c]
        fcomp   dword ptr [g_770168]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      LAB_6304fe
        fld     dword ptr [g_76d064]
        mov     al, byte ptr [esp + 0x13]
        fdiv    dword ptr [esi + 0x9c]
        fstp    dword ptr [esi + 0x9c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_6304fe:
        push    0x3fd55555
        push    0x60000000
        mov     dword ptr [esi + 0x9c], 0x3eaaaaab
        push    0x78d5e4
        /* __emit: jmp LAB_630778 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0xE9
        __emit 0x5C
        __emit 0x02
        __emit 0x00
        __emit 0x00
LAB_63051c:
        test    bl, bl
        jnz     LAB_63053a
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x40400000
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
LAB_63053a:
        fld     dword ptr [esi + 0x94]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     LAB_630594
        fld     dword ptr [esi + 0x94]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      LAB_630594
        fld     dword ptr [esi + 0x94]
        fcomp   dword ptr [g_770168]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      LAB_630594
        fld     dword ptr [g_76d064]
        mov     al, byte ptr [esp + 0x13]
        fdiv    dword ptr [esi + 0x94]
        fstp    dword ptr [esi + 0x94]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_630594:
        push    0x3fd55555
        push    0x60000000
        mov     dword ptr [esi + 0x94], 0x3eaaaaab
        push    0x78d5a4
        /* __emit: jmp LAB_630778 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0xE9
        __emit 0xC6
        __emit 0x01
        __emit 0x00
        __emit 0x00
LAB_6305b2:
        test    bl, bl
        jnz     LAB_6305d0
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
LAB_6305d0:
        fld     dword ptr [esi + 0x74]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        /* __emit: jz LAB_6307c4 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0x0F
        __emit 0x84
        __emit 0xE0
        __emit 0x01
        __emit 0x00
        __emit 0x00
        fld     dword ptr [esi + 0x74]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x78d56c
        /* __emit: jmp LAB_630778 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0xE9
        __emit 0x81
        __emit 0x01
        __emit 0x00
        __emit 0x00
LAB_6305f7:
        test    bl, bl
        jnz     LAB_63062a
        mov     eax, dword ptr [g_7b8d90]
        mov     ecx, dword ptr [g_7b8d88]
        mov     edx, dword ptr [g_7b8d8c]
        mov     dword ptr [esp + 0x20], eax
        lea     eax, [esp + 0x18]
        push    eax
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
LAB_63062a:
        fld     dword ptr [esi + 0x78]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     LAB_630661
        fld     dword ptr [esi + 0x7c]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     LAB_630661
        fld     dword ptr [esi + 0x80]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        /* __emit: jz LAB_6307c4 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0x0F
        __emit 0x84
        __emit 0x63
        __emit 0x01
        __emit 0x00
        __emit 0x00
LAB_630661:
        fld     dword ptr [esi + 0x80]
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [esi + 0x7c]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [esi + 0x78]
        fstp    qword ptr [esp]
        push    0x78d52c
        push    ecx
        push    eax
        call    dword ptr [g_76b424]
        mov     al, byte ptr [esp + 0x37]
        add     esp, 0x24
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_6306a3:
        test    bl, bl
        jnz     LAB_6306c1
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
LAB_6306c1:
        fld     dword ptr [esi + 0x84]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        /* __emit: jz LAB_6307c4 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0x0F
        __emit 0x84
        __emit 0xEC
        __emit 0x00
        __emit 0x00
        __emit 0x00
        fld     dword ptr [esi + 0x84]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x78d4fc
        /* __emit: jmp LAB_630778 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0xE9
        __emit 0x8A
        __emit 0x00
        __emit 0x00
        __emit 0x00
LAB_6306ee:
        test    bl, bl
        jnz     LAB_63070c
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
LAB_63070c:
        fld     dword ptr [esi + 0x8c]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        /* __emit: jz LAB_6307c4 — MSVC6 miscomputes forward rel32 after stack alignment */
        __emit 0x0F
        __emit 0x84
        __emit 0xA1
        __emit 0x00
        __emit 0x00
        __emit 0x00
        fld     dword ptr [esi + 0x84]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x78d4c4
        /* __emit: jmp short LAB_630778 — MSVC6 miscomputes forward rel8 after stack alignment */
        __emit 0xEB
        __emit 0x42
LAB_630736:
        test    bl, bl
        jnz     LAB_630754
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
LAB_630754:
        fld     dword ptr [esi + 0x90]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: fnstsw ax — no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        /* __emit: jz short LAB_6307c4 — MSVC6 miscomputes forward rel8 after stack alignment */
        __emit 0x74
        __emit 0x5D
        fld     dword ptr [esi + 0x84]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x78d478
LAB_630778:
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        push    ecx
        push    eax
        call    dword ptr [g_76b424]
        mov     al, byte ptr [esp + 0x27]
        add     esp, 0x14
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_630796:
        test    bl, bl
        /* __emit: jnz short LAB_6307c4 �?" MSVC6 miscomputes forward rel8 after stack alignment */
        __emit 0x75
        __emit 0x2A
        mov     cx, word ptr [g_7db0ac]
        mov     dx, word ptr [g_7db0ae]
        mov     eax, dword ptr [edi]
        mov     word ptr [esp + 0x14], cx
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov     ecx, edi
        mov     word ptr [esp + 0x1e], dx
        call    dword ptr [eax + 0x4]
        mov     byte ptr [esp + 0x13], 0x1
LAB_6307c4:
        mov     al, byte ptr [esp + 0x13]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
