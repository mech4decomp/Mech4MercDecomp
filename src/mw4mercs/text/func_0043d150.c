/*
 * FUN_0043d150 (1685 B) — MLR light/material renderer (__thiscall, RET 0xc).
 * Color/light accumulation with FPU float->byte color packing. Heavy FPU +
 * extern-global usage.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b2224;
extern float g_007b9550;
extern float g_0076e4e0;
extern float g_0076e4dc;
extern float g_0076e134;
extern int g_007b94a0;
extern void *g_007da600;
extern void *g_007b983c;

__declspec(naked) void FUN_0043d150(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x60
        push    ebx
        push    esi
        mov     ebx, ecx
        mov     eax, dword ptr [ebx]
        push    edi
        xor     esi, esi
        lea     edi, [ebx + 0x88]
        push    esi
        mov     dword ptr [ebp + -0x4], ebx
        mov     dword ptr [ebx + 0x90], edi
        call    dword ptr [eax + 0x1c]
        mov     eax, dword ptr [eax + 0x4]
        and     eax, 0x3e0
        mov     dword ptr [ebp + -0x10], eax
        jz      L_d7dc
        cmp     dword ptr [g_007b2224], esi
        jz      L_d7dc
        test    al, 0x20
        jz      L_d791
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, esi
        jz      L_d7dc
        test    ah, 0x1
        mov     edx, dword ptr [ebx + 0x18]
        mov     dword ptr [ebp + -0xc], edx
        mov     edx, dword ptr [edi]
        mov     dword ptr [ebp + -0x8], edx
        jnz     L_d530
        cmp     ecx, esi
        mov     dword ptr [ebp + -0x40], esi
        mov     dword ptr [ebp + -0x3c], esi
        mov     dword ptr [ebp + -0x38], esi
        mov     dword ptr [ebp + -0x34], 0x3f800000
        jle     L_d1f8
        mov     esi, dword ptr [ebp + 0x8]
        mov     ebx, ecx
L_d1cf:
        mov     ecx, dword ptr [esi]
        fld     dword ptr [ecx + 0x8]
        fcomp   dword ptr [g_007b9550]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax (DF E0) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 (F6 C4 01) */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_d1ea
        mov     eax, dword ptr [ecx]
        lea     edx, [ebp + -0x40]
        push    edx
        call    dword ptr [eax + 0x14]
L_d1ea:
        add     esi, 0x4
        dec     ebx
        jnz     L_d1cf
        mov     ebx, dword ptr [ebp + -0x4]
        mov     edx, dword ptr [ebp + -0x8]
        xor     esi, esi
L_d1f8:
        cmp     edx, esi
        jz      L_d3aa
        mov     edi, dword ptr [ebp + -0xc]
        xor     edx, edx
        cmp     edi, esi
        jle     L_d782
L_d20d:
        mov     eax, dword ptr [g_007da600]
        mov     ecx, dword ptr [eax]
        cmp     byte ptr [ecx + edx*0x1], 0x0
        jz      L_d39c
        mov     eax, dword ptr [ebp + -0x40]
        mov     ecx, dword ptr [ebp + -0x3c]
        mov     dword ptr [ebp + -0x50], eax
        mov     eax, dword ptr [ebp + -0x38]
        mov     dword ptr [ebp + -0x48], eax
        mov     eax, dword ptr [ebp + -0x8]
        mov     eax, dword ptr [eax + edx*0x4]
        mov     dword ptr [ebp + -0x4c], ecx
        mov     ecx, dword ptr [ebp + -0x34]
        mov     dword ptr [ebp + -0x44], ecx
        mov     ecx, eax
        and     ecx, 0xff
        shr     eax, 0x8
        mov     dword ptr [ebp + -0x20], ecx
        mov     ecx, eax
        mov     dword ptr [ebp + -0x1c], esi
        fild    qword ptr [ebp + -0x20]
        and     ecx, 0xff
        mov     dword ptr [ebp + -0x28], ecx
        fmul    dword ptr [g_0076e4e0]
        mov     dword ptr [ebp + -0x24], esi
        fild    qword ptr [ebp + -0x28]
        shr     eax, 0x8
        and     eax, 0xff
        mov     dword ptr [ebp + -0x30], eax
        fmul    dword ptr [g_0076e4e0]
        mov     dword ptr [ebp + -0x2c], esi
        fild    qword ptr [ebp + -0x30]
        lea     eax, [ebp + -0x50]
        mov     dword ptr [ebp + -0x18], eax
        fmul    dword ptr [g_0076e4e0]
        fld     dword ptr [ebp + -0x40]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp + -0x50]
        fstp    st(0)
        fld     dword ptr [ebp + -0x4c]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp + -0x4c]
        fstp    st(0)
        fld     dword ptr [ebp + -0x48]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp + -0x48]
        fstp    st(0)
        fld     dword ptr [g_0076e4dc]
        mov     esi, dword ptr [ebp + -0x18]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + -0x14]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + -0x14]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp + -0xc], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + -0x14]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + -0x14]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + -0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + -0xc], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + -0x14]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + -0x14]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + -0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + -0xc], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + -0x14]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + -0x14]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + -0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + -0xc], ecx
        mov     ecx, dword ptr [g_007b983c]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [ebp + -0xc]
        mov     ebx, dword ptr [ebp + -0x4]
        mov     dword ptr [eax + edx*0x4], ecx
        xor     esi, esi
L_d39c:
        inc     edx
        cmp     edx, edi
        jl      L_d20d
        jmp     L_d782
L_d3aa:
        mov     eax, dword ptr [g_007b94a0]
        mov     edx, eax
        and     edx, 0xff
        mov     dword ptr [ebp + -0x30], edx
        mov     dword ptr [ebp + -0x2c], esi
        fild    qword ptr [ebp + -0x30]
        shr     eax, 0x8
        mov     ecx, eax
        and     ecx, 0xff
        fmul    dword ptr [ebp + -0x38]
        mov     dword ptr [ebp + -0x30], ecx
        mov     dword ptr [ebp + -0x2c], esi
        shr     eax, 0x8
        fmul    dword ptr [g_0076e134]
        mov     edx, eax
        and     edx, 0xff
        shr     eax, 0x8
        fstp    dword ptr [ebp + -0x48]
        mov     dword ptr [g_007b94a0], eax
        fild    qword ptr [ebp + -0x30]
        mov     dword ptr [ebp + -0x30], edx
        mov     dword ptr [ebp + -0x2c], esi
        and     eax, 0xff
        fmul    dword ptr [ebp + -0x3c]
        fmul    dword ptr [g_0076e134]
        fstp    dword ptr [ebp + -0x4c]
        fild    qword ptr [ebp + -0x30]
        mov     dword ptr [ebp + -0x30], eax
        mov     dword ptr [ebp + -0x2c], esi
        lea     eax, [ebp + -0x50]
        fmul    dword ptr [ebp + -0x40]
        mov     dword ptr [ebp + 0x8], eax
        fmul    dword ptr [g_0076e134]
        fstp    dword ptr [ebp + -0x50]
        fild    qword ptr [ebp + -0x30]
        fmul    dword ptr [ebp + -0x34]
        fmul    dword ptr [g_0076e134]
        fstp    dword ptr [ebp + -0x44]
        fld     dword ptr [g_0076e4dc]
        mov     esi, dword ptr [ebp + 0x8]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + -0x18]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + -0x18]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp + 0xc], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + -0x18]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + -0x18]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0xc], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + -0x18]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + -0x18]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0xc], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + -0x18]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + -0x18]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0xc], ecx
        mov     edx, dword ptr [ebp + -0x4]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [edx + 0x90], edi
        pop     edi
        pop     esi
        mov     dword ptr [g_007b94a0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_d530:
        cmp     dword ptr [ebx + 0x98], esi
        jz      L_d7dc
        mov     eax, dword ptr [ebx + 0x14]
        mov     dword ptr [ebp + -0x60], eax
        lea     eax, [ebp + -0x50]
        mov     dword ptr [ebp + -0x5c], eax
        mov     eax, dword ptr [ebx + 0x94]
        mov     dword ptr [ebp + -0x58], eax
        mov     eax, dword ptr [ebp + -0xc]
        xor     edi, edi
        cmp     eax, esi
        mov     dword ptr [ebp + -0x48], 0xbf800000
        mov     dword ptr [ebp + -0x4c], 0xbf800000
        mov     dword ptr [ebp + -0x50], 0xbf800000
        mov     dword ptr [ebp + -0x44], 0xbf800000
        jle     L_d782
        jmp     L_d581
L_d57c:
        mov     ecx, dword ptr [ebp + 0xc]
        xor     esi, esi
L_d581:
        mov     eax, dword ptr [g_007da600]
        mov     eax, dword ptr [eax]
        cmp     byte ptr [eax + edi*0x1], 0x0
        jz      L_d609
        cmp     ecx, esi
        mov     dword ptr [ebp + -0x50], 0x0
        mov     dword ptr [ebp + -0x4c], 0x0
        mov     dword ptr [ebp + -0x48], 0x0
        mov     dword ptr [ebp + -0x44], 0x3f800000
        jle     L_d609
        mov     ebx, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp + -0x14], ecx
L_d5b4:
        mov     esi, dword ptr [ebx]
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [g_007b9550]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax (DF E0) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 (F6 C4 01) */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_d5f8
        mov     eax, dword ptr [esi + 0x78]
        and     eax, dword ptr [ebp + -0x10]
        jz      L_d5f8
        test    al, 0x20
        jz      L_d5f8
        mov     ecx, dword ptr [ebp + -0x4]
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx + 0x1c]
        test    byte ptr [eax + 0x4], 0x10
        jnz     L_d5ed
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        test    eax, eax
        jnz     L_d5f8
L_d5ed:
        mov     edx, dword ptr [esi]
        lea     eax, [ebp + -0x60]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x10]
L_d5f8:
        mov     eax, dword ptr [ebp + -0x14]
        add     ebx, 0x4
        dec     eax
        mov     dword ptr [ebp + -0x14], eax
        jnz     L_d5b4
        mov     edx, dword ptr [ebp + -0x8]
        xor     esi, esi
L_d609:
        mov     ecx, dword ptr [ebp + -0x60]
        add     ecx, 0xc
        cmp     edx, esi
        mov     dword ptr [ebp + -0x60], ecx
        jz      L_d673
        mov     eax, dword ptr [edx + edi*0x4]
        mov     ecx, eax
        and     ecx, 0xff
        shr     eax, 0x8
        mov     dword ptr [ebp + -0x30], ecx
        mov     ecx, eax
        mov     dword ptr [ebp + -0x2c], esi
        fild    qword ptr [ebp + -0x30]
        and     ecx, 0xff
        mov     dword ptr [ebp + -0x28], ecx
        mov     dword ptr [ebp + -0x24], esi
        fmul    dword ptr [g_0076e4e0]
        shr     eax, 0x8
        fild    qword ptr [ebp + -0x28]
        and     eax, 0xff
        mov     dword ptr [ebp + -0x38], eax
        mov     dword ptr [ebp + -0x34], esi
        fmul    dword ptr [g_0076e4e0]
        fild    qword ptr [ebp + -0x38]
        fmul    dword ptr [g_0076e4e0]
        fmul    dword ptr [ebp + -0x50]
        fstp    dword ptr [ebp + -0x50]
        fmul    dword ptr [ebp + -0x4c]
        fstp    dword ptr [ebp + -0x4c]
        fmul    dword ptr [ebp + -0x48]
        fstp    dword ptr [ebp + -0x48]
L_d673:
        lea     eax, [ebp + -0x50]
        mov     dword ptr [ebp + -0x14], eax
        fld     dword ptr [g_0076e4dc]
        mov     esi, dword ptr [ebp + -0x14]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + -0x1c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + -0x1c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp + -0x18], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + -0x1c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + -0x1c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + -0x18]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + -0x18], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + -0x1c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + -0x1c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + -0x18]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + -0x18], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + -0x1c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + -0x1c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + -0x18]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + -0x18], ecx
        mov     ecx, dword ptr [g_007b983c]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [ebp + -0x18]
        mov     dword ptr [eax + edi*0x4], ecx
        mov     esi, dword ptr [ebp + -0x58]
        mov     eax, dword ptr [ebp + -0xc]
        add     esi, 0xc
        inc     edi
        cmp     edi, eax
        mov     dword ptr [ebp + -0x58], esi
        jl      L_d57c
        mov     ebx, dword ptr [ebp + -0x4]
        xor     esi, esi
L_d782:
        mov     edx, dword ptr [g_007b983c]
        mov     eax, dword ptr [ebp + -0x10]
        mov     dword ptr [ebx + 0x90], edx
L_d791:
        test    al, 0x40
        jz      L_d7dc
        mov     edi, dword ptr [ebp + 0xc]
        cmp     edi, esi
        jz      L_d7dc
        jle     L_d7dc
        mov     ebx, dword ptr [ebp + 0x8]
L_d7a1:
        mov     esi, dword ptr [ebx]
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [g_007b9550]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax (DF E0) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 (F6 C4 01) */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_d7d6
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x1c]
        test    eax, eax
        jz      L_d7d6
        mov     eax, dword ptr [esi + 0x78]
        and     eax, dword ptr [ebp + -0x10]
        jz      L_d7d6
        test    al, 0x40
        jz      L_d7d6
        mov     ecx, dword ptr [ebp + -0x4]
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0xa0]
L_d7d6:
        add     ebx, 0x4
        dec     edi
        jnz     L_d7a1
L_d7dc:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
