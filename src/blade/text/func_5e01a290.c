/*
 * FUN_5e01a290 (1230 B) — DirectDraw wrapper: surface/format setup with alpha.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a588;   /* array base */
extern int g_5e77a584;   /* array base */
extern int g_5e77a594;   /* array base */
extern int g_5e77a598;   /* array base */
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
extern int g_5e77a704;
extern int g_5e77a6fc;
extern int g_5e77a700;
extern int g_5e77a680;
extern float g_5e77a530;
extern float g_5e77a534;
extern float g_5e77a58c; /* array base */
extern float g_5e77a630;
extern int g_5e77a610;
extern int g_5e77a614;
extern int g_5e77a61c;
extern int g_5e77a620;
extern int g_5e77a628;
extern int g_5e77a62c;
extern int g_5e77a604;
extern int g_5e77a608;
extern int g_5e77a684;
extern int g_5e77a688;
extern float g_5e77a634;
extern float g_5e77a638;

__declspec(naked) void FUN_5e01a290(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
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
        jz      L_a755
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
        mov     dword ptr [ebp + 0xc], eax
        mov     eax, ebx
        shl     eax, 0x4
        mov     dword ptr [ebp - 0x4], eax
        mov     dword ptr [ebp + 0x8], eax
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      L_a350
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_a342
        test    ecx, 0xffff0000
        jnz     L_a33c
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_a33c
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_a350
    L_a33c:
        xor     edx, edx
        div     ecx
        jmp     L_a350
    L_a342:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_a350
        dec     eax
        add     edx, ecx
    L_a350:
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
        mov     dword ptr [ebp + 0x8], ecx
        fild    dword ptr [ebp + 0x8]
        shl     edx, 0x4
        sub     edx, eax
        mov     eax, dword ptr [esi + g_5e77a594]
        fmul    dword ptr [g_5e03628c]
        mov     dword ptr [ebp + 0x8], edx
        and     eax, 0xff
        xor     edx, edx
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x8], edx
        fstp    dword ptr [ebp + 0xc]
        fild    dword ptr [ebp + 0x8]
        fmul    dword ptr [g_5e03628c]
        fstp    dword ptr [ebp + 0x8]
        fild    dword ptr [g_5e77a6e0]
        fmul    dword ptr [ebp + 0x8]
        fild    dword ptr [g_5e77a6f0]
        fmul    dword ptr [ebp + 0xc]
        faddp   st(1), st(0)
        fmul    dword ptr [g_5e036294]
        fiadd   dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     ecx, dword ptr [g_5e77a6b4]
        mov     al, byte ptr [g_5e77a580]
        add     ecx, 0x8000
        test    al, 0x2
        mov     dword ptr [g_5e77a60c], ecx
        jnz     L_a4a9
        fild    dword ptr [g_5e77a6e4]
        mov     eax, dword ptr [esi + g_5e77a594]
        mov     dword ptr [ebp - 0x8], edx
        shr     eax, 0x8
        fmul    dword ptr [ebp + 0x8]
        fild    dword ptr [g_5e77a6f4]
        and     eax, 0xff
        mov     dword ptr [ebp - 0xc], eax
        fmul    dword ptr [ebp + 0xc]
        faddp   st(1), st(0)
        fmul    dword ptr [g_5e036294]
        fiadd   dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fild    dword ptr [g_5e77a6e8]
        mov     ecx, dword ptr [g_5e77a6b4]
        mov     dword ptr [ebp - 0x8], edx
        add     ecx, 0x8000
        fmul    dword ptr [ebp + 0x8]
        fild    dword ptr [g_5e77a6f8]
        mov     dword ptr [g_5e77a618], ecx
        mov     eax, dword ptr [esi + g_5e77a594]
        shr     eax, 0x10
        fmul    dword ptr [ebp + 0xc]
        and     eax, 0xff
        mov     dword ptr [ebp - 0xc], eax
        faddp   st(1), st(0)
        fmul    dword ptr [g_5e036294]
        fiadd   dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     ecx, dword ptr [g_5e77a6b4]
        add     ecx, 0x8000
        mov     dword ptr [g_5e77a624], ecx
    L_a4a9:
        test    byte ptr [g_5e77a580], 0x10
        jz      L_a502
        fild    dword ptr [g_5e77a6dc]
        mov     eax, dword ptr [esi + g_5e77a594]
        mov     dword ptr [ebp - 0x8], edx
        shr     eax, 0x18
        fmul    dword ptr [ebp + 0x8]
        fild    dword ptr [g_5e77a6ec]
        mov     dword ptr [ebp - 0xc], eax
        fmul    dword ptr [ebp + 0xc]
        faddp   st(1), st(0)
        fmul    dword ptr [g_5e036294]
        fiadd   dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     ecx, dword ptr [g_5e77a6b4]
        add     ecx, 0x8000
        mov     dword ptr [g_5e77a600], ecx
    L_a502:
        cmp     dword ptr [g_5e77a704], edx
        jnz     L_a55e
        fild    dword ptr [g_5e77a6fc]
        mov     eax, dword ptr [esi + g_5e77a598]
        mov     ecx, 0xff
        shr     eax, 0x18
        fmul    dword ptr [ebp + 0x8]
        fild    dword ptr [g_5e77a700]
        sub     ecx, eax
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [ebp - 0xc], ecx
        fmul    dword ptr [ebp + 0xc]
        faddp   st(1), st(0)
        fmul    dword ptr [g_5e036294]
        fiadd   dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     eax, dword ptr [g_5e77a6b4]
        add     eax, 0x8000
        mov     dword ptr [g_5e77a680], eax
    L_a55e:
        fld     dword ptr [g_5e77a530]
        fmul    dword ptr [ebp + 0x8]
        mov     eax, dword ptr [g_5e77a5ec]
        mov     ecx, 0x1
        cmp     eax, ecx
        fadd    dword ptr [esi + g_5e77a58c]
        fld     dword ptr [g_5e77a534]
        fmul    dword ptr [ebp + 0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a630]
        jle     L_a755
        cmp     edi, edx
        jl      L_a5cb
        cmp     edi, ebx
        jge     L_a5ae
        xor     ecx, ecx
        shl     edi, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], edi
        jmp     L_a66b
    L_a5ae:
        lea     eax, [ebx + ebx*1]
        cmp     edi, eax
        jge     L_a605
        sub     edi, ebx
        mov     dword ptr [g_5e77a5f0], ecx
        shl     edi, 0x4
        mov     dword ptr [g_5e77a5f4], edi
        jmp     L_a66b
    L_a5cb:
        lea     eax, [edi + ebx*1]
        cmp     eax, edx
        jl      L_a5e8
        or      ecx, 0xffffffff
        shl     eax, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], eax
        jmp     L_a66b
    L_a5e8:
        lea     ebx, [edi + ebx*2]
        cmp     ebx, edx
        jl      L_a605
        mov     ecx, 0xfffffffe
        shl     ebx, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], ebx
        jmp     L_a66b
    L_a605:
        mov     ecx, dword ptr [ebp - 0x4]
        shl     edi, 0x4
        mov     dword ptr [ebp + 0x8], ecx
        mov     dword ptr [ebp + 0xc], edi
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      L_a655
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_a647
        test    ecx, 0xffff0000
        jnz     L_a641
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_a641
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_a655
    L_a641:
        xor     edx, edx
        div     ecx
        jmp     L_a655
    L_a647:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_a655
        dec     eax
        add     edx, ecx
    L_a655:
        mov     ecx, 0x5e77a5f4
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a5f0
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a5f0]
        xor     edx, edx
    L_a66b:
        mov     eax, dword ptr [ebp - 0x4]
        mov     ebx, dword ptr [g_5e77a5fc]
        mov     esi, dword ptr [g_5e77a6e0]
        mov     dword ptr [g_5e77a5f8], eax
        sub     ebx, eax
        mov     eax, ecx
        imul    eax, esi
        mov     edi, dword ptr [g_5e77a6f0]
        mov     dword ptr [g_5e77a5fc], ebx
        mov     bl, byte ptr [g_5e77a580]
        add     eax, edi
        mov     dword ptr [g_5e77a610], eax
        add     eax, esi
        test    bl, 0x2
        mov     dword ptr [g_5e77a614], eax
        jnz     L_a6e9
        mov     esi, dword ptr [g_5e77a6e4]
        mov     eax, ecx
        imul    eax, esi
        mov     edi, dword ptr [g_5e77a6f4]
        add     eax, edi
        mov     edi, dword ptr [g_5e77a6f8]
        mov     dword ptr [g_5e77a61c], eax
        add     eax, esi
        mov     esi, dword ptr [g_5e77a6e8]
        mov     dword ptr [g_5e77a620], eax
        mov     eax, ecx
        imul    eax, esi
        add     eax, edi
        mov     dword ptr [g_5e77a628], eax
        add     eax, esi
        mov     dword ptr [g_5e77a62c], eax
    L_a6e9:
        test    bl, 0x10
        jz      L_a70b
        mov     esi, dword ptr [g_5e77a6dc]
        mov     eax, ecx
        imul    eax, esi
        add     eax, dword ptr [g_5e77a6ec]
        mov     dword ptr [g_5e77a604], eax
        add     eax, esi
        mov     dword ptr [g_5e77a608], eax
    L_a70b:
        cmp     dword ptr [g_5e77a704], edx
        jnz     L_a731
        mov     eax, dword ptr [g_5e77a6fc]
        mov     edx, dword ptr [g_5e77a700]
        imul    ecx, eax
        add     ecx, edx
        mov     dword ptr [g_5e77a684], ecx
        add     ecx, eax
        mov     dword ptr [g_5e77a688], ecx
    L_a731:
        fild    dword ptr [g_5e77a5f0]
        fmul    dword ptr [g_5e77a530]
        fadd    dword ptr [g_5e77a534]
        fst     dword ptr [g_5e77a634]
        fadd    dword ptr [g_5e77a530]
        fstp    dword ptr [g_5e77a638]
    L_a755:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
