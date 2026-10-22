/*
 * FUN_00482d00 (5968 B) - MLR (MidLevelRenderer) geometry/tube build routine.
 * __thiscall, RET 0xC (3 params: flags, index-array ptr, byte flag).
 *
 * Builds tube/geometry vertex data: computes per-vertex inverse-length
 * scale factors, writes 0x20-byte vertex records, dispatches on 3 in-function
 * jump tables (plane-number selection), and packs a 32-bit color/flag word
 * from float comparisons.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void* g_7da718;      /* 0x007da718 ptr-to-ptr */
extern int   g_7da6b4;      /* 0x007da6b4 dword */
extern void* g_7da6cc;      /* 0x007da6cc ptr-to-ptr */
extern int   g_7da6b8;      /* 0x007da6b8 dword */
extern int   g_7da6b0;      /* 0x007da6b0 dword */
extern void* g_7da6c8;      /* 0x007da6c8 ptr-to-ptr */
extern void* g_7da6c0;      /* 0x007da6c0 ptr-to-ptr */
extern void* g_7da6c4;      /* 0x007da6c4 ptr-to-ptr */
extern void* g_7da6bc;      /* 0x007da6bc ptr-to-ptr */
extern void* g_7da71c;      /* 0x007da71c ptr-to-ptr */
extern int   g_7b94a0;      /* 0x007b94a0 dword */
extern float g_7da87c;      /* 0x007da87c float */
extern float g_7da874;      /* 0x007da874 float */
extern float g_7da878;      /* 0x007da878 float */
extern float g_7da870;      /* 0x007da870 float */
extern float g_76c5b0;      /* 0x0076c5b0 float */
extern float g_7b220c;      /* 0x007b220c float */
extern float g_76fb18;      /* 0x0076fb18 float */
extern int   g_7b2408[];    /* 0x007b2408 int array (x8 stride) */
extern int   g_7b2404[];    /* 0x007b2404 int array (x8 stride) */
extern int   g_7b2478[];    /* 0x007b2478 int array (x4 stride) */
extern char  g_76df04[];    /* 0x0076df04 string literal */
extern void __cdecl FUN_006fab90(void);
extern int   g_jt_48445c[]; /* jump table @ 0x48445c */
extern int   g_jt_484474[]; /* jump table @ 0x484474 */
extern int   g_jt_48448c[]; /* jump table @ 0x48448c */

__declspec(naked) unsigned int FUN_00482d00(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x8c
        mov     eax, dword ptr [ecx + 0x9c]
        mov     edx, dword ptr [ebp + 0xc]
        push    ebx
        push    esi
        mov     esi, dword ptr [eax]
        mov     al, byte ptr [ebp + 0x10]
        xor     ebx, ebx
        cmp     al, bl
        push    edi
        mov     dword ptr [ebp - 0x10], ecx
        mov     dword ptr [ebp - 0x50], esi
        mov     dword ptr [ebp - 0x44], ebx
        mov     dword ptr [ebp - 0x1c], ebx
        jz      L2D31
        mov     eax, dword ptr [edx + 0x30]
        jmp     L2D3B
L2D31:
        mov     eax, dword ptr [edx]
        mov     edi, dword ptr [edx + 0x10]
        shl     eax, 0x5
        add     eax, edi
L2D3B:
        mov     dword ptr [ecx + 0x94], eax
        test    byte ptr [ebp + 0x8], 0x3f
        mov     dword ptr [ecx + 0x98], ebx
        jz      L4023
        cmp     esi, ebx
        jle     L4027
        xor     eax, eax
        xor     edx, edx
        cmp     esi, ebx
        mov     dword ptr [ebp - 0x40], ebx
        mov     dword ptr [ebp - 0x54], ebx
        mov     dword ptr [ebp - 0x28], eax
        mov     dword ptr [ebp + 0x8], edx
        jle     L3FF6
        mov     dword ptr [ebp - 0x34], ebx
        jmp     L2D78
L2D76:
        xor     ebx, ebx
L2D78:
        mov     esi, dword ptr [ecx + 0x18]
        add     eax, esi
        test    byte ptr [eax], 0x2
        jz      L3AD2
        mov     cl, byte ptr [eax]
        mov     esi, dword ptr [g_7da718]
        or      cl, 0x1
        mov     byte ptr [eax], cl
        mov     eax, edx
        shl     eax, 0x4
        mov     dword ptr [g_7da6b4], ebx
        mov     ebx, dword ptr [esi]
        mov     dword ptr [ebp - 0x24], eax
        add     eax, ebx
        mov     dword ptr [ebp - 0x14], eax
        mov     eax, dword ptr [g_7da6cc]
        mov     edi, dword ptr [eax]
        lea     esi, [edx*4 + 0]
        lea     ecx, [edx + 0x4]
        mov     dword ptr [ebp - 0x4], esi
        add     esi, edi
        cmp     edx, ecx
        mov     dword ptr [g_7da6b8], 0x3f
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0x18], edx
        jge     L2EAA
L2DD6:
        mov     dword ptr [ebp - 0xc], 0x0
        mov     edi, dword ptr [ebp - 0x14]
        xor     ecx, ecx
        xor     edx, edx
        test    dword ptr [edi], 0x80000000
        setnz   cl
        sub     edx, ecx
        and     edx, 0x8
        xor     ebx, ebx
        test    dword ptr [edi + 0x4], 0x80000000
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x2
        or      edx, ebx
        xor     ebx, ebx
        test    dword ptr [edi + 0x8], 0x80000000
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x10
        or      edx, ebx
        fld     dword ptr [edi + 0xc]
        xor     ebx, ebx
        fcom    dword ptr [edi]
        fnstsw  ax
        test    ah, 0x1
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x4
        or      edx, ebx
        xor     ebx, ebx
        fcom    dword ptr [edi + 0x4]
        fnstsw  ax
        test    ah, 0x1
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x1
        or      edx, ebx
        xor     ebx, ebx
        fcomp   dword ptr [edi + 0x8]
        fnstsw  ax
        test    ah, 0x41
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x20
        or      edx, ebx
        mov     dword ptr [ebp - 0xc], edx
        mov     edx, dword ptr [g_7da6cc]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edi, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [g_7da6b8]
        mov     dword ptr [esi], ecx
        mov     ebx, dword ptr [eax + edi*4]
        lea     ecx, [eax + edi*4]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [ebp - 0x14]
        and     edx, eax
        mov     eax, dword ptr [g_7da6b4]
        add     ecx, 0x10
        or      eax, ebx
        inc     edi
        mov     dword ptr [ebp - 0x14], ecx
        mov     ecx, dword ptr [ebp - 0x8]
        add     esi, 0x4
        cmp     edi, ecx
        mov     dword ptr [g_7da6b8], edx
        mov     dword ptr [g_7da6b4], eax
        mov     dword ptr [ebp - 0x18], edi
        jl      L2DD6
        test    edx, edx
        jz      L2EBA
L2EAA:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [ebp - 0x28]
        add     eax, edx
        jmp     L3ACC
L2EBA:
        test    eax, eax
        jnz     L32A2
        mov     eax, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ebp - 0x28]
        mov     ecx, dword ptr [eax + 0x18]
        mov     bl, byte ptr [ecx + edx*1]
        mov     esi, dword ptr [eax + 0x98]
        add     ecx, edx
        or      bl, 0x1
        mov     byte ptr [ecx], bl
        mov     ecx, dword ptr [g_7da718]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebp + 0x8]
        mov     ebx, dword ptr [eax + 0xa0]
        mov     dword ptr [ebp - 0x18], edx
        lea     edx, [ecx + 0x2]
        inc     ecx
        mov     dword ptr [ebp - 0x8], ecx
        mov     ecx, dword ptr [eax + 0x94]
        shl     esi, 0x5
        add     esi, ecx
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x4], esi
        mov     ecx, dword ptr [ebp - 0x18]
        fld1
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, edi
        shl     eax, 0x4
        fdiv    dword ptr [eax + ecx*1 + 0xc]
        add     eax, ecx
        mov     edx, dword ptr [ebp - 0x4]
        fst     dword ptr [edx + 0xc]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x8]
        fmul    st(0), st(1)
        shl     eax, 0x4
        add     eax, ecx
        fstp    dword ptr [edx + 0x8]
        fstp    st(0)
        fld1
        fdiv    dword ptr [eax + 0xc]
        fst     dword ptr [edx + 0x2c]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x20]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x24]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0xc]
        fmul    st(0), st(1)
        shl     eax, 0x4
        add     eax, ecx
        fstp    dword ptr [edx + 0x28]
        fstp    st(0)
        fld1
        fdiv    dword ptr [eax + 0xc]
        fst     dword ptr [edx + 0x4c]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x40]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x44]
        fld     dword ptr [eax + 0x8]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x48]
        fstp    st(0)
        fld     dword ptr [g_7da87c]
        fmul    dword ptr [esi]
        mov     eax, dword ptr [g_7b94a0]
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x30], eax
        fadd    dword ptr [g_7da874]
        mov     dword ptr [esi + 0x50], eax
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebx + eax*8]
        fstp    dword ptr [esi]
        mov     edx, dword ptr [ebx + eax*8 + 0x4]
        fld     dword ptr [g_7da878]
        mov     eax, dword ptr [ebp - 0x8]
        fmul    dword ptr [esi + 0x4]
        mov     dword ptr [esi + 0x18], ecx
        mov     ecx, dword ptr [ebx + eax*8]
        mov     dword ptr [esi + 0x1c], edx
        fadd    dword ptr [g_7da870]
        mov     edx, dword ptr [ebx + eax*8 + 0x4]
        mov     eax, dword ptr [ebp - 0xc]
        mov     dword ptr [esi + 0x38], ecx
        fstp    dword ptr [esi + 0x4]
        mov     ecx, dword ptr [ebx + eax*8]
        fld     dword ptr [g_7da87c]
        mov     dword ptr [esi + 0x3c], edx
        fmul    dword ptr [esi + 0x20]
        mov     edx, dword ptr [ebx + eax*8 + 0x4]
        mov     eax, dword ptr [ebp - 0x10]
        mov     ebx, dword ptr [ebp - 0x34]
        fadd    dword ptr [g_7da874]
        mov     dword ptr [esi + 0x58], ecx
        mov     ecx, dword ptr [eax + 0x14]
        add     ecx, ebx
        fstp    dword ptr [esi + 0x20]
        mov     dword ptr [esi + 0x5c], edx
        fld     dword ptr [g_7da878]
        mov     dword ptr [ebp - 0x4], ecx
        fmul    dword ptr [esi + 0x24]
        fadd    dword ptr [g_7da870]
        fstp    dword ptr [esi + 0x24]
        fld     dword ptr [g_7da87c]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [g_7da874]
        fstp    dword ptr [esi + 0x40]
        fld     dword ptr [g_7da878]
        fmul    dword ptr [esi + 0x44]
        fadd    dword ptr [g_7da870]
        fstp    dword ptr [esi + 0x44]
        fld     dword ptr [g_76fb18]
        mov     esi, dword ptr [ebp - 0x4]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x5c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x5c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x48], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x5c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x5c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x48]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x48], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x5c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x5c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x48]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x48], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x5c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x5c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x48]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x48], ecx
        mov     esi, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [esi + 0x98]
        mov     ecx, dword ptr [esi + 0x94]
        mov     eax, dword ptr [ebp - 0x48]
        shl     edx, 0x5
        mov     dword ptr [edx + ecx*1 + 0x10], eax
        mov     edx, dword ptr [esi + 0x98]
        mov     ecx, dword ptr [esi + 0x94]
        shl     edx, 0x5
        mov     dword ptr [edx + ecx*1 + 0x30], eax
        mov     edx, dword ptr [esi + 0x98]
        mov     ecx, dword ptr [esi + 0x94]
        shl     edx, 0x5
        mov     dword ptr [edx + ecx*1 + 0x50], eax
        mov     ebx, dword ptr [esi + 0x98]
        mov     edx, dword ptr [esi + 0x94]
        mov     eax, ebx
        shl     eax, 0x5
        mov     edi, dword ptr [eax + edx*1]
        add     eax, edx
        lea     ecx, [ebx + 0x3]
        shl     ecx, 0x5
        mov     dword ptr [ecx + edx*1], edi
        mov     edi, dword ptr [eax + 0x4]
        add     ecx, edx
        mov     dword ptr [ecx + 0x4], edi
        mov     edi, dword ptr [eax + 0x8]
        mov     dword ptr [ecx + 0x8], edi
        mov     edi, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0xc], edi
        mov     edi, dword ptr [eax + 0x10]
        mov     dword ptr [ecx + 0x10], edi
        mov     edi, dword ptr [eax + 0x14]
        mov     dword ptr [ecx + 0x14], edi
        mov     edi, dword ptr [eax + 0x18]
        mov     eax, dword ptr [eax + 0x1c]
        mov     dword ptr [ecx + 0x1c], eax
        mov     dword ptr [ecx + 0x18], edi
        lea     eax, [ebx + 0x2]
        shl     eax, 0x5
        mov     edi, dword ptr [eax + edx*1]
        add     eax, edx
        lea     ecx, [ebx + 0x4]
        shl     ecx, 0x5
        add     ecx, edx
        mov     dword ptr [ecx], edi
        mov     edi, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x4], edi
        mov     edi, dword ptr [eax + 0x8]
        mov     dword ptr [ecx + 0x8], edi
        mov     edi, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0xc], edi
        mov     edi, dword ptr [eax + 0x10]
        mov     dword ptr [ecx + 0x10], edi
        mov     edi, dword ptr [eax + 0x14]
        mov     dword ptr [ecx + 0x14], edi
        mov     edi, dword ptr [eax + 0x18]
        mov     eax, dword ptr [eax + 0x1c]
        mov     dword ptr [ecx + 0x1c], eax
        mov     dword ptr [ecx + 0x18], edi
        mov     ecx, dword ptr [g_7da718]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [ebp + 0x8]
        add     ebx, 0x5
        shl     ebx, 0x5
        mov     dword ptr [ebp - 0xc], eax
        mov     eax, dword ptr [esi + 0xa0]
        add     ecx, 0x3
        add     ebx, edx
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x4], ebx
        mov     ecx, dword ptr [ebp - 0xc]
        fld1
        mov     edi, dword ptr [ebp - 0x8]
        mov     eax, edi
        shl     eax, 0x4
        fdiv    dword ptr [eax + ecx*1 + 0xc]
        add     eax, ecx
        mov     edx, dword ptr [ebp - 0x4]
        fst     dword ptr [edx + 0xc]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x4]
        fmul    dword ptr [eax + 0x8]
        fstp    dword ptr [edx + 0x8]
        fld     dword ptr [g_7da87c]
        fmul    dword ptr [ebx]
        mov     ecx, dword ptr [g_7b94a0]
        mov     eax, dword ptr [ebp - 0x8]
        mov     dword ptr [ebx + 0x10], ecx
        fadd    dword ptr [g_7da874]
        mov     ecx, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [ecx + eax*8]
        mov     eax, dword ptr [ecx + eax*8 + 0x4]
        mov     ecx, dword ptr [esi + 0x98]
        fstp    dword ptr [ebx]
        fld     dword ptr [g_7da878]
        mov     dword ptr [ebx + 0x18], edx
        fmul    dword ptr [ebx + 0x4]
        mov     dword ptr [ebx + 0x1c], eax
        shl     ecx, 0x5
        fadd    dword ptr [g_7da870]
        fstp    dword ptr [ebx + 0x4]
        mov     eax, dword ptr [ebp - 0x48]
        mov     edx, dword ptr [esi + 0x94]
        mov     dword ptr [ecx + edx*1 + 0xb0], eax
        add     dword ptr [esi + 0x98], 0x6
        jmp     L3ACF
L32A2:
        mov     ecx, eax
        shr     ecx, 0x5
        and     cl, 0x1
        cmp     cl, 0x1
        jz      L3ACF
        cmp     dword ptr [eax*4 + g_7b2478], 0x1
        mov     dword ptr [ebp - 0x14], 0x0
        jnz     L3601
        mov     eax, dword ptr [ebp - 0x40]
        fld     dword ptr [ebp - 0x1c]
        mov     edx, dword ptr [ebp - 0x4]
        mov     ebx, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [ebp - 0x24]
        mov     ecx, eax
        shl     ecx, 0x4
        mov     dword ptr [ebp - 0xc], edx
        lea     edx, [ebx + 0x1]
        shl     eax, 0x3
        lea     esi, [ebx*8 + 0]
        mov     dword ptr [ebp - 0x4], edx
        mov     dword ptr [ebp - 0x24], ecx
        mov     dword ptr [ebp - 0x30], eax
        jmp     L32FA
L32F7:
        mov     ebx, dword ptr [ebp + 0x8]
L32FA:
        cmp     edx, dword ptr [ebp - 0x8]
        mov     dword ptr [ebp - 0x1c], edx
        jl      L3305
        mov     dword ptr [ebp - 0x1c], ebx
L3305:
        mov     edx, dword ptr [ebp - 0x30]
        mov     eax, dword ptr [g_7da6cc]
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x18], edx
        mov     edx, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [edx + eax*1]
        test    edx, edx
        mov     ebx, ecx
        mov     dword ptr [g_7da6b0], edx
        jnz     L33DB
        mov     edx, dword ptr [g_7da718]
        mov     eax, edi
        add     eax, dword ptr [edx]
        mov     edx, dword ptr [g_7da6c8]
        add     ecx, dword ptr [edx]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x4], edx
        mov     edx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0x8], edx
        mov     dword ptr [ecx + 0xc], eax
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ecx + 0xa0]
        mov     eax, dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [g_7da6c0]
        add     eax, dword ptr [ecx]
        mov     ecx, dword ptr [edx + esi*1]
        mov     edx, dword ptr [edx + esi*1 + 0x4]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ebp - 0x34]
        mov     dword ptr [eax + 0x4], edx
        mov     eax, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [eax + 0x14]
        mov     edx, dword ptr [g_7da6c4]
        add     eax, ecx
        mov     ecx, dword ptr [ebp - 0x24]
        add     ecx, dword ptr [edx]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x4], edx
        mov     edx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0x8], edx
        mov     edx, dword ptr [ebp - 0x14]
        inc     edx
        mov     dword ptr [ecx + 0xc], eax
        mov     ecx, dword ptr [ebp - 0x30]
        mov     dword ptr [ebp - 0x14], edx
        mov     edx, dword ptr [ebp - 0x18]
        mov     eax, 0x8
        add     edx, eax
        add     ecx, eax
        mov     dword ptr [ebp - 0x18], edx
        mov     edx, dword ptr [g_7da6cc]
        mov     eax, dword ptr [edx]
        mov     edx, dword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 0x30], ecx
        mov     ecx, dword ptr [ebp - 0x24]
        add     ecx, 0x10
        add     ebx, 0x10
        cmp     dword ptr [eax + edx*4], 0x0
        mov     dword ptr [ebp - 0x24], ecx
        jz      L35D5
        jmp     L33E8
L33DB:
        mov     edx, dword ptr [ebp - 0x1c]
        cmp     dword ptr [eax + edx*4], 0x0
        jnz     L35D5
L33E8:
        mov     eax, dword ptr [eax + edx*4]
        mov     ecx, dword ptr [g_7da6b0]
        or      ecx, eax
        xor     eax, eax
        mov     dword ptr [ebp - 0x38], 0x1
        mov     dword ptr [g_7da6b0], ecx
        mov     ecx, dword ptr [ebp - 0x38]
        mov     dword ptr [ebp - 0x2c], eax
L3408:
        test    dword ptr [g_7da6b0], ecx
        jnz     L3420
        shl     ecx, 0x1
        inc     eax
        cmp     eax, 0x6
        jl      L3408
        mov     dword ptr [ebp - 0x2c], eax
        jmp     L34CE
L3420:
        mov     ecx, dword ptr [g_7da718]
        fstp    st(0)
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [ebp - 0x2c], eax
        mov     eax, edx
        mov     edx, dword ptr [ebp - 0x2c]
        shl     eax, 0x4
        add     eax, ecx
        cmp     edx, 0x5
        ja      L34A6
        jmp     dword ptr [edx*4 + g_jt_48445c]
L3443:
        fld     dword ptr [edi + ecx*1 + 0xc]
        fsub    dword ptr [edi + ecx*1 + 0x4]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 0x4]
L3451:
        fld     st(1)
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L34C3
        fstp    st(0)
        fstp    st(0)
L3464:
        fld     dword ptr [g_76c5b0]
        mov     edx, dword ptr [ebp - 0x2c]
        jmp     L34CB
L346F:
        fld     dword ptr [edi + ecx*1 + 0x4]
        fld     dword ptr [eax + 0x4]
        jmp     L3451
L3478:
        fld     dword ptr [edi + ecx*1 + 0xc]
        fsub    dword ptr [edi + ecx*1]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp     L3451
L3486:
        fld     dword ptr [edi + ecx*1]
        fld     dword ptr [eax]
        jmp     L3451
L348D:
        fld     dword ptr [edi + ecx*1 + 0x8]
        fld     dword ptr [eax + 0x8]
        jmp     L3451
L3496:
        fld     dword ptr [edi + ecx*1 + 0xc]
        fsub    dword ptr [edi + ecx*1 + 0x8]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 0x8]
        jmp     L3451
L34A6:
        push    offset g_76df04
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L3464
        int     3
        fld     dword ptr [g_76c5b0]
        mov     edx, dword ptr [ebp - 0x2c]
        jmp     L34CB
L34C3:
        fld     st(1)
        fsub    st(0), st(1)
        fdivp   st(2), st(0)
        fstp    st(0)
L34CB:
        mov     dword ptr [ebp - 0x44], edx
L34CE:
        mov     edx, dword ptr [g_7da718]
        mov     ecx, dword ptr [edx]
        mov     eax, dword ptr [ebp - 0x1c]
        mov     edx, dword ptr [g_7da6c8]
        mov     edx, dword ptr [edx]
        shl     eax, 0x4
        fld     dword ptr [eax + ecx*1]
        add     eax, ecx
        fsub    dword ptr [edi + ecx*1]
        add     edx, ebx
        fmul    st(0), st(1)
        fadd    dword ptr [edi + ecx*1]
        fstp    dword ptr [edx]
        fld     dword ptr [eax + 0x4]
        fsub    dword ptr [edi + ecx*1 + 0x4]
        fmul    st(0), st(1)
        fadd    dword ptr [edi + ecx*1 + 0x4]
        fstp    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x8]
        fsub    dword ptr [edi + ecx*1 + 0x8]
        fmul    st(0), st(1)
        fadd    dword ptr [edi + ecx*1 + 0x8]
        lea     ecx, [edi + ecx*1 + 0xc]
        fstp    dword ptr [edx + 0x8]
        fld     dword ptr [eax + 0xc]
        mov     eax, dword ptr [ebp - 0x44]
        fsub    dword ptr [ecx]
        fmul    st(0), st(1)
        fadd    dword ptr [ecx]
        mov     ecx, dword ptr [eax*8 + g_7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        jz      L353E
        fld     dword ptr [edx + 0xc]
        fsub    dword ptr [g_7b220c]
        jmp     L3544
L353E:
        fld     dword ptr [g_7b220c]
L3544:
        mov     ecx, dword ptr [ebp - 0x44]
        mov     eax, dword ptr [ecx*8 + g_7b2404]
        mov     ecx, dword ptr [ebp - 0x10]
        fstp    dword ptr [edx + eax*4]
        mov     eax, dword ptr [ecx + 0xa0]
        mov     ecx, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [g_7da6c0]
        add     ecx, dword ptr [edx]
        mov     edx, dword ptr [ebp - 0x1c]
        fld     dword ptr [eax + edx*8]
        lea     edx, [esi + eax*1 + 0x4]
        fsub    dword ptr [esi + eax*1]
        mov     dword ptr [ebp - 0x18], edx
        mov     edx, dword ptr [ebp - 0x1c]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + eax*1]
        fstp    dword ptr [ecx]
        fld     dword ptr [eax + edx*8 + 0x4]
        mov     eax, dword ptr [ebp - 0x18]
        fsub    dword ptr [eax]
        fmul    st(0), st(1)
        fadd    dword ptr [eax]
        mov     eax, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [eax + 0x14]
        fstp    dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ebp - 0x34]
        add     eax, ecx
        mov     ecx, dword ptr [g_7da6c4]
        add     ebx, dword ptr [ecx]
        mov     edx, dword ptr [eax]
        mov     ecx, ebx
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x4], edx
        mov     edx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0x8], edx
        mov     edx, dword ptr [ebp - 0x14]
        mov     dword ptr [ecx + 0xc], eax
        mov     ecx, dword ptr [ebp - 0x30]
        mov     eax, dword ptr [ebp - 0x24]
        add     ecx, 0x8
        inc     edx
        add     eax, 0x10
        mov     dword ptr [ebp - 0x30], ecx
        mov     dword ptr [ebp - 0x14], edx
        mov     dword ptr [ebp - 0x24], eax
        mov     ecx, eax
L35D5:
        mov     eax, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ebp - 0x4]
        mov     ebx, dword ptr [ebp - 0x8]
        add     eax, 0x4
        inc     edx
        mov     dword ptr [ebp - 0xc], eax
        lea     eax, [edx + -0x1]
        add     edi, 0x10
        add     esi, 0x8
        cmp     eax, ebx
        mov     dword ptr [ebp - 0x4], edx
        jl      L32F7
        fstp    dword ptr [ebp - 0x1c]
        jmp     L3AA3
L3601:
        mov     edx, dword ptr [g_7da718]
        mov     esi, dword ptr [edx]
        mov     ecx, dword ptr [ebp - 0x24]
        mov     eax, dword ptr [g_7da6cc]
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [ebp + 0x8]
        add     ecx, esi
        mov     dword ptr [ebp - 0x74], ecx
        mov     ecx, dword ptr [ebp - 0x4]
        add     ecx, edx
        mov     dword ptr [ebp - 0x68], ecx
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ecx + 0xa0]
        lea     ecx, [edx + eax*8]
        mov     edx, dword ptr [g_7da71c]
        mov     eax, dword ptr [edx]
        xor     edi, edi
        mov     dword ptr [ebp - 0x6c], ecx
        mov     ecx, dword ptr [edx + 0x10]
        mov     ebx, 0x4
        mov     dword ptr [ebp + 0xffffff74], eax
        mov     eax, dword ptr [edx + 0x18]
        mov     dword ptr [ebp - 0x30], edi
        mov     dword ptr [ebp - 0x60], ebx
        mov     dword ptr [ebp + 0xffffff7c], ecx
        mov     dword ptr [ebp - 0x80], eax
        xor     esi, esi
        mov     dword ptr [ebp - 0x38], 0x1
        mov     dword ptr [ebp - 0x24], ebx
L3668:
        mov     dword ptr [ebp - 0x2c], 0x0
L366F:
        mov     ecx, dword ptr [ebp - 0x38]
        test    dword ptr [g_7da6b4], ecx
        jz      L3956
        test    ebx, ebx
        jle     L390A
        mov     eax, dword ptr [ebp - 0x68]
        mov     ecx, dword ptr [ebp - 0x74]
        mov     edx, dword ptr [ebp - 0x6c]
        mov     dword ptr [ebp - 0x14], eax
        mov     edi, 0x1
        lea     eax, [ecx + 0x8]
        mov     dword ptr [ebp - 0x8], edi
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x18], eax
        jmp     L36A8
L36A5:
        mov     ebx, dword ptr [ebp - 0x60]
L36A8:
        xor     ecx, ecx
        cmp     edi, ebx
        setge   cl
        dec     ecx
        and     ecx, edi
        mov     edi, dword ptr [ebp - 0x38]
        mov     ebx, ecx
        mov     ecx, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ecx]
        __emit 0x85   /* TEST EDI,ECX - MSVC6 swaps operands to 85 F9 */
        __emit 0xCF
        mov     dword ptr [g_7da6b0], ecx
        jnz     L3718
        mov     edi, dword ptr [ebp + 0xffffff74]
        mov     ecx, esi
        shl     ecx, 0x4
        add     ecx, edi
        mov     edi, dword ptr [eax + -0x8]
        mov     dword ptr [ecx], edi
        mov     edi, dword ptr [eax + -0x4]
        mov     dword ptr [ecx + 0x4], edi
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx + 0x8], edi
        mov     edi, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0xc], edi
        mov     ecx, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ecx]
        mov     edi, dword ptr [ebp - 0x80]
        mov     dword ptr [edi + esi*4], ecx
        mov     edi, dword ptr [edx]
        mov     ecx, dword ptr [ebp + 0xffffff7c]
        mov     dword ptr [ecx + esi*8], edi
        mov     edi, dword ptr [edx + 0x4]
        mov     dword ptr [ecx + esi*8 + 0x4], edi
        mov     ecx, dword ptr [ebp - 0x68]
        mov     edi, dword ptr [ebp - 0x38]
        inc     esi
        test    dword ptr [ecx + ebx*4], edi
        jz      L38D7
        jmp     L3724
L3718:
        mov     ecx, dword ptr [ebp - 0x68]
        test    dword ptr [ecx + ebx*4], edi
        jnz     L38D7
L3724:
        mov     ecx, dword ptr [ebp - 0x2c]
        cmp     ecx, 0x5
        ja      L3758
        jmp     dword ptr [ecx*4 + g_jt_484474]
L3733:
        fld     dword ptr [eax + 0x4]
        fsub    dword ptr [eax + -0x4]
        jmp     L375E
L373B:
        fld     dword ptr [eax + -0x4]
        jmp     L375E
L3740:
        fld     dword ptr [eax + 0x4]
        fsub    dword ptr [eax + -0x8]
        jmp     L375E
L3748:
        fld     dword ptr [eax + -0x8]
        jmp     L375E
L374D:
        fld     dword ptr [eax]
        jmp     L375E
L3751:
        fld     dword ptr [eax + 0x4]
        fsub    dword ptr [eax]
        jmp     L375E
L3758:
        fld     dword ptr [g_76c5b0]
L375E:
        mov     edi, dword ptr [ebp - 0x74]
        mov     edx, ebx
        shl     edx, 0x4
        add     edx, edi
        cmp     ecx, 0x5
        ja      L3799
        jmp     dword ptr [ecx*4 + g_jt_48448c]
L3774:
        fld     dword ptr [edx + 0xc]
        fsub    dword ptr [edx + 0x4]
        jmp     L379F
L377C:
        fld     dword ptr [edx + 0x4]
        jmp     L379F
L3781:
        fld     dword ptr [edx + 0xc]
        fsub    dword ptr [edx]
        jmp     L379F
L3788:
        fld     dword ptr [edx]
        jmp     L379F
L378C:
        fld     dword ptr [edx + 0x8]
        jmp     L379F
L3791:
        fld     dword ptr [edx + 0xc]
        fsub    dword ptr [edx + 0x8]
        jmp     L379F
L3799:
        fld     dword ptr [g_76c5b0]
L379F:
        fld     st(1)
        mov     edi, dword ptr [ebp + 0xffffff74]
        fsub    st(0), st(1)
        mov     ecx, esi
        shl     ecx, 0x4
        add     ecx, edi
        fdivr   st(0), st(2)
        fstp    dword ptr [ebp - 0x1c]
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [edx]
        fsub    dword ptr [eax + -0x8]
        fmul    dword ptr [ebp - 0x1c]
        fadd    dword ptr [eax + -0x8]
        fstp    dword ptr [ecx]
        fld     dword ptr [edx + 0x4]
        fsub    dword ptr [eax + -0x4]
        fmul    dword ptr [ebp - 0x1c]
        fadd    dword ptr [eax + -0x4]
        fstp    dword ptr [ecx + 0x4]
        fld     dword ptr [edx + 0x8]
        fsub    dword ptr [eax]
        fmul    dword ptr [ebp - 0x1c]
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx + 0x8]
        fld     dword ptr [edx + 0xc]
        mov     edx, dword ptr [ebp - 0x2c]
        fsub    dword ptr [eax + 0x4]
        fmul    dword ptr [ebp - 0x1c]
        fadd    dword ptr [eax + 0x4]
        mov     eax, dword ptr [edx*8 + g_7b2408]
        test    eax, eax
        fstp    dword ptr [ecx + 0xc]
        jz      L3804
        fld     dword ptr [ecx + 0xc]
        jmp     L380A
L3804:
        fld     dword ptr [g_76c5b0]
L380A:
        mov     eax, dword ptr [ebp - 0x2c]
        mov     edx, dword ptr [eax*8 + g_7b2404]
        mov     eax, dword ptr [ebp - 0xc]
        fstp    dword ptr [ecx + edx*4]
        mov     edx, dword ptr [ebp - 0x6c]
        fld     dword ptr [edx + ebx*8]
        mov     edi, dword ptr [ebp + 0xffffff7c]
        fsub    dword ptr [eax]
        mov     dword ptr [ebp - 0x20], ecx
        mov     dword ptr [ebp - 0x4], 0x0
        fmul    dword ptr [ebp - 0x1c]
        fadd    dword ptr [eax]
        fstp    dword ptr [edi + esi*8]
        fld     dword ptr [edx + ebx*8 + 0x4]
        fsub    dword ptr [eax + 0x4]
        fmul    dword ptr [ebp - 0x1c]
        fadd    dword ptr [eax + 0x4]
        fstp    dword ptr [edi + esi*8 + 0x4]
        mov     edi, dword ptr [ebp - 0x20]
        xor     ecx, ecx
        xor     edx, edx
        test    dword ptr [edi], 0x80000000
        setnz   cl
        sub     edx, ecx
        and     edx, 0x8
        xor     ebx, ebx
        test    dword ptr [edi + 0x4], 0x80000000
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x2
        or      edx, ebx
        xor     ebx, ebx
        test    dword ptr [edi + 0x8], 0x80000000
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x10
        or      edx, ebx
        fld     dword ptr [edi + 0xc]
        xor     ebx, ebx
        fcom    dword ptr [edi]
        fnstsw  ax
        test    ah, 0x1
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x4
        or      edx, ebx
        xor     ebx, ebx
        fcom    dword ptr [edi + 0x4]
        fnstsw  ax
        test    ah, 0x1
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x1
        or      edx, ebx
        xor     ebx, ebx
        fcomp   dword ptr [edi + 0x8]
        fnstsw  ax
        test    ah, 0x41
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x20
        or      edx, ebx
        mov     dword ptr [ebp - 0x4], edx
        mov     eax, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebp - 0x80]
        mov     edx, dword ptr [ebp - 0xc]
        mov     dword ptr [ecx + esi*4], eax
        mov     eax, dword ptr [ebp - 0x18]
        inc     esi
L38D7:
        mov     ecx, dword ptr [ebp - 0x14]
        mov     edi, dword ptr [ebp - 0x8]
        mov     ebx, dword ptr [ebp - 0x60]
        add     ecx, 0x4
        inc     edi
        mov     dword ptr [ebp - 0x14], ecx
        add     eax, 0x10
        add     edx, 0x8
        lea     ecx, [edi + -0x1]
        cmp     ecx, ebx
        mov     dword ptr [ebp - 0x8], edi
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0xc], edx
        jl      L36A5
        mov     edx, dword ptr [g_7da71c]
        mov     edi, dword ptr [ebp - 0x30]
L390A:
        mov     eax, edi
        shl     eax, 0x5
        lea     ecx, [eax + edx*1]
        mov     eax, dword ptr [ecx]
        mov     dword ptr [ebp - 0x74], eax
        mov     eax, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [ecx + 0x18]
        mov     dword ptr [ebp - 0x6c], eax
        xor     eax, eax
        test    edi, edi
        setz    al
        mov     dword ptr [ebp - 0x68], ecx
        mov     ebx, esi
        mov     dword ptr [ebp - 0x60], ebx
        mov     edi, eax
        mov     ecx, edi
        shl     ecx, 0x5
        mov     eax, dword ptr [ecx + edx*1]
        lea     esi, [ecx + edx*1]
        mov     ecx, dword ptr [esi + 0x10]
        mov     dword ptr [ebp + 0xffffff74], eax
        mov     eax, dword ptr [esi + 0x18]
        mov     dword ptr [ebp - 0x30], edi
        mov     dword ptr [ebp + 0xffffff7c], ecx
        mov     dword ptr [ebp - 0x80], eax
        xor     esi, esi
L3956:
        shl     dword ptr [ebp - 0x38], 0x1
        mov     eax, dword ptr [ebp - 0x2c]
        inc     eax
        cmp     eax, 0x6
        mov     dword ptr [ebp - 0x2c], eax
        jl      L366F
        xor     ecx, ecx
        test    ebx, ebx
        jle     L3AA0
        mov     eax, dword ptr [ebp - 0x68]
        mov     dword ptr [ebp - 0x4], ebx
        jmp     L397E
L397B:
        mov     ecx, dword ptr [ebp - 0x8]
L397E:
        or      ecx, dword ptr [eax]
        add     eax, 0x4
        mov     dword ptr [ebp - 0x8], ecx
        dec     dword ptr [ebp - 0x4]
        jnz     L397B
        mov     eax, dword ptr [ebp - 0x8]
        test    eax, eax
        jz      L39BC
        mov     eax, dword ptr [ebp - 0x24]
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     dword ptr [ebp - 0x24], eax
        jnz     L3668
        mov     eax, dword ptr [ebp - 0x8]
        test    eax, eax
        jz      L39BC
        mov     edx, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [edx + 0x18]
        mov     ecx, dword ptr [ebp - 0x28]
        mov     byte ptr [ecx + eax*1], 0x0
        jmp     L3ACF
L39BC:
        test    ebx, ebx
        jle     L3AA0
        mov     edx, dword ptr [ebp - 0x10]
        mov     esi, dword ptr [edx + 0x14]
        mov     edx, dword ptr [ebp - 0x6c]
        mov     eax, dword ptr [g_7da6c4]
        mov     ecx, dword ptr [eax]
        mov     edi, dword ptr [ebp - 0x34]
        mov     eax, dword ptr [ebp - 0x40]
        mov     dword ptr [ebp - 0x14], edx
        mov     edx, dword ptr [g_7da6c0]
        mov     edx, dword ptr [edx]
        add     esi, edi
        mov     edi, eax
        lea     eax, [edx + eax*8]
        mov     edx, dword ptr [ebp - 0x74]
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, dword ptr [g_7da6c8]
        mov     eax, dword ptr [eax]
        shl     edi, 0x4
        mov     dword ptr [ebp - 0x20], ecx
        add     ecx, edi
        lea     edi, [eax + edi*1 + 0x8]
        mov     dword ptr [ebp - 0x8], edi
        mov     edi, eax
        mov     eax, dword ptr [ebp - 0x20]
        add     edx, 0x8
        sub     edi, eax
        mov     dword ptr [ebp - 0x20], edi
        mov     dword ptr [ebp - 0xc], ebx
        jmp     L3A1D
L3A1A:
        mov     edi, dword ptr [ebp - 0x20]
L3A1D:
        fld     dword ptr [edx]
        fcomp   dword ptr [edx + 0x4]
        fnstsw  ax
        test    ah, 0x40
        jz      L3A33
        fld     dword ptr [edx]
        fsub    dword ptr [g_7b220c]
        fstp    dword ptr [edx]
L3A33:
        mov     eax, dword ptr [edx + -0x8]
        mov     dword ptr [edi + ecx*1], eax
        mov     eax, dword ptr [ebp - 0x8]
        mov     edi, dword ptr [edx + -0x4]
        mov     dword ptr [eax + -0x4], edi
        mov     edi, dword ptr [edx]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [edx + 0x4]
        mov     dword ptr [eax + 0x4], edi
        mov     eax, dword ptr [ebp - 0x14]
        mov     edi, dword ptr [eax]
        mov     eax, dword ptr [ebp - 0x4]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [ebp - 0x14]
        mov     edi, dword ptr [edi + 0x4]
        mov     dword ptr [eax + 0x4], edi
        mov     edi, dword ptr [esi]
        mov     dword ptr [ecx], edi
        mov     edi, dword ptr [esi + 0x4]
        mov     dword ptr [ecx + 0x4], edi
        mov     edi, dword ptr [esi + 0x8]
        mov     dword ptr [ecx + 0x8], edi
        mov     edi, dword ptr [esi + 0xc]
        mov     dword ptr [ecx + 0xc], edi
        mov     edi, dword ptr [ebp - 0x8]
        add     edi, 0x10
        add     eax, 0x8
        mov     dword ptr [ebp - 0x8], edi
        mov     edi, dword ptr [ebp - 0x14]
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, dword ptr [ebp - 0xc]
        add     edi, 0x8
        add     ecx, 0x10
        add     edx, 0x10
        dec     eax
        mov     dword ptr [ebp - 0x14], edi
        mov     dword ptr [ebp - 0xc], eax
        jnz     L3A1A
L3AA0:
        mov     dword ptr [ebp - 0x14], ebx
L3AA3:
        mov     ecx, dword ptr [g_7da6bc]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [ebp - 0x54]
        mov     ecx, dword ptr [ebp - 0x14]
        mov     esi, dword ptr [ebp - 0x40]
        mov     dword ptr [edx + eax*4], ecx
        mov     edx, dword ptr [ebp - 0x28]
        add     esi, ecx
        inc     eax
        mov     dword ptr [ebp - 0x54], eax
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [eax + 0x18]
        mov     dword ptr [ebp - 0x40], esi
        lea     eax, [edx + ecx*1]
L3ACC:
        and     byte ptr [eax], 0xfe
L3ACF:
        mov     ecx, dword ptr [ebp - 0x10]
L3AD2:
        mov     eax, dword ptr [ebp - 0x28]
        mov     ebx, dword ptr [ebp - 0x34]
        mov     edx, dword ptr [ebp + 0x8]
        mov     esi, dword ptr [ebp - 0x50]
        inc     eax
        add     ebx, 0x10
        add     edx, 0x4
        cmp     eax, esi
        mov     dword ptr [ebp - 0x28], eax
        mov     dword ptr [ebp - 0x34], ebx
        mov     dword ptr [ebp + 0x8], edx
        jl      L2D76
        mov     esi, dword ptr [ebp - 0x54]
        xor     ebx, ebx
        cmp     esi, ebx
        jle     L3FF6
        xor     eax, eax
        xor     edx, edx
        cmp     esi, ebx
        mov     dword ptr [ebp - 0x28], eax
        mov     dword ptr [ebp + 0x8], edx
        jle     L3FF6
L3B15:
        mov     ecx, dword ptr [g_7da6bc]
        mov     ecx, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + eax*4]
        lea     esi, [ecx + -0x1]
        cmp     esi, 0x1
        mov     dword ptr [ebp - 0x3c], ecx
        mov     dword ptr [ebp - 0x4c], esi
        jle     L3FDD
        lea     ecx, [edx + 0x1]
        lea     esi, [ecx*8 + 0]
        mov     eax, edx
        shl     eax, 0x4
        shl     ecx, 0x4
        mov     dword ptr [ebp - 0x24], eax
        lea     eax, [edx*8 + 0x4]
        mov     dword ptr [ebp - 0x40], ecx
        or      ecx, 0xffffffff
        mov     dword ptr [ebp - 0x2c], eax
        lea     eax, [edx + 0x2]
        sub     ecx, edx
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0x34], esi
        mov     dword ptr [ebp - 0x58], ecx
        jmp     L3B6A
L3B67:
        mov     eax, dword ptr [ebp - 0x8]
L3B6A:
        mov     ecx, dword ptr [g_7da6c0]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [g_7da6c4]
        mov     ebx, dword ptr [ecx]
        mov     dword ptr [ebp - 0x1c], edx
        mov     edx, dword ptr [g_7da6c8]
        mov     ecx, dword ptr [edx]
        lea     edx, [eax + -0x1]
        mov     dword ptr [ebp - 0x5c], eax
        mov     eax, dword ptr [ebp - 0x10]
        mov     esi, dword ptr [eax + 0x98]
        mov     edi, dword ptr [eax + 0x94]
        shl     esi, 0x5
        add     esi, edi
        mov     dword ptr [ebp - 0x44], ebx
        mov     dword ptr [ebp - 0x50], ecx
        mov     dword ptr [ebp - 0x20], edx
        mov     dword ptr [ebp - 0xc], esi
        mov     ecx, dword ptr [ebp - 0x50]
        fld1
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, edi
        shl     eax, 0x4
        fdiv    dword ptr [eax + ecx*1 + 0xc]
        add     eax, ecx
        mov     edx, dword ptr [ebp - 0xc]
        fst     dword ptr [edx + 0xc]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x5c]
        fmul    st(0), st(1)
        shl     eax, 0x4
        add     eax, ecx
        fstp    dword ptr [edx + 0x8]
        fstp    st(0)
        fld1
        fdiv    dword ptr [eax + 0xc]
        fst     dword ptr [edx + 0x2c]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x20]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x24]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x20]
        fmul    st(0), st(1)
        shl     eax, 0x4
        add     eax, ecx
        fstp    dword ptr [edx + 0x28]
        fstp    st(0)
        fld1
        fdiv    dword ptr [eax + 0xc]
        fst     dword ptr [edx + 0x4c]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x40]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x44]
        fld     dword ptr [eax + 0x8]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x48]
        fstp    st(0)
        fld     dword ptr [g_7da87c]
        fmul    dword ptr [esi]
        mov     eax, dword ptr [ebp - 0x24]
        add     ebx, eax
        mov     dword ptr [ebp - 0x20], ebx
        fadd    dword ptr [g_7da874]
        fstp    dword ptr [esi]
        fld     dword ptr [g_7da878]
        fmul    dword ptr [esi + 0x4]
        fadd    dword ptr [g_7da870]
        fstp    dword ptr [esi + 0x4]
        fld     dword ptr [g_7da87c]
        fmul    dword ptr [esi + 0x20]
        fadd    dword ptr [g_7da874]
        fstp    dword ptr [esi + 0x20]
        fld     dword ptr [g_7da878]
        fmul    dword ptr [esi + 0x24]
        fadd    dword ptr [g_7da870]
        fstp    dword ptr [esi + 0x24]
        fld     dword ptr [g_7da87c]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [g_7da874]
        fstp    dword ptr [esi + 0x40]
        fld     dword ptr [g_7da878]
        fmul    dword ptr [esi + 0x44]
        fadd    dword ptr [g_7da870]
        fstp    dword ptr [esi + 0x44]
        fld     dword ptr [g_76fb18]
        mov     esi, dword ptr [ebp - 0x20]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x14]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x14]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x4], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x14]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x14]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x4]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x4], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x14]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x14]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x4]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x4], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x14]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x14]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x4]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x4], ecx
        mov     ecx, dword ptr [ebp - 0x4]
        mov     edx, dword ptr [ebp - 0xc]
        mov     edi, dword ptr [ebp - 0x40]
        mov     eax, dword ptr [ebp - 0x44]
        mov     dword ptr [edx + 0x10], ecx
        lea     ecx, [edi + eax*1 + 0x10]
        mov     dword ptr [ebp - 0x20], ecx
        fld     dword ptr [g_76fb18]
        mov     esi, dword ptr [ebp - 0x20]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x30]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x30]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x18], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x30]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x30]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x18]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x18], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x30]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x30]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x18]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x18], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x30]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x30]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x18]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x18], ecx
        mov     eax, dword ptr [ebp - 0x18]
        mov     ecx, dword ptr [ebp - 0x44]
        mov     dword ptr [edx + 0x30], eax
        lea     eax, [edi + ecx*1]
        mov     dword ptr [ebp - 0x20], eax
        fld     dword ptr [g_76fb18]
        mov     esi, dword ptr [ebp - 0x20]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x38]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x38]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x48], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x38]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x38]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x48]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x48], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x38]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x38]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x48]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x48], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x38]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x38]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x48]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x48], ecx
        mov     eax, dword ptr [ebp - 0x1c]
        mov     ecx, dword ptr [ebp - 0x48]
        mov     dword ptr [edx + 0x50], ecx
        mov     ecx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax + ecx*8]
        mov     dword ptr [edx + 0x18], ecx
        mov     ecx, dword ptr [ebp - 0x2c]
        mov     ecx, dword ptr [eax + ecx*1]
        mov     dword ptr [edx + 0x1c], ecx
        mov     ecx, dword ptr [ebp - 0x34]
        mov     esi, dword ptr [ecx + eax*1 + 0x8]
        mov     dword ptr [edx + 0x38], esi
        mov     esi, dword ptr [ecx + eax*1 + 0xc]
        mov     dword ptr [edx + 0x3c], esi
        mov     esi, dword ptr [ecx + eax*1]
        mov     eax, dword ptr [ecx + eax*1 + 0x4]
        mov     dword ptr [edx + 0x5c], eax
        mov     eax, dword ptr [ebp - 0x10]
        mov     dword ptr [edx + 0x58], esi
        mov     edx, dword ptr [eax + 0x98]
        add     edx, 0x3
        add     ecx, 0x8
        mov     dword ptr [eax + 0x98], edx
        mov     eax, dword ptr [ebp - 0x8]
        add     edi, 0x10
        inc     eax
        mov     dword ptr [ebp - 0x34], ecx
        mov     ecx, dword ptr [ebp - 0x58]
        add     ecx, eax
        mov     dword ptr [ebp - 0x8], eax
        cmp     ecx, dword ptr [ebp - 0x4c]
        mov     dword ptr [ebp - 0x40], edi
        jl      L3B67
        mov     edx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp - 0x3c]
        mov     eax, dword ptr [ebp - 0x28]
L3FDD:
        add     edx, ecx
        mov     ecx, dword ptr [ebp - 0x54]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [ebp + 0x8], edx
        mov     dword ptr [ebp - 0x28], eax
        jl      L3B15
        mov     ecx, dword ptr [ebp - 0x10]
        xor     ebx, ebx
L3FF6:
        cmp     byte ptr [ebp + 0x10], bl
        jnz     L400A
        mov     eax, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [eax]
        mov     edx, dword ptr [ecx + 0x98]
        add     esi, edx
        mov     dword ptr [eax], esi
L400A:
        mov     edx, dword ptr [ecx + 0x98]
        xor     eax, eax
        cmp     edx, ebx
        setnz   al
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr [ecx + 0x8], eax
        mov     esp, ebp
        pop     ebp
        ret     0xc
L4023:
        cmp     esi, ebx
        jg      L4035
L4027:
        pop     edi
        pop     esi
        mov     dword ptr [ecx + 0x8], ebx
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L4035:
        xor     eax, eax
        cmp     esi, ebx
        mov     dword ptr [ebp - 0x28], eax
        mov     dword ptr [ebp + 0x8], ebx
        jle     L442E
        mov     dword ptr [ebp - 0xc], ebx
L4048:
        mov     edx, dword ptr [ecx + 0x18]
        test    byte ptr [eax + edx*1], 0x2
        jz      L440B
        mov     eax, dword ptr [g_7da718]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [ebp + 0x8]
        lea     edx, [eax + 0x2]
        inc     eax
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, dword ptr [ebp - 0x10]
        mov     esi, dword ptr [eax + 0x98]
        mov     edi, dword ptr [eax + 0x94]
        mov     ebx, dword ptr [eax + 0xa0]
        shl     esi, 0x5
        add     esi, edi
        mov     dword ptr [ebp - 0x4c], ecx
        mov     dword ptr [ebp - 0x18], edx
        mov     dword ptr [ebp - 0x3c], esi
        mov     ecx, dword ptr [ebp - 0x4c]
        fld1
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, edi
        shl     eax, 0x4
        fdiv    dword ptr [eax + ecx*1 + 0xc]
        add     eax, ecx
        mov     edx, dword ptr [ebp - 0x3c]
        fst     dword ptr [edx + 0xc]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        fmul    st(0), st(1)
        shl     eax, 0x4
        add     eax, ecx
        fstp    dword ptr [edx + 0x8]
        fstp    st(0)
        fld1
        fdiv    dword ptr [eax + 0xc]
        fst     dword ptr [edx + 0x2c]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x20]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x24]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x18]
        fmul    st(0), st(1)
        shl     eax, 0x4
        add     eax, ecx
        fstp    dword ptr [edx + 0x28]
        fstp    st(0)
        fld1
        fdiv    dword ptr [eax + 0xc]
        fst     dword ptr [edx + 0x4c]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x40]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x44]
        fld     dword ptr [eax + 0x8]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x48]
        fstp    st(0)
        fld     dword ptr [g_7da87c]
        fmul    dword ptr [esi]
        mov     eax, dword ptr [g_7b94a0]
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x30], eax
        fadd    dword ptr [g_7da874]
        mov     dword ptr [esi + 0x50], eax
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebx + eax*8]
        fstp    dword ptr [esi]
        mov     edx, dword ptr [ebx + eax*8 + 0x4]
        fld     dword ptr [g_7da878]
        mov     eax, dword ptr [ebp - 0x4]
        fmul    dword ptr [esi + 0x4]
        mov     dword ptr [esi + 0x18], ecx
        mov     ecx, dword ptr [ebx + eax*8]
        mov     dword ptr [esi + 0x1c], edx
        fadd    dword ptr [g_7da870]
        mov     edx, dword ptr [ebx + eax*8 + 0x4]
        mov     eax, dword ptr [ebp - 0x18]
        mov     dword ptr [esi + 0x38], ecx
        fstp    dword ptr [esi + 0x4]
        mov     ecx, dword ptr [ebx + eax*8]
        fld     dword ptr [g_7da87c]
        mov     dword ptr [esi + 0x3c], edx
        fmul    dword ptr [esi + 0x20]
        mov     edx, dword ptr [ebx + eax*8 + 0x4]
        mov     eax, dword ptr [ebp - 0x10]
        mov     dword ptr [esi + 0x58], ecx
        fadd    dword ptr [g_7da874]
        mov     ecx, dword ptr [eax + 0x14]
        mov     dword ptr [esi + 0x5c], edx
        mov     edx, dword ptr [ebp - 0xc]
        fstp    dword ptr [esi + 0x20]
        add     ecx, edx
        fld     dword ptr [g_7da878]
        mov     dword ptr [ebp - 0x3c], ecx
        fmul    dword ptr [esi + 0x24]
        fadd    dword ptr [g_7da870]
        fstp    dword ptr [esi + 0x24]
        fld     dword ptr [g_7da87c]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [g_7da874]
        fstp    dword ptr [esi + 0x40]
        fld     dword ptr [g_7da878]
        fmul    dword ptr [esi + 0x44]
        fadd    dword ptr [g_7da870]
        fstp    dword ptr [esi + 0x44]
        fld     dword ptr [g_76fb18]
        mov     esi, dword ptr [ebp - 0x3c]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x58]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x58]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x8], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x58]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x58]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x8]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x8], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x58]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x58]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x8]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x8], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x58]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x58]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x8]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x8], ecx
        mov     ebx, dword ptr [ebp - 0x10]
        mov     esi, dword ptr [ebx + 0x98]
        lea     ecx, [esi + 0x3]
        cmp     esi, ecx
        jge     L42D1
        mov     eax, dword ptr [ebx + 0x94]
        mov     edi, dword ptr [ebp - 0x8]
        mov     edx, esi
        shl     edx, 0x5
        lea     edx, [edx + eax*1 + 0x10]
        mov     eax, ecx
        sub     eax, esi
L42C9:
        mov     dword ptr [edx], edi
        add     edx, 0x20
        dec     eax
        jnz     L42C9
L42D1:
        mov     edx, dword ptr [ebx + 0x94]
        mov     eax, esi
        shl     eax, 0x5
        mov     edi, dword ptr [eax + edx*1]
        add     eax, edx
        shl     ecx, 0x5
        mov     dword ptr [ecx + edx*1], edi
        mov     edi, dword ptr [eax + 0x4]
        add     ecx, edx
        mov     dword ptr [ecx + 0x4], edi
        mov     edi, dword ptr [eax + 0x8]
        mov     dword ptr [ecx + 0x8], edi
        mov     edi, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0xc], edi
        mov     edi, dword ptr [eax + 0x10]
        mov     dword ptr [ecx + 0x10], edi
        mov     edi, dword ptr [eax + 0x14]
        mov     dword ptr [ecx + 0x14], edi
        mov     edi, dword ptr [eax + 0x18]
        mov     eax, dword ptr [eax + 0x1c]
        mov     dword ptr [ecx + 0x1c], eax
        mov     dword ptr [ecx + 0x18], edi
        lea     eax, [esi + 0x2]
        shl     eax, 0x5
        mov     edi, dword ptr [eax + edx*1]
        add     eax, edx
        lea     ecx, [esi + 0x4]
        shl     ecx, 0x5
        add     ecx, edx
        mov     dword ptr [ecx], edi
        mov     edi, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x4], edi
        mov     edi, dword ptr [eax + 0x8]
        mov     dword ptr [ecx + 0x8], edi
        mov     edi, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0xc], edi
        mov     edi, dword ptr [eax + 0x10]
        mov     dword ptr [ecx + 0x10], edi
        mov     edi, dword ptr [eax + 0x14]
        mov     dword ptr [ecx + 0x14], edi
        mov     edi, dword ptr [eax + 0x18]
        mov     eax, dword ptr [eax + 0x1c]
        mov     dword ptr [ecx + 0x1c], eax
        mov     dword ptr [ecx + 0x18], edi
        mov     ecx, dword ptr [g_7da718]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [ebp + 0x8]
        add     esi, 0x5
        shl     esi, 0x5
        mov     dword ptr [ebp - 0x4c], eax
        mov     eax, dword ptr [ebx + 0xa0]
        add     ecx, 0x3
        add     esi, edx
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp - 0x20], eax
        mov     dword ptr [ebp - 0x3c], esi
        mov     ecx, dword ptr [ebp - 0x4c]
        fld1
        mov     edi, dword ptr [ebp - 0x4]
        mov     eax, edi
        shl     eax, 0x4
        fdiv    dword ptr [eax + ecx*1 + 0xc]
        add     eax, ecx
        mov     edx, dword ptr [ebp - 0x3c]
        fst     dword ptr [edx + 0xc]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x4]
        fmul    dword ptr [eax + 0x8]
        fstp    dword ptr [edx + 0x8]
        fld     dword ptr [g_7da87c]
        fmul    dword ptr [esi]
        mov     ecx, dword ptr [g_7b94a0]
        mov     eax, dword ptr [ebp - 0x4]
        mov     dword ptr [esi + 0x10], ecx
        fadd    dword ptr [g_7da874]
        mov     ecx, dword ptr [ebp - 0x20]
        mov     edx, dword ptr [ecx + eax*8]
        mov     eax, dword ptr [ecx + eax*8 + 0x4]
        mov     ecx, dword ptr [ebx + 0x98]
        fstp    dword ptr [esi]
        fld     dword ptr [g_7da878]
        mov     dword ptr [esi + 0x1c], eax
        fmul    dword ptr [esi + 0x4]
        mov     eax, dword ptr [ebp - 0x8]
        mov     dword ptr [esi + 0x18], edx
        mov     edx, dword ptr [ebx + 0x94]
        fadd    dword ptr [g_7da870]
        shl     ecx, 0x5
        fstp    dword ptr [esi + 0x4]
        mov     dword ptr [ecx + edx*1 + 0xb0], eax
        add     dword ptr [ebx + 0x98], 0x6
        mov     eax, dword ptr [ebp - 0x28]
        mov     ecx, dword ptr [ebp - 0x10]
L440B:
        mov     edi, dword ptr [ebp - 0xc]
        mov     esi, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ebp - 0x50]
        inc     eax
        add     edi, 0x10
        add     esi, 0x4
        cmp     eax, edx
        mov     dword ptr [ebp - 0x28], eax
        mov     dword ptr [ebp - 0xc], edi
        mov     dword ptr [ebp + 0x8], esi
        jl      L4048
        xor     ebx, ebx
L442E:
        cmp     byte ptr [ebp + 0x10], bl
        jnz     L4442
        mov     eax, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [eax]
        mov     edx, dword ptr [ecx + 0x98]
        add     esi, edx
        mov     dword ptr [eax], esi
L4442:
        mov     edx, dword ptr [ecx + 0x98]
        xor     eax, eax
        cmp     edx, ebx
        setnz   al
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr [ecx + 0x8], eax
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
