/*
 * FUN_5e018750 (1293 B) — DirectDraw wrapper: surface/format setup with FPU.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a588;   /* array base (indexed by param*0x20) */
extern int g_5e77a584;   /* array base */
extern int g_5e77a594;   /* array base */
extern int g_5e77a5e8;
extern int g_5e77a5ec;
extern int g_5e77a5fc;
extern int g_5e77a5e4;
extern int g_5e77a5f0;
extern int g_5e77a5f4;
extern int g_5e77a5f8;
extern float g_5e03628c;
extern float g_5e036294;
extern float g_5e0384e8;
extern int g_5e77a6e0;
extern int g_5e77a6f0;
extern int g_5e77a6b4;
extern int g_5e77a60c;
extern int g_5e77a6e4;
extern int g_5e77a6f4;
extern int g_5e77a6e8;
extern int g_5e77a6f8;
extern int g_5e77a618;
extern int g_5e77a624;
extern int g_5e77a6dc;
extern int g_5e77a6ec;
extern int g_5e77a600;
extern unsigned char g_5e77a580;
extern float g_5e77a530;
extern float g_5e77a534;
extern float g_5e77a58c; /* array base */
extern float g_5e77a630;
extern float g_5e77a538;
extern float g_5e77a540;
extern float g_5e77a590; /* array base */
extern float g_5e77a63c;
extern float g_5e77a544;
extern float g_5e77a54c;
extern float g_5e77a518; /* array base */
extern float g_5e77a650;
extern float g_5e77a550;
extern float g_5e77a558;
extern float g_5e77a524; /* array base */
extern float g_5e77a65c;
extern float g_5e77a634;
extern float g_5e77a638;
extern float g_5e77a640;
extern float g_5e77a644;
extern float g_5e77a654;
extern float g_5e77a658;
extern float g_5e77a660;
extern float g_5e77a664;
extern int g_5e77a610;
extern int g_5e77a614;
extern int g_5e77a61c;
extern int g_5e77a620;
extern int g_5e77a628;
extern int g_5e77a62c;
extern int g_5e77a604;
extern int g_5e77a608;

__declspec(naked) void FUN_5e018750(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp + 0xc]
        shl     esi, 0x5
        shl     ecx, 0x5
        mov     eax, dword ptr [esi + g_5e77a588]
        push    edi
        add     eax, 0xf
        sar     eax, 0x4
        mov     dword ptr [g_5e77a5e8], eax
        mov     edx, dword ptr [ecx + g_5e77a588]
        add     edx, 0xf
        sar     edx, 0x4
        sub     edx, eax
        mov     dword ptr [g_5e77a5ec], edx
        jz      L_c54
        mov     ebx, dword ptr [ecx + g_5e77a588]
        mov     edi, dword ptr [ecx + g_5e77a584]
        mov     ecx, dword ptr [esi + g_5e77a584]
        mov     edx, dword ptr [esi + g_5e77a588]
        shl     eax, 0x4
        sub     edi, ecx
        sub     ebx, edx
        sub     eax, edx
        add     ecx, 0x10
        imul    eax, edi
        imul    ecx, ebx
        lea     eax, [eax + ecx*1 - 1]
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, ebx
        shl     eax, 0x4
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp + 0xc], eax
        mov     eax, dword ptr [ebp - 0x4]
        xor     edx, edx
        test    eax, eax
        jz      L_810
        mov     ecx, dword ptr [ebp + 0xc]
        js      L_802
        test    ecx, 0xffff0000
        jnz     L_7fc
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_7fc
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_810
    L_7fc:
        xor     edx, edx
        div     ecx
        jmp     L_810
    L_802:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_810
        dec     eax
        add     edx, ecx
    L_810:
        mov     ecx, 0x5e77a5fc
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a5e4
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a5e8]
        mov     edx, dword ptr [esi + g_5e77a588]
        shl     ecx, 0x4
        sub     ecx, edx
        mov     edx, dword ptr [g_5e77a5e4]
        mov     eax, dword ptr [esi + g_5e77a584]
        mov     dword ptr [ebp + 0xc], ecx
        fild    dword ptr [ebp + 0xc]
        shl     edx, 0x4
        sub     edx, eax
        mov     eax, dword ptr [esi + g_5e77a594]
        fmul    dword ptr [g_5e03628c]
        mov     dword ptr [ebp + 0xc], edx
        and     eax, 0xff
        xor     ecx, ecx
        mov     dword ptr [ebp - 0x10], eax
        mov     dword ptr [ebp - 0xc], ecx
        fstp    dword ptr [ebp - 0x4]
        fild    dword ptr [ebp + 0xc]
        fmul    dword ptr [g_5e03628c]
        fstp    dword ptr [ebp + 0xc]
        fild    dword ptr [g_5e77a6e0]
        fmul    dword ptr [ebp + 0xc]
        fild    dword ptr [g_5e77a6f0]
        fmul    dword ptr [ebp - 0x4]
        faddp   st(1), st(0)
        fmul    dword ptr [g_5e036294]
        fiadd   dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     edx, dword ptr [g_5e77a6b4]
        mov     al, byte ptr [g_5e77a580]
        add     edx, 0x8000
        test    al, 0x2
        mov     dword ptr [g_5e77a60c], edx
        jnz     L_969
        fild    dword ptr [g_5e77a6e4]
        mov     eax, dword ptr [esi + g_5e77a594]
        mov     dword ptr [ebp - 0xc], ecx
        shr     eax, 0x8
        fmul    dword ptr [ebp + 0xc]
        fild    dword ptr [g_5e77a6f4]
        and     eax, 0xff
        mov     dword ptr [ebp - 0x10], eax
        fmul    dword ptr [ebp - 0x4]
        faddp   st(1), st(0)
        fmul    dword ptr [g_5e036294]
        fiadd   dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fild    dword ptr [g_5e77a6e8]
        mov     edx, dword ptr [g_5e77a6b4]
        mov     dword ptr [ebp - 0xc], ecx
        add     edx, 0x8000
        fmul    dword ptr [ebp + 0xc]
        fild    dword ptr [g_5e77a6f8]
        mov     dword ptr [g_5e77a618], edx
        mov     eax, dword ptr [esi + g_5e77a594]
        shr     eax, 0x10
        fmul    dword ptr [ebp - 0x4]
        and     eax, 0xff
        mov     dword ptr [ebp - 0x10], eax
        faddp   st(1), st(0)
        fmul    dword ptr [g_5e036294]
        fiadd   dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     edx, dword ptr [g_5e77a6b4]
        add     edx, 0x8000
        mov     dword ptr [g_5e77a624], edx
    L_969:
        test    byte ptr [g_5e77a580], 0x10
        jz      L_9c2
        fild    dword ptr [g_5e77a6dc]
        mov     eax, dword ptr [esi + g_5e77a594]
        mov     dword ptr [ebp - 0xc], ecx
        shr     eax, 0x18
        fmul    dword ptr [ebp + 0xc]
        fild    dword ptr [g_5e77a6ec]
        mov     dword ptr [ebp - 0x10], eax
        fmul    dword ptr [ebp - 0x4]
        faddp   st(1), st(0)
        fmul    dword ptr [g_5e036294]
        fiadd   dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     edx, dword ptr [g_5e77a6b4]
        add     edx, 0x8000
        mov     dword ptr [g_5e77a600], edx
    L_9c2:
        fld     dword ptr [g_5e77a530]
        fmul    dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x8]
        fadd    dword ptr [esi + g_5e77a58c]
        fld     dword ptr [g_5e77a534]
        fmul    dword ptr [ebp - 0x4]
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a630]
        fld     dword ptr [g_5e77a538]
        fmul    dword ptr [ebp + 0xc]
        fadd    dword ptr [esi + g_5e77a590]
        fld     dword ptr [g_5e77a540]
        fmul    dword ptr [ebp - 0x4]
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a63c]
        fld     dword ptr [g_5e77a544]
        fmul    dword ptr [ebp + 0xc]
        /* __emit: FADD [EAX*4+imm32] no-base SIB; MSVC6 re-bases via EBX (D8 84 83) */
        __emit 0xD8
        __emit 0x04
        __emit 0x85
        __emit 0x18
        __emit 0xA5
        __emit 0x77
        __emit 0x5E
        fld     dword ptr [g_5e77a54c]
        fmul    dword ptr [ebp - 0x4]
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a650]
        fld     dword ptr [g_5e77a550]
        fmul    dword ptr [ebp + 0xc]
        /* __emit: FADD [EAX*4+imm32] no-base SIB; MSVC6 re-bases via EBX (D8 84 83) */
        __emit 0xD8
        __emit 0x04
        __emit 0x85
        __emit 0x24
        __emit 0xA5
        __emit 0x77
        __emit 0x5E
        fld     dword ptr [g_5e77a558]
        fmul    dword ptr [ebp - 0x4]
        cmp     dword ptr [g_5e77a5ec], 0x1
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a65c]
        jle     L_c54
        cmp     edi, ecx
        jl      L_a92
        cmp     edi, ebx
        jge     L_a70
        shl     edi, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], edi
        jmp     L_b2f
    L_a70:
        lea     eax, [ebx + ebx*1]
        cmp     edi, eax
        jge     L_acb
        sub     edi, ebx
        mov     ecx, 0x1
        shl     edi, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], edi
        jmp     L_b2f
    L_a92:
        lea     eax, [edi + ebx*1]
        cmp     eax, ecx
        jl      L_aaf
        or      ecx, 0xffffffff
        shl     eax, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], eax
        jmp     L_b2f
    L_aaf:
        lea     eax, [edi + ebx*2]
        cmp     eax, ecx
        jl      L_acb
        mov     ecx, 0xfffffffe
        shl     eax, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], eax
        jmp     L_b2f
    L_acb:
        mov     ecx, dword ptr [ebp - 0x8]
        shl     edi, 0x4
        mov     dword ptr [ebp + 0x8], ecx
        mov     dword ptr [ebp + 0xc], edi
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      L_b1b
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_b0d
        test    ecx, 0xffff0000
        jnz     L_b07
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_b07
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_b1b
    L_b07:
        xor     edx, edx
        div     ecx
        jmp     L_b1b
    L_b0d:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_b1b
        dec     eax
        add     edx, ecx
    L_b1b:
        mov     ecx, 0x5e77a5f4
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a5f0
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a5f0]
    L_b2f:
        mov     eax, dword ptr [ebp - 0x8]
        mov     edi, dword ptr [g_5e77a5fc]
        mov     edx, dword ptr [g_5e77a6e0]
        mov     dword ptr [g_5e77a5f8], eax
        sub     edi, eax
        mov     eax, ecx
        imul    eax, edx
        mov     esi, dword ptr [g_5e77a6f0]
        mov     bl, byte ptr [g_5e77a580]
        add     eax, esi
        mov     dword ptr [g_5e77a5fc], edi
        mov     dword ptr [g_5e77a610], eax
        add     eax, edx
        test    bl, 0x2
        mov     dword ptr [g_5e77a614], eax
        jnz     L_bad
        mov     edx, dword ptr [g_5e77a6e4]
        mov     eax, ecx
        imul    eax, edx
        mov     edi, dword ptr [g_5e77a6f4]
        mov     esi, dword ptr [g_5e77a6f8]
        add     eax, edi
        mov     dword ptr [g_5e77a61c], eax
        add     eax, edx
        mov     edx, dword ptr [g_5e77a6e8]
        mov     dword ptr [g_5e77a620], eax
        mov     eax, ecx
        imul    eax, edx
        add     eax, esi
        mov     dword ptr [g_5e77a628], eax
        add     eax, edx
        mov     dword ptr [g_5e77a62c], eax
    L_bad:
        test    bl, 0x10
        jz      L_bd0
        mov     eax, dword ptr [g_5e77a6dc]
        mov     edx, dword ptr [g_5e77a6ec]
        imul    ecx, eax
        add     ecx, edx
        mov     dword ptr [g_5e77a604], ecx
        add     ecx, eax
        mov     dword ptr [g_5e77a608], ecx
    L_bd0:
        fild    dword ptr [g_5e77a5f0]
        fld     st(0)
        fmul    dword ptr [g_5e77a530]
        fadd    dword ptr [g_5e77a534]
        fst     dword ptr [g_5e77a634]
        fadd    dword ptr [g_5e77a530]
        fstp    dword ptr [g_5e77a638]
        fld     st(0)
        fmul    dword ptr [g_5e77a538]
        fadd    dword ptr [g_5e77a540]
        fst     dword ptr [g_5e77a640]
        fadd    dword ptr [g_5e77a538]
        fstp    dword ptr [g_5e77a644]
        fld     st(0)
        fmul    dword ptr [g_5e77a544]
        fadd    dword ptr [g_5e77a54c]
        fst     dword ptr [g_5e77a654]
        fadd    dword ptr [g_5e77a544]
        fstp    dword ptr [g_5e77a658]
        fmul    dword ptr [g_5e77a550]
        fadd    dword ptr [g_5e77a558]
        fst     dword ptr [g_5e77a660]
        fadd    dword ptr [g_5e77a550]
        fstp    dword ptr [g_5e77a664]
    L_c54:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
