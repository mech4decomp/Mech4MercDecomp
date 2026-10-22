/*
 * FUN_004856a0 (2766 B) — __thiscall MLR TriangleCloud geometry builder.
 * RET 0xc (3 stack args: [ebp+8]=index, [ebp+0xc]=count ptr, [ebp+0x10]=flag).
 * Computes per-vertex color/lighting values, normalizes triangle cross-section
 * vectors, and writes 0x20-byte vertex records into the growable buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da718;
extern int g_007da70c;
extern int g_007da6fc;
extern int g_007da6f8;
extern float g_007da87c;
extern float g_007da874;
extern float g_007da878;
extern float g_007da870;
extern float g_0076fb98;

__declspec(naked) void FUN_004856a0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x3c
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x9c]
        push    edi
        mov     edi, dword ptr [eax]
        test    byte ptr [ebp + 0x8], 0x3f
        mov     dword ptr [ebp - 0x8], esi
        mov     dword ptr [ebp - 0x10], edi
        jz      L_5ca8
        test    edi, edi
        jle     L_5cac
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        mov     ecx, dword ptr [ebp + 0xc]
        jz      L_56da
        mov     eax, dword ptr [ecx + 0x30]
        jmp     L_56e4
L_56da:
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ecx + 0x10]
        shl     eax, 0x5
        add     eax, edx
L_56e4:
        mov     dword ptr [esi + 0x94], eax
        xor     ecx, ecx
        xor     eax, eax
        test    edi, edi
        mov     dword ptr [esi + 0x98], 0x0
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp + 0x8], eax
        jle     L_5c79
L_5706:
        mov     edx, dword ptr [esi + 0x18]
        add     ecx, edx
        mov     dl, byte ptr [ecx]
        test    dl, 0x2
        jz      L_5c64
        mov     ebx, dword ptr [g_007da718]
        or      dl, 0x1
        mov     byte ptr [ecx], dl
        mov     ecx, eax
        shl     ecx, 0x4
        mov     dword ptr [ebp - 0x30], ecx
        add     ecx, dword ptr [ebx]
        lea     edx, [eax + 0x3]
        cmp     eax, edx
        mov     dword ptr [ebp - 0xc], ecx
        mov     ecx, dword ptr [g_007da70c]
        mov     ecx, dword ptr [ecx]
        lea     ecx, [ecx + eax*4]
        mov     dword ptr [g_007da6fc], 0x3f
        mov     dword ptr [g_007da6f8], 0x0
        mov     dword ptr [ebp - 0x1c], ecx
        mov     dword ptr [ebp - 0x18], eax
        jge     L_5c64
        mov     dword ptr [ebp - 0x14], 0x0
L_575e:
        mov     edi, dword ptr [ebp - 0xc]
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
        mov     ebx, dword ptr [ebp - 0x1c]
        mov     edx, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [g_007da70c]
        mov     ecx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebx], edx
        mov     edx, dword ptr [eax]
        mov     edi, dword ptr [edx + ecx*4]
        lea     eax, [edx + ecx*4]
        mov     edx, dword ptr [g_007da6fc]
        and     edx, edi
        mov     edi, dword ptr [g_007da6f8]
        or      edi, dword ptr [eax]
        add     dword ptr [ebp - 0xc], 0x10
        mov     eax, dword ptr [ebp + 0x8]
        inc     ecx
        add     ebx, 0x4
        add     eax, 0x3
        cmp     ecx, eax
        mov     dword ptr [g_007da6fc], edx
        mov     dword ptr [g_007da6f8], edi
        mov     dword ptr [ebp - 0x18], ecx
        mov     dword ptr [ebp - 0x1c], ebx
        __emit 0x0F   /* jl L_575e: MSVC6 miscomputes backward rel32 (off by 7) */
        __emit 0x8C
        __emit 0x2D
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        test    edx, edx
        jnz     L_5c5e
        test    edi, edi
        jnz     L_5c5e
        mov     ecx, dword ptr [g_007da718]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ebx, dword ptr [esi + 0x98]
        mov     edi, dword ptr [esi + 0x94]
        lea     ecx, [eax + 0x1]
        shl     ebx, 0x5
        mov     dword ptr [ebp - 0x2c], edx
        mov     edx, dword ptr [esi + 0x14]
        add     eax, 0x2
        add     ebx, edi
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x14], edx
        mov     dword ptr [ebp - 0x1c], ebx
        mov     ecx, dword ptr [ebp - 0x2c]
        fld1
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, edi
        shl     eax, 0x4
        fdiv    dword ptr [eax + ecx + 0xc]
        add     eax, ecx
        mov     edx, dword ptr [ebp - 0x1c]
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
        fld     dword ptr [g_007da87c]
        fmul    dword ptr [ebx]
        mov     eax, dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [ebp - 0x14]
        add     eax, ecx
        fadd    dword ptr [g_007da874]
        mov     dword ptr [ebp - 0x30], eax
        fstp    dword ptr [ebx]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [ebx + 0x4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ebx + 0x4]
        fld     dword ptr [g_007da87c]
        fmul    dword ptr [ebx + 0x20]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ebx + 0x20]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [ebx + 0x24]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ebx + 0x24]
        fld     dword ptr [g_007da87c]
        fmul    dword ptr [ebx + 0x40]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ebx + 0x40]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [ebx + 0x44]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ebx + 0x44]
        fld     dword ptr [g_0076fb98]
        mov     esi, dword ptr [ebp - 0x30]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x34]
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
        fstp    dword ptr [ebp - 0x34]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x34]
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
        fstp    dword ptr [ebp - 0x34]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x34]
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
        fstp    dword ptr [ebp - 0x34]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x34]
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
        mov     eax, dword ptr [ebp - 0x20]
        mov     edx, dword ptr [ebp - 0x1c]
        mov     edi, dword ptr [ebp - 0x14]
        mov     dword ptr [edx + 0x10], eax
        mov     eax, dword ptr [ebp - 0x18]
        shl     eax, 0x4
        add     eax, edi
        mov     dword ptr [ebp - 0x30], eax
        fld     dword ptr [g_0076fb98]
        mov     esi, dword ptr [ebp - 0x30]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
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
        mov     dword ptr [ebp - 0x24], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 1
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
        mov     ecx, dword ptr [ebp - 0x24]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x24], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 1
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
        mov     ecx, dword ptr [ebp - 0x24]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x24], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 1
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
        mov     ecx, dword ptr [ebp - 0x24]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x24], ecx
        mov     eax, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp - 0x24]
        shl     eax, 0x4
        add     eax, edi
        mov     dword ptr [edx + 0x30], ecx
        mov     dword ptr [ebp - 0x30], eax
        fld     dword ptr [g_0076fb98]
        mov     esi, dword ptr [ebp - 0x30]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x3c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x3c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x28], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x3c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x3c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x28]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x28], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x3c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x3c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x28]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x28], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x3c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x3c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x28]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x28], ecx
        mov     eax, dword ptr [ebp - 0x28]
        mov     dword ptr [edx + 0x50], eax
        xor     eax, eax
        mov     dword ptr [edx + 0x18], eax
        mov     dword ptr [edx + 0x1c], eax
        mov     dword ptr [edx + 0x38], eax
        mov     dword ptr [edx + 0x3c], eax
        mov     dword ptr [edx + 0x58], eax
        mov     dword ptr [edx + 0x5c], eax
        mov     eax, dword ptr [ebp - 0x8]
        add     dword ptr [eax + 0x98], 0x3
        mov     esi, eax
L_5c5e:
        mov     eax, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [ebp - 0x10]
L_5c64:
        mov     ecx, dword ptr [ebp - 0x4]
        inc     ecx
        add     eax, 0x3
        cmp     ecx, edi
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp + 0x8], eax
        jl      L_5706
L_5c79:
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        jnz     L_5c8f
        mov     eax, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [esi + 0x98]
        add     edx, ecx
        mov     dword ptr [eax], edx
L_5c8f:
        mov     ecx, dword ptr [esi + 0x98]
        xor     eax, eax
        test    ecx, ecx
        setnz   al
        pop     edi
        mov     dword ptr [esi + 0x8], eax
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_5ca8:
        test    edi, edi
        jg      L_5cbf
L_5cac:
        mov     dword ptr [esi + 0x8], 0x0
        mov     eax, dword ptr [esi + 0x8]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_5cbf:
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        jz      L_5cce
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [edx + 0x30]
        jmp     L_5cdb
L_5cce:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ecx + 0x10]
        shl     eax, 0x5
        add     eax, edx
L_5cdb:
        mov     dword ptr [esi + 0x94], eax
        xor     ecx, ecx
        xor     eax, eax
        test    edi, edi
        mov     dword ptr [esi + 0x98], 0x0
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp + 0x8], eax
        jle     L_613f
L_5cfd:
        mov     edx, dword ptr [esi + 0x18]
        test    byte ptr [ecx + edx], 0x2
        jz      L_612d
        mov     ecx, dword ptr [g_007da718]
        mov     edx, dword ptr [ecx]
        mov     ebx, dword ptr [esi + 0x98]
        lea     ecx, [eax + 0x1]
        add     eax, 0x2
        mov     dword ptr [ebp - 0x20], eax
        mov     eax, dword ptr [esi + 0x94]
        shl     ebx, 0x5
        mov     dword ptr [ebp - 0x3c], edx
        mov     edx, dword ptr [esi + 0x14]
        add     ebx, eax
        mov     dword ptr [ebp - 0x14], ecx
        mov     dword ptr [ebp - 0x1c], edx
        mov     dword ptr [ebp - 0x24], ebx
        mov     ecx, dword ptr [ebp - 0x3c]
        fld1
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, edi
        shl     eax, 0x4
        fdiv    dword ptr [eax + ecx + 0xc]
        add     eax, ecx
        mov     edx, dword ptr [ebp - 0x24]
        fst     dword ptr [edx + 0xc]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x20]
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
        mov     eax, dword ptr [ebp - 0x14]
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
        fmul    dword ptr [ebx]
        mov     eax, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [ebp - 0x1c]
        shl     eax, 0x4
        fadd    dword ptr [g_007da874]
        add     eax, edi
        mov     dword ptr [ebp - 0x3c], eax
        fstp    dword ptr [ebx]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [ebx + 0x4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ebx + 0x4]
        fld     dword ptr [g_007da87c]
        fmul    dword ptr [ebx + 0x20]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ebx + 0x20]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [ebx + 0x24]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ebx + 0x24]
        fld     dword ptr [g_007da87c]
        fmul    dword ptr [ebx + 0x40]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ebx + 0x40]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [ebx + 0x44]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ebx + 0x44]
        fld     dword ptr [g_0076fb98]
        mov     esi, dword ptr [ebp - 0x3c]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
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
        mov     dword ptr [ebp - 0x28], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 1
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
        mov     ecx, dword ptr [ebp - 0x28]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x28], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 1
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
        mov     ecx, dword ptr [ebp - 0x28]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x28], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 1
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
        mov     ecx, dword ptr [ebp - 0x28]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x28], ecx
        mov     eax, dword ptr [ebp - 0x20]
        mov     ecx, dword ptr [ebp - 0x28]
        mov     edx, dword ptr [ebp - 0x24]
        shl     eax, 0x4
        add     eax, edi
        mov     dword ptr [edx + 0x10], ecx
        mov     dword ptr [ebp - 0x3c], eax
        fld     dword ptr [g_0076fb98]
        mov     esi, dword ptr [ebp - 0x3c]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x34]
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
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x34]
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
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x34]
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
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x34]
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
        mov     dword ptr [edx + 0x30], eax
        mov     eax, dword ptr [ebp - 0x14]
        shl     eax, 0x4
        add     eax, edi
        mov     dword ptr [ebp - 0x3c], eax
        fld     dword ptr [g_0076fb98]
        mov     esi, dword ptr [ebp - 0x3c]
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
        mov     dword ptr [ebp - 0xc], ebx
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
        mov     ecx, dword ptr [ebp - 0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0xc], ecx
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
        mov     ecx, dword ptr [ebp - 0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0xc], ecx
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
        mov     ecx, dword ptr [ebp - 0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0xc], ecx
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edi, dword ptr [ebp - 0x10]
        xor     eax, eax
        mov     dword ptr [edx + 0x18], eax
        mov     dword ptr [edx + 0x1c], eax
        mov     dword ptr [edx + 0x38], eax
        mov     dword ptr [edx + 0x3c], eax
        mov     dword ptr [edx + 0x58], eax
        mov     dword ptr [edx + 0x5c], eax
        mov     eax, dword ptr [ebp - 0x8]
        mov     dword ptr [edx + 0x50], ecx
        add     dword ptr [eax + 0x98], 0x3
        mov     ecx, dword ptr [ebp - 0x4]
        mov     esi, eax
        mov     eax, dword ptr [ebp + 0x8]
L_612d:
        inc     ecx
        add     eax, 0x3
        cmp     ecx, edi
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp + 0x8], eax
        jl      L_5cfd
L_613f:
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        jnz     L_6155
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esi + 0x98]
        add     ecx, edx
        mov     dword ptr [eax], ecx
L_6155:
        mov     ecx, dword ptr [esi + 0x98]
        xor     eax, eax
        test    ecx, ecx
        setnz   al
        pop     edi
        mov     dword ptr [esi + 0x8], eax
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
