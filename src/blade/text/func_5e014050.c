/*
 * FUN_5e014050 (1096 B) — DirectDraw caps/format computation (FPU variant).
 *
 * __cdecl, RET 0x8 (2 stack params). Heavy FPU + division.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a588;   /* DAT_5e77a588 (int array, 32-byte stride) */
extern int g_5e77a584;   /* DAT_5e77a584 (int array) */
extern float g_5e77a58c; /* DAT_5e77a58c (float array) */
extern int g_5e77a594;   /* DAT_5e77a594 (int array) */
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
extern int g_5e77a6e4;
extern int g_5e77a6f4;
extern int g_5e77a6e8;
extern int g_5e77a6f8;
extern int g_5e77a6dc;
extern int g_5e77a6ec;
extern int g_5e77a6b4;
extern int g_5e77a580;
extern int g_5e77a60c;
extern int g_5e77a618;
extern int g_5e77a624;
extern int g_5e77a600;
extern int g_5e77a610;
extern int g_5e77a614;
extern int g_5e77a61c;
extern int g_5e77a620;
extern int g_5e77a628;
extern int g_5e77a62c;
extern int g_5e77a604;
extern int g_5e77a608;
extern float g_5e77a530;
extern float g_5e77a534;
extern float g_5e77a630;
extern float g_5e77a634;
extern float g_5e77a638;

__declspec(naked) void __cdecl FUN_5e014050(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp + 0xc]
        shl     esi, 5
        shl     ecx, 5
        mov     eax, dword ptr [esi + g_5e77a588]
        push    edi
        add     eax, 0xf
        sar     eax, 4
        mov     dword ptr [g_5e77a5e8], eax
        mov     edx, dword ptr [ecx + g_5e77a588]
        add     edx, 0xf
        sar     edx, 4
        sub     edx, eax
        mov     dword ptr [g_5e77a5ec], edx
        jz      L_1448f
        mov     ebx, dword ptr [ecx + g_5e77a588]
        mov     edi, dword ptr [ecx + g_5e77a584]
        mov     ecx, dword ptr [esi + g_5e77a584]
        mov     edx, dword ptr [esi + g_5e77a588]
        shl     eax, 4
        sub     edi, ecx
        sub     ebx, edx
        sub     eax, edx
        add     ecx, 0x10
        imul    eax, edi
        imul    ecx, ebx
        lea     eax, [eax + ecx - 1]
        mov     dword ptr [ebp + 0xc], eax
        mov     eax, ebx
        shl     eax, 4
        mov     dword ptr [ebp - 4], eax
        mov     dword ptr [ebp + 0x8], eax
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      L_14110
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_14102
        test    ecx, 0xffff0000
        jnz     L_140fc
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_140fc
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_14110
    L_140fc:
        xor     edx, edx
        div     ecx
        jmp     L_14110
    L_14102:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_14110
        dec     eax
        add     edx, ecx
    L_14110:
        mov     ecx, offset g_5e77a5fc
        mov     dword ptr [ecx], edx
        mov     ecx, offset g_5e77a5e4
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a5e8]
        mov     edx, dword ptr [esi + g_5e77a588]
        shl     ecx, 4
        sub     ecx, edx
        mov     edx, dword ptr [g_5e77a5e4]
        mov     eax, dword ptr [esi + g_5e77a584]
        mov     dword ptr [ebp + 0x8], ecx
        fild    dword ptr [ebp + 0x8]
        shl     edx, 4
        sub     edx, eax
        mov     eax, dword ptr [esi + g_5e77a594]
        fmul    dword ptr [g_5e03628c]
        mov     dword ptr [ebp + 0x8], edx
        and     eax, 0xff
        xor     ecx, ecx
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x8], ecx
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
        mov     edx, dword ptr [g_5e77a6b4]
        mov     al, byte ptr [g_5e77a580]
        add     edx, 0x8000
        test    al, 0x2
        mov     dword ptr [g_5e77a60c], edx
        jnz     L_14269
        fild    dword ptr [g_5e77a6e4]
        mov     eax, dword ptr [esi + g_5e77a594]
        mov     dword ptr [ebp - 0x8], ecx
        shr     eax, 8
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
        mov     edx, dword ptr [g_5e77a6b4]
        mov     dword ptr [ebp - 0x8], ecx
        add     edx, 0x8000
        fmul    dword ptr [ebp + 0x8]
        fild    dword ptr [g_5e77a6f8]
        mov     dword ptr [g_5e77a618], edx
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
        mov     edx, dword ptr [g_5e77a6b4]
        add     edx, 0x8000
        mov     dword ptr [g_5e77a624], edx
    L_14269:
        test    byte ptr [g_5e77a580], 0x10
        jz      L_142c2
        fild    dword ptr [g_5e77a6dc]
        mov     eax, dword ptr [esi + g_5e77a594]
        mov     dword ptr [ebp - 0x8], ecx
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
        mov     edx, dword ptr [g_5e77a6b4]
        add     edx, 0x8000
        mov     dword ptr [g_5e77a600], edx
    L_142c2:
        fld     dword ptr [g_5e77a530]
        fmul    dword ptr [ebp + 0x8]
        cmp     dword ptr [g_5e77a5ec], 1
        fadd    dword ptr [esi + g_5e77a58c]
        fld     dword ptr [g_5e77a534]
        fmul    dword ptr [ebp + 0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a630]
        jle     L_1448f
        cmp     edi, ecx
        jl      L_1432d
        cmp     edi, ebx
        jge     L_1430b
        shl     edi, 4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], edi
        jmp     L_143ca
    L_1430b:
        lea     eax, [ebx + ebx]
        cmp     edi, eax
        jge     L_14366
        sub     edi, ebx
        mov     ecx, 1
        shl     edi, 4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], edi
        jmp     L_143ca
    L_1432d:
        lea     eax, [edi + ebx]
        cmp     eax, ecx
        jl      L_1434a
        or      ecx, 0xffffffff
        shl     eax, 4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], eax
        jmp     L_143ca
    L_1434a:
        lea     eax, [edi + ebx*2]
        cmp     eax, ecx
        jl      L_14366
        mov     ecx, 0xfffffffe
        shl     eax, 4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], eax
        jmp     L_143ca
    L_14366:
        mov     ecx, dword ptr [ebp - 4]
        shl     edi, 4
        mov     dword ptr [ebp + 0x8], ecx
        mov     dword ptr [ebp + 0xc], edi
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      L_143b6
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_143a8
        test    ecx, 0xffff0000
        jnz     L_143a2
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_143a2
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_143b6
    L_143a2:
        xor     edx, edx
        div     ecx
        jmp     L_143b6
    L_143a8:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_143b6
        dec     eax
        add     edx, ecx
    L_143b6:
        mov     ecx, offset g_5e77a5f4
        mov     dword ptr [ecx], edx
        mov     ecx, offset g_5e77a5f0
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a5f0]
    L_143ca:
        mov     eax, dword ptr [ebp - 4]
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
        jnz     L_14448
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
    L_14448:
        test    bl, 0x10
        jz      L_1446b
        mov     eax, dword ptr [g_5e77a6dc]
        mov     edx, dword ptr [g_5e77a6ec]
        imul    ecx, eax
        add     ecx, edx
        mov     dword ptr [g_5e77a604], ecx
        add     ecx, eax
        mov     dword ptr [g_5e77a608], ecx
    L_1446b:
        fild    dword ptr [g_5e77a5f0]
        fmul    dword ptr [g_5e77a530]
        fadd    dword ptr [g_5e77a534]
        fst     dword ptr [g_5e77a634]
        fadd    dword ptr [g_5e77a530]
        fstp    dword ptr [g_5e77a638]
    L_1448f:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
