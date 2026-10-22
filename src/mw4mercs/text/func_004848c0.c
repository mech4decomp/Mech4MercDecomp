/*
 * FUN_004848c0 (2524 B) — __thiscall MLR NGonCloud geometry builder.
 * RET 0xc (3 stack args: [ebp+8]=index, [ebp+0xc]=count ptr, [ebp+0x10]=flag).
 * Computes per-vertex color/lighting values, normalizes tube cross-section
 * vectors, and writes 0x20-byte vertex records into the growable buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da6d8;
extern int g_007da718;
extern int g_007da6ec;
extern int g_007da6dc;
extern float g_0076fb58;
extern float g_007da87c;
extern int g_007b94a0;
extern float g_007da874;
extern float g_007da878;
extern float g_007da870;

__declspec(naked) void FUN_004848c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x34
        mov     edx, ecx
        mov     eax, dword ptr [edx + 0xa0]
        mov     ecx, dword ptr [ebp + 0xc]
        push    ebx
        mov     ebx, dword ptr [eax]
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x4], edx
        mov     dword ptr [ebp - 0x24], ebx
        jz      L_48e8
        mov     eax, dword ptr [ecx + 0x30]
        jmp     L_48f2
L_48e8:
        mov     eax, dword ptr [ecx]
        mov     esi, dword ptr [ecx + 0x10]
        shl     eax, 0x5
        add     eax, esi
L_48f2:
        mov     dword ptr [edx + 0x94], eax
        mov     al, byte ptr [ebp + 0x8]
        xor     edi, edi
        test    al, 0x3f
        mov     dword ptr [edx + 0x98], edi
        jz      L_4e7f
        cmp     ebx, edi
        jle     L_4e83
        xor     eax, eax
        xor     esi, esi
        cmp     ebx, edi
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp + 0x8], esi
        jle     L_4e50
        mov     dword ptr [ebp - 0xc], edi
        jmp     L_492c
L_492a:
        xor     edi, edi
L_492c:
        mov     ecx, dword ptr [edx + 0x18]
        add     eax, ecx
        mov     cl, byte ptr [eax]
        test    cl, 0x2
        jz      L_4e28
        or      cl, 0x1
        mov     byte ptr [eax], cl
        mov     ecx, dword ptr [edx + 0x9c]
        mov     dword ptr [g_007da6d8], edi
        mov     edi, dword ptr [g_007da718]
        mov     ebx, dword ptr [edi]
        mov     eax, esi
        shl     eax, 0x4
        add     eax, ebx
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, dword ptr [g_007da6ec]
        mov     eax, dword ptr [eax]
        add     ecx, esi
        cmp     esi, ecx
        lea     eax, [eax + esi*4]
        mov     dword ptr [g_007da6dc], 0x3f
        mov     dword ptr [ebp - 0x28], ecx
        mov     dword ptr [ebp - 0x18], eax
        jge     L_4a5e
        mov     dword ptr [ebp - 0x14], 0x0
L_4983:
        mov     edi, dword ptr [ebp - 0x10]
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
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x4
        or      edx, ebx
        xor     ebx, ebx
        fcom    dword ptr [edi + 0x4]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x1
        or      edx, ebx
        xor     ebx, ebx
        fcomp   dword ptr [edi + 0x8]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x20
        or      edx, ebx
        mov     dword ptr [ebp - 0x14], edx
        mov     edx, dword ptr [g_007da6ec]
        mov     eax, dword ptr [edx]
        mov     edi, dword ptr [ebp - 0x18]
        mov     ecx, dword ptr [ebp - 0x14]
        lea     eax, [eax + esi*4]
        mov     dword ptr [edi], ecx
        mov     edx, dword ptr [eax]
        mov     ebx, dword ptr [eax]
        mov     ecx, dword ptr [g_007da6dc]
        mov     eax, dword ptr [ebp - 0x10]
        and     ecx, edx
        mov     edx, dword ptr [g_007da6d8]
        add     eax, 0x10
        or      edx, ebx
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, dword ptr [ebp - 0x28]
        inc     esi
        add     edi, 0x4
        cmp     esi, eax
        mov     dword ptr [g_007da6dc], ecx
        mov     dword ptr [g_007da6d8], edx
        mov     dword ptr [ebp - 0x18], edi
        __emit 0x0F   /* jl L_4983: MSVC6 miscomputes backward rel32 (off by 7) */
        __emit 0x8C
        __emit 0x2F
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        test    ecx, ecx
        jz      L_4a6e
        mov     edx, dword ptr [ebp - 0x4]
        mov     esi, dword ptr [ebp + 0x8]
L_4a5e:
        mov     ecx, dword ptr [edx + 0x18]
        mov     eax, dword ptr [ebp - 0x8]
        add     eax, ecx
        and     byte ptr [eax], 0xfe
        jmp     L_4e28
L_4a6e:
        test    edx, edx
        mov     edx, dword ptr [ebp - 0x4]
        jnz     L_4e25
        mov     ecx, dword ptr [edx + 0x18]
        mov     eax, dword ptr [ebp - 0x8]
        mov     bl, byte ptr [eax + ecx]
        mov     edi, dword ptr [edx + 0x14]
        add     eax, ecx
        mov     ecx, dword ptr [ebp - 0xc]
        or      bl, 0x1
        add     ecx, edi
        mov     byte ptr [eax], bl
        mov     dword ptr [ebp - 0x28], ecx
        fld     dword ptr [g_0076fb58]
        mov     esi, dword ptr [ebp - 0x28]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x2c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x2c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x1c], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x2c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x2c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x1c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x1c], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x2c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x2c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x1c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x1c], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x2c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x2c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x1c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x1c], ecx
        mov     eax, dword ptr [edx + 0x14]
        mov     ecx, dword ptr [ebp - 0xc]
        lea     eax, [ecx + eax + 0x10]
        mov     dword ptr [ebp - 0x28], eax
        fld     dword ptr [g_0076fb58]
        mov     esi, dword ptr [ebp - 0x28]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
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
        mov     dword ptr [ebp - 0x20], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 1
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
        mov     ecx, dword ptr [ebp - 0x20]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x20], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 1
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
        mov     ecx, dword ptr [ebp - 0x20]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x20], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 1
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
        mov     ecx, dword ptr [ebp - 0x20]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x20], ecx
        mov     ecx, dword ptr [edx + 0x9c]
        dec     ecx
        cmp     ecx, 0x1
        jle     L_4e22
        mov     eax, dword ptr [ebp + 0x8]
        or      ecx, 0xffffffff
        sub     ecx, eax
        lea     ebx, [eax + 0x2]
        mov     dword ptr [ebp - 0x10], ecx
        jmp     L_4c86
L_4c83:
        mov     edx, dword ptr [ebp - 0x4]
L_4c86:
        mov     eax, dword ptr [g_007da718]
        mov     esi, dword ptr [edx + 0x98]
        mov     ecx, dword ptr [eax]
        mov     edi, dword ptr [edx + 0x94]
        shl     esi, 0x5
        lea     eax, [ebx - 0x1]
        add     esi, edi
        mov     dword ptr [ebp - 0x34], ecx
        mov     dword ptr [ebp - 0x28], eax
        mov     dword ptr [ebp - 0x18], ebx
        mov     dword ptr [ebp - 0x14], esi
        mov     ecx, dword ptr [ebp - 0x34]
        fld1
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, edi
        shl     eax, 0x4
        fdiv    dword ptr [eax + ecx + 0xc]
        add     eax, ecx
        mov     edx, dword ptr [ebp - 0x14]
        fst     dword ptr [edx + 0xc]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x18]
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
        mov     eax, dword ptr [ebp - 0x28]
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
        fld     dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        mov     eax, dword ptr [g_007b94a0]
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x30], eax
        fadd    dword ptr [g_007da874]
        mov     dword ptr [esi + 0x50], eax
        xor     eax, eax
        mov     dword ptr [esi + 0x18], eax
        fstp    dword ptr [esi]
        mov     dword ptr [esi + 0x1c], eax
        fld     dword ptr [g_007da878]
        mov     dword ptr [esi + 0x38], eax
        fmul    dword ptr [esi + 0x4]
        mov     dword ptr [esi + 0x3c], eax
        mov     dword ptr [esi + 0x58], eax
        mov     dword ptr [esi + 0x5c], eax
        fadd    dword ptr [g_007da870]
        mov     eax, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [eax + 0x98]
        mov     edx, dword ptr [eax + 0x94]
        fstp    dword ptr [esi + 0x4]
        shl     ecx, 0x5
        fld     dword ptr [g_007da87c]
        fmul    dword ptr [esi + 0x20]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x20]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x24]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x24]
        fld     dword ptr [g_007da87c]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x40]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x44]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x44]
        mov     esi, dword ptr [ebp - 0x1c]
        mov     dword ptr [ecx + edx + 0x10], esi
        mov     edx, dword ptr [eax + 0x98]
        mov     esi, dword ptr [eax + 0x94]
        mov     ecx, dword ptr [ebp - 0x20]
        shl     edx, 0x5
        mov     dword ptr [edx + esi + 0x30], ecx
        mov     edx, dword ptr [eax + 0x98]
        mov     esi, dword ptr [eax + 0x94]
        shl     edx, 0x5
        mov     dword ptr [edx + esi + 0x50], ecx
        mov     ecx, dword ptr [eax + 0x98]
        mov     edx, dword ptr [eax + 0x9c]
        add     ecx, 0x3
        mov     dword ptr [eax + 0x98], ecx
        mov     ecx, dword ptr [ebp - 0x10]
        inc     ebx
        add     ecx, ebx
        dec     edx
        cmp     ecx, edx
        jl      L_4c83
L_4e22:
        mov     edx, dword ptr [ebp - 0x4]
L_4e25:
        mov     esi, dword ptr [ebp + 0x8]
L_4e28:
        mov     eax, dword ptr [ebp - 0x8]
        mov     ebx, dword ptr [ebp - 0xc]
        mov     edi, dword ptr [edx + 0x9c]
        mov     ecx, dword ptr [ebp - 0x24]
        inc     eax
        add     ebx, 0x20
        add     esi, edi
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0xc], ebx
        mov     dword ptr [ebp + 0x8], esi
        jl      L_492a
        xor     edi, edi
L_4e50:
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        jnz     L_4e66
        mov     eax, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [eax]
        mov     ecx, dword ptr [edx + 0x98]
        add     esi, ecx
        mov     dword ptr [eax], esi
L_4e66:
        mov     ecx, dword ptr [edx + 0x98]
        xor     eax, eax
        cmp     ecx, edi
        setnz   al
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr [edx + 0x8], eax
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_4e7f:
        cmp     ebx, edi
        jg      L_4e91
L_4e83:
        mov     dword ptr [edx + 0x8], edi
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_4e91:
        xor     eax, eax
        cmp     ebx, edi
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp + 0x8], edi
        jle     L_526d
        mov     dword ptr [ebp - 0xc], edi
L_4ea4:
        mov     ecx, dword ptr [edx + 0x18]
        test    byte ptr [eax + ecx], 0x2
        jz      L_5245
        mov     eax, dword ptr [ebp - 0xc]
        add     eax, dword ptr [edx + 0x14]
        mov     dword ptr [ebp - 0x34], eax
        fld     dword ptr [g_0076fb58]
        mov     esi, dword ptr [ebp - 0x34]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
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
        mov     dword ptr [ebp - 0x20], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 1
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
        mov     ecx, dword ptr [ebp - 0x20]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x20], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 1
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
        mov     ecx, dword ptr [ebp - 0x20]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x20], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 1
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
        mov     ecx, dword ptr [ebp - 0x20]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x20], ecx
        mov     ecx, dword ptr [edx + 0x14]
        mov     eax, dword ptr [ebp - 0xc]
        lea     ecx, [eax + ecx + 0x10]
        mov     dword ptr [ebp - 0x34], ecx
        fld     dword ptr [g_0076fb58]
        mov     esi, dword ptr [ebp - 0x34]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x2c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x2c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x1c], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x2c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x2c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x1c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x1c], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x2c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x2c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x1c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x1c], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x2c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x2c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x1c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x1c], ecx
        mov     eax, dword ptr [edx + 0x9c]
        dec     eax
        cmp     eax, 0x1
        jle     L_5245
        or      eax, 0xffffffff
        sub     eax, edi
        lea     ebx, [edi + 0x2]
        mov     dword ptr [ebp - 0x10], eax
        jmp     L_50a9
L_50a6:
        mov     edx, dword ptr [ebp - 0x4]
L_50a9:
        mov     ecx, dword ptr [g_007da718]
        mov     esi, dword ptr [edx + 0x98]
        mov     eax, dword ptr [ecx]
        mov     edi, dword ptr [edx + 0x94]
        shl     esi, 0x5
        lea     ecx, [ebx - 0x1]
        add     esi, edi
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x34], ecx
        mov     dword ptr [ebp - 0x28], ebx
        mov     dword ptr [ebp - 0x18], esi
        mov     ecx, dword ptr [ebp - 0x14]
        fld1
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, edi
        shl     eax, 0x4
        fdiv    dword ptr [eax + ecx + 0xc]
        add     eax, ecx
        mov     edx, dword ptr [ebp - 0x18]
        fst     dword ptr [edx + 0xc]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x28]
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
        mov     eax, dword ptr [ebp - 0x34]
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
        fld     dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        mov     eax, dword ptr [g_007b94a0]
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x30], eax
        fadd    dword ptr [g_007da874]
        mov     dword ptr [esi + 0x50], eax
        xor     eax, eax
        mov     dword ptr [esi + 0x18], eax
        fstp    dword ptr [esi]
        mov     dword ptr [esi + 0x1c], eax
        fld     dword ptr [g_007da878]
        mov     dword ptr [esi + 0x38], eax
        fmul    dword ptr [esi + 0x4]
        mov     dword ptr [esi + 0x3c], eax
        mov     dword ptr [esi + 0x58], eax
        mov     dword ptr [esi + 0x5c], eax
        fadd    dword ptr [g_007da870]
        mov     eax, dword ptr [ebp - 0x4]
        mov     edx, dword ptr [eax + 0x98]
        mov     ecx, dword ptr [eax + 0x94]
        fstp    dword ptr [esi + 0x4]
        shl     edx, 0x5
        fld     dword ptr [g_007da87c]
        fmul    dword ptr [esi + 0x20]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x20]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x24]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x24]
        fld     dword ptr [g_007da87c]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x40]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x44]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x44]
        mov     esi, dword ptr [ebp - 0x20]
        mov     dword ptr [edx + ecx + 0x10], esi
        mov     edx, dword ptr [eax + 0x98]
        mov     esi, dword ptr [eax + 0x94]
        mov     ecx, dword ptr [ebp - 0x1c]
        shl     edx, 0x5
        mov     dword ptr [edx + esi + 0x30], ecx
        mov     edx, dword ptr [eax + 0x98]
        mov     esi, dword ptr [eax + 0x94]
        shl     edx, 0x5
        mov     dword ptr [edx + esi + 0x50], ecx
        add     dword ptr [eax + 0x98], 0x3
        mov     ecx, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [eax + 0x9c]
        inc     ebx
        lea     edx, [ebx + ecx]
        dec     eax
        cmp     edx, eax
        jl      L_50a6
        mov     edi, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ebp - 0x4]
L_5245:
        mov     eax, dword ptr [ebp - 0x8]
        mov     ebx, dword ptr [ebp - 0xc]
        mov     esi, dword ptr [edx + 0x9c]
        mov     ecx, dword ptr [ebp - 0x24]
        inc     eax
        add     ebx, 0x20
        add     edi, esi
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0xc], ebx
        mov     dword ptr [ebp + 0x8], edi
        jl      L_4ea4
        xor     edi, edi
L_526d:
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        jnz     L_5283
        mov     eax, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [eax]
        mov     ecx, dword ptr [edx + 0x98]
        add     esi, ecx
        mov     dword ptr [eax], esi
L_5283:
        mov     ecx, dword ptr [edx + 0x98]
        xor     eax, eax
        cmp     ecx, edi
        setnz   al
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr [edx + 0x8], eax
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
