/*
 * FUN_00460680 (1685 B) — MLR tube/mesh __thiscall lightmap build.
 * Iterates light sources, computes per-vertex lightmap texels (float->8bit
 * packing with saturation), and writes into the lightmap buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b2224;
extern int g_007b94a0;
extern int g_007da600;
extern int g_007d9914;
extern float g_007b9550;
extern float g_0076ed0c;
extern float g_0076ed08;
extern float g_0076e134;

__declspec(naked) void FUN_00460680(void)
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
        lea     edi, [ebx+0xa0]
        push    esi
        mov     dword ptr [ebp-0x4], ebx
        mov     dword ptr [ebx+0xb0], edi
        call    dword ptr [eax+0x1c]
        mov     eax, dword ptr [eax+0x4]
        and     eax, 0x3e0
        mov     dword ptr [ebp-0x10], eax
        jz      LEND
        cmp     dword ptr [g_007b2224], esi
        jz      LEND
        test    al, 0x20
        jz      LCC1
        mov     ecx, dword ptr [ebp+0xc]
        cmp     ecx, esi
        jz      LEND
        __emit 0xF6        /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        mov     edx, dword ptr [ebx+0x18]
        mov     dword ptr [ebp-0xc], edx
        mov     edx, dword ptr [edi]
        mov     dword ptr [ebp-0x8], edx
        jnz     LA60
        cmp     ecx, esi
        mov     dword ptr [ebp-0x40], esi
        mov     dword ptr [ebp-0x3c], esi
        mov     dword ptr [ebp-0x38], esi
        mov     dword ptr [ebp-0x34], 0x3f800000
        jle     L728
        mov     esi, dword ptr [ebp+0x8]
        mov     ebx, ecx
L6FF:
        mov     ecx, dword ptr [esi]
        fld     dword ptr [ecx+0x8]
        fcomp   dword ptr [g_007b9550]
        __emit 0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6        /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L71A
        mov     eax, dword ptr [ecx]
        lea     edx, [ebp-0x40]
        push    edx
        call    dword ptr [eax+0x14]
L71A:
        add     esi, 0x4
        dec     ebx
        jnz     L6FF
        mov     ebx, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ebp-0x8]
        xor     esi, esi
L728:
        cmp     edx, esi
        jz      L8DA
        mov     edi, dword ptr [ebp-0xc]
        xor     edx, edx
        cmp     edi, esi
        jle     LCB2
L73D:
        mov     eax, dword ptr [g_007da600]
        mov     ecx, dword ptr [eax]
        cmp     byte ptr [ecx+edx], 0x0
        jz      L8CC
        mov     eax, dword ptr [ebp-0x40]
        mov     ecx, dword ptr [ebp-0x3c]
        mov     dword ptr [ebp-0x50], eax
        mov     eax, dword ptr [ebp-0x38]
        mov     dword ptr [ebp-0x48], eax
        mov     eax, dword ptr [ebp-0x8]
        mov     eax, dword ptr [eax+edx*4]
        mov     dword ptr [ebp-0x4c], ecx
        mov     ecx, dword ptr [ebp-0x34]
        mov     dword ptr [ebp-0x44], ecx
        mov     ecx, eax
        and     ecx, 0xff
        shr     eax, 0x8
        mov     dword ptr [ebp-0x20], ecx
        mov     ecx, eax
        mov     dword ptr [ebp-0x1c], esi
        fild    qword ptr [ebp-0x20]
        and     ecx, 0xff
        mov     dword ptr [ebp-0x28], ecx
        fmul    dword ptr [g_0076ed0c]
        mov     dword ptr [ebp-0x24], esi
        fild    qword ptr [ebp-0x28]
        shr     eax, 0x8
        and     eax, 0xff
        mov     dword ptr [ebp-0x30], eax
        fmul    dword ptr [g_0076ed0c]
        mov     dword ptr [ebp-0x2c], esi
        fild    qword ptr [ebp-0x30]
        lea     eax, [ebp-0x50]
        mov     dword ptr [ebp-0x18], eax
        fmul    dword ptr [g_0076ed0c]
        fld     dword ptr [ebp-0x40]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp-0x50]
        fstp    st(0)
        fld     dword ptr [ebp-0x4c]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp-0x4c]
        fstp    st(0)
        fld     dword ptr [ebp-0x48]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp-0x48]
        fstp    st(0)
        fld     dword ptr [g_0076ed08]
        mov     esi, dword ptr [ebp-0x18]
        fld     dword ptr [esi+0xc]
        mov     ecx, dword ptr [esi+0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x14]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x14]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp-0xc], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x14]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x14]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp-0xc], ecx
        fld     dword ptr [esi+0x4]
        mov     ecx, dword ptr [esi+0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x14]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x14]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp-0xc], ecx
        mov     ecx, dword ptr [esi+0x8]
        fadd    dword ptr [esi+0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x14]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x14]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp-0xc], ecx
        mov     ecx, dword ptr [g_007d9914]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [ebp-0xc]
        mov     ebx, dword ptr [ebp-0x4]
        mov     dword ptr [eax+edx*4], ecx
        xor     esi, esi
L8CC:
        inc     edx
        cmp     edx, edi
        jl      L73D
        jmp     LCB2
L8DA:
        mov     eax, dword ptr [g_007b94a0]
        mov     edx, eax
        and     edx, 0xff
        mov     dword ptr [ebp-0x30], edx
        mov     dword ptr [ebp-0x2c], esi
        fild    qword ptr [ebp-0x30]
        shr     eax, 0x8
        mov     ecx, eax
        and     ecx, 0xff
        fmul    dword ptr [ebp-0x38]
        mov     dword ptr [ebp-0x30], ecx
        mov     dword ptr [ebp-0x2c], esi
        shr     eax, 0x8
        fmul    dword ptr [g_0076e134]
        mov     edx, eax
        and     edx, 0xff
        shr     eax, 0x8
        fstp    dword ptr [ebp-0x48]
        mov     dword ptr [g_007b94a0], eax
        fild    qword ptr [ebp-0x30]
        mov     dword ptr [ebp-0x30], edx
        mov     dword ptr [ebp-0x2c], esi
        and     eax, 0xff
        fmul    dword ptr [ebp-0x3c]
        fmul    dword ptr [g_0076e134]
        fstp    dword ptr [ebp-0x4c]
        fild    qword ptr [ebp-0x30]
        mov     dword ptr [ebp-0x30], eax
        mov     dword ptr [ebp-0x2c], esi
        lea     eax, [ebp-0x50]
        fmul    dword ptr [ebp-0x40]
        mov     dword ptr [ebp+0x8], eax
        fmul    dword ptr [g_0076e134]
        fstp    dword ptr [ebp-0x50]
        fild    qword ptr [ebp-0x30]
        fmul    dword ptr [ebp-0x34]
        fmul    dword ptr [g_0076e134]
        fstp    dword ptr [ebp-0x44]
        fld     dword ptr [g_0076ed08]
        mov     esi, dword ptr [ebp+0x8]
        fld     dword ptr [esi+0xc]
        mov     ecx, dword ptr [esi+0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x18]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x18]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp+0xc], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x18]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x18]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp+0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp+0xc], ecx
        fld     dword ptr [esi+0x4]
        mov     ecx, dword ptr [esi+0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x18]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x18]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp+0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp+0xc], ecx
        mov     ecx, dword ptr [esi+0x8]
        fadd    dword ptr [esi+0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x18]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x18]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp+0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp+0xc], ecx
        mov     edx, dword ptr [ebp-0x4]
        mov     ecx, dword ptr [ebp+0xc]
        mov     dword ptr [edx+0xb0], edi
        pop     edi
        pop     esi
        mov     dword ptr [g_007b94a0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
LA60:
        cmp     dword ptr [ebx+0xac], esi
        jz      LEND
        mov     eax, dword ptr [ebx+0x14]
        mov     dword ptr [ebp-0x60], eax
        lea     eax, [ebp-0x50]
        mov     dword ptr [ebp-0x5c], eax
        mov     eax, dword ptr [ebx+0xa8]
        mov     dword ptr [ebp-0x58], eax
        mov     eax, dword ptr [ebp-0xc]
        xor     edi, edi
        cmp     eax, esi
        mov     dword ptr [ebp-0x48], 0xbf800000
        mov     dword ptr [ebp-0x4c], 0xbf800000
        mov     dword ptr [ebp-0x50], 0xbf800000
        mov     dword ptr [ebp-0x44], 0xbf800000
        jle     LCB2
        jmp     LAB1
LAAC:
        mov     ecx, dword ptr [ebp+0xc]
        xor     esi, esi
LAB1:
        mov     eax, dword ptr [g_007da600]
        mov     eax, dword ptr [eax]
        cmp     byte ptr [eax+edi], 0x0
        jz      LB39
        cmp     ecx, esi
        mov     dword ptr [ebp-0x50], 0x0
        mov     dword ptr [ebp-0x4c], 0x0
        mov     dword ptr [ebp-0x48], 0x0
        mov     dword ptr [ebp-0x44], 0x3f800000
        jle     LB39
        mov     ebx, dword ptr [ebp+0x8]
        mov     dword ptr [ebp-0x14], ecx
LAE4:
        mov     esi, dword ptr [ebx]
        fld     dword ptr [esi+0x8]
        fcomp   dword ptr [g_007b9550]
        __emit 0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6        /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     LB28
        mov     eax, dword ptr [esi+0x78]
        and     eax, dword ptr [ebp-0x10]
        jz      LB28
        test    al, 0x20
        jz      LB28
        mov     ecx, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx+0x1c]
        test    byte ptr [eax+0x4], 0x10
        jnz     LB1D
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+0xc]
        test    eax, eax
        jnz     LB28
LB1D:
        mov     edx, dword ptr [esi]
        lea     eax, [ebp-0x60]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x10]
LB28:
        mov     eax, dword ptr [ebp-0x14]
        add     ebx, 0x4
        dec     eax
        mov     dword ptr [ebp-0x14], eax
        jnz     LAE4
        mov     edx, dword ptr [ebp-0x8]
        xor     esi, esi
LB39:
        mov     ecx, dword ptr [ebp-0x60]
        add     ecx, 0xc
        cmp     edx, esi
        mov     dword ptr [ebp-0x60], ecx
        jz      LBA3
        mov     eax, dword ptr [edx+edi*4]
        mov     ecx, eax
        and     ecx, 0xff
        shr     eax, 0x8
        mov     dword ptr [ebp-0x30], ecx
        mov     ecx, eax
        mov     dword ptr [ebp-0x2c], esi
        fild    qword ptr [ebp-0x30]
        and     ecx, 0xff
        mov     dword ptr [ebp-0x28], ecx
        mov     dword ptr [ebp-0x24], esi
        fmul    dword ptr [g_0076ed0c]
        shr     eax, 0x8
        fild    qword ptr [ebp-0x28]
        and     eax, 0xff
        mov     dword ptr [ebp-0x38], eax
        mov     dword ptr [ebp-0x34], esi
        fmul    dword ptr [g_0076ed0c]
        fild    qword ptr [ebp-0x38]
        fmul    dword ptr [g_0076ed0c]
        fmul    dword ptr [ebp-0x50]
        fstp    dword ptr [ebp-0x50]
        fmul    dword ptr [ebp-0x4c]
        fstp    dword ptr [ebp-0x4c]
        fmul    dword ptr [ebp-0x48]
        fstp    dword ptr [ebp-0x48]
LBA3:
        lea     eax, [ebp-0x50]
        mov     dword ptr [ebp-0x14], eax
        fld     dword ptr [g_0076ed08]
        mov     esi, dword ptr [ebp-0x14]
        fld     dword ptr [esi+0xc]
        mov     ecx, dword ptr [esi+0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x1c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x1c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp-0x18], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x1c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x1c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x18]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp-0x18], ecx
        fld     dword ptr [esi+0x4]
        mov     ecx, dword ptr [esi+0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x1c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x1c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x18]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp-0x18], ecx
        mov     ecx, dword ptr [esi+0x8]
        fadd    dword ptr [esi+0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x1c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x1c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x18]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp-0x18], ecx
        mov     ecx, dword ptr [g_007d9914]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [ebp-0x18]
        mov     dword ptr [eax+edi*4], ecx
        mov     esi, dword ptr [ebp-0x58]
        mov     eax, dword ptr [ebp-0xc]
        add     esi, 0xc
        inc     edi
        cmp     edi, eax
        mov     dword ptr [ebp-0x58], esi
        jl      LAAC
        mov     ebx, dword ptr [ebp-0x4]
        xor     esi, esi
LCB2:
        mov     edx, dword ptr [g_007d9914]
        mov     eax, dword ptr [ebp-0x10]
        mov     dword ptr [ebx+0xb0], edx
LCC1:
        test    al, 0x40
        jz      LEND
        mov     edi, dword ptr [ebp+0xc]
        cmp     edi, esi
        jz      LEND
        jle     LEND
        mov     ebx, dword ptr [ebp+0x8]
LCD1:
        mov     esi, dword ptr [ebx]
        fld     dword ptr [esi+0x8]
        fcomp   dword ptr [g_007b9550]
        __emit 0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6        /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     LD06
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+0x1c]
        test    eax, eax
        jz      LD06
        mov     eax, dword ptr [esi+0x78]
        and     eax, dword ptr [ebp-0x10]
        jz      LD06
        test    al, 0x40
        jz      LD06
        mov     ecx, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx+0xa0]
LD06:
        add     ebx, 0x4
        dec     edi
        jnz     LCD1
LEND:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
