/*
 * FUN_5e017b80 (1224 B) — line/segment math update with FPU + div.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a5e8;   /* DAT_5e77a5e8 */
extern int g_5e77a5ec;   /* DAT_5e77a5ec */
extern int g_5e77a5fc;   /* DAT_5e77a5fc */
extern int g_5e77a5e4;   /* DAT_5e77a5e4 */
extern int g_5e77a5f0;   /* DAT_5e77a5f0 */
extern int g_5e77a5f4;   /* DAT_5e77a5f4 */
extern int g_5e77a5f8;   /* DAT_5e77a5f8 */
extern int g_5e77a6b4;   /* DAT_5e77a6b4 */
extern int g_5e77a580;   /* DAT_5e77a580 */
extern int g_5e77a60c;   /* DAT_5e77a60c */
extern int g_5e77a618;   /* DAT_5e77a618 */
extern int g_5e77a624;   /* DAT_5e77a624 */
extern int g_5e77a600;   /* DAT_5e77a600 */
extern int g_5e77a610;   /* DAT_5e77a610 */
extern int g_5e77a614;   /* DAT_5e77a614 */
extern int g_5e77a61c;   /* DAT_5e77a61c */
extern int g_5e77a620;   /* DAT_5e77a620 */
extern int g_5e77a628;   /* DAT_5e77a628 */
extern int g_5e77a62c;   /* DAT_5e77a62c */
extern int g_5e77a604;   /* DAT_5e77a604 */
extern int g_5e77a608;   /* DAT_5e77a608 */
extern int g_5e77a6e0;   /* DAT_5e77a6e0 */
extern int g_5e77a6f0;   /* DAT_5e77a6f0 */
extern int g_5e77a6e4;   /* DAT_5e77a6e4 */
extern int g_5e77a6f4;   /* DAT_5e77a6f4 */
extern int g_5e77a6e8;   /* DAT_5e77a6e8 */
extern int g_5e77a6f8;   /* DAT_5e77a6f8 */
extern int g_5e77a6dc;   /* DAT_5e77a6dc */
extern int g_5e77a6ec;   /* DAT_5e77a6ec */
extern float g_5e03628c; /* DAT_5e03628c */
extern float g_5e036294; /* DAT_5e036294 */
extern float g_5e0384e8; /* DAT_5e0384e8 */
extern float g_5e77a564; /* DAT_5e77a564 */
extern float g_5e77a56c; /* DAT_5e77a56c */
extern float g_5e77a568; /* DAT_5e77a568 */
extern float g_5e77a570; /* DAT_5e77a570 */
extern float g_5e77a530; /* DAT_5e77a530 */
extern float g_5e77a534; /* DAT_5e77a534 */
extern float g_5e77a668; /* DAT_5e77a668 */
extern float g_5e77a674; /* DAT_5e77a674 */
extern float g_5e77a630; /* DAT_5e77a630 */
extern float g_5e77a66c; /* DAT_5e77a66c */
extern float g_5e77a670; /* DAT_5e77a670 */
extern float g_5e77a678; /* DAT_5e77a678 */
extern float g_5e77a67c; /* DAT_5e77a67c */
extern float g_5e77a634; /* DAT_5e77a634 */
extern float g_5e77a638; /* DAT_5e77a638 */

__declspec(naked) void FUN_5e017b80(void)
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
        mov     eax, dword ptr [esi + 0x5e77a588]
        push    edi
        add     eax, 0xf
        sar     eax, 0x4
        mov     dword ptr [g_5e77a5e8], eax
        mov     edx, dword ptr [ecx + 0x5e77a588]
        add     edx, 0xf
        sar     edx, 0x4
        sub     edx, eax
        mov     dword ptr [g_5e77a5ec], edx
        jz      L_1803f
        mov     ebx, dword ptr [ecx + 0x5e77a588]
        mov     edi, dword ptr [ecx + 0x5e77a584]
        mov     ecx, dword ptr [esi + 0x5e77a584]
        mov     edx, dword ptr [esi + 0x5e77a588]
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
        jz      L_17c40
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_17c32
        test    ecx, 0xffff0000
        jnz     L_17c2c
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_17c2c
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_17c40
    L_17c2c:
        xor     edx, edx
        div     ecx
        jmp     L_17c40
    L_17c32:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_17c40
        dec     eax
        add     edx, ecx
    L_17c40:
        mov     ecx, 0x5e77a5fc
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a5e4
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a5e8]
        mov     edx, dword ptr [esi + 0x5e77a588]
        shl     ecx, 0x4
        sub     ecx, edx
        mov     edx, dword ptr [g_5e77a5e4]
        mov     eax, dword ptr [esi + 0x5e77a584]
        mov     dword ptr [ebp + 0x8], ecx
        fild    dword ptr [ebp + 0x8]
        shl     edx, 0x4
        sub     edx, eax
        mov     eax, dword ptr [esi + 0x5e77a594]
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
        jnz     L_17d99
        fild    dword ptr [g_5e77a6e4]
        mov     eax, dword ptr [esi + 0x5e77a594]
        mov     dword ptr [ebp - 0x8], ecx
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
        mov     edx, dword ptr [g_5e77a6b4]
        mov     dword ptr [ebp - 0x8], ecx
        add     edx, 0x8000
        fmul    dword ptr [ebp + 0x8]
        fild    dword ptr [g_5e77a6f8]
        mov     dword ptr [g_5e77a618], edx
        mov     eax, dword ptr [esi + 0x5e77a594]
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
    L_17d99:
        test    byte ptr [g_5e77a580], 0x10
        jz      L_17df2
        fild    dword ptr [g_5e77a6dc]
        mov     eax, dword ptr [esi + 0x5e77a594]
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
    L_17df2:
        fld     dword ptr [g_5e77a564]
        fmul    dword ptr [ebp + 0x8]
        cmp     dword ptr [g_5e77a5ec], 0x1
        fadd    dword ptr [esi + 0x5e77a59c]
        fld     dword ptr [g_5e77a56c]
        fmul    dword ptr [ebp + 0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a668]
        fld     dword ptr [g_5e77a568]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [esi + 0x5e77a5a0]
        fld     dword ptr [g_5e77a570]
        fmul    dword ptr [ebp + 0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a674]
        fld     dword ptr [g_5e77a530]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [esi + 0x5e77a58c]
        fld     dword ptr [g_5e77a534]
        fmul    dword ptr [ebp + 0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a630]
        jle     L_1803f
        cmp     edi, ecx
        jl      L_17e9d
        cmp     edi, ebx
        jge     L_17e7b
        shl     edi, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], edi
        jmp     L_17f3a
    L_17e7b:
        lea     eax, [ebx + ebx*1]
        cmp     edi, eax
        jge     L_17ed6
        sub     edi, ebx
        mov     ecx, 0x1
        shl     edi, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], edi
        jmp     L_17f3a
    L_17e9d:
        lea     eax, [edi + ebx*1]
        cmp     eax, ecx
        jl      L_17eba
        or      ecx, 0xffffffff
        shl     eax, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], eax
        jmp     L_17f3a
    L_17eba:
        lea     eax, [edi + ebx*2]
        cmp     eax, ecx
        jl      L_17ed6
        mov     ecx, 0xfffffffe
        shl     eax, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], eax
        jmp     L_17f3a
    L_17ed6:
        mov     ecx, dword ptr [ebp - 0x4]
        shl     edi, 0x4
        mov     dword ptr [ebp + 0x8], ecx
        mov     dword ptr [ebp + 0xc], edi
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      L_17f26
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_17f18
        test    ecx, 0xffff0000
        jnz     L_17f12
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_17f12
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_17f26
    L_17f12:
        xor     edx, edx
        div     ecx
        jmp     L_17f26
    L_17f18:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_17f26
        dec     eax
        add     edx, ecx
    L_17f26:
        mov     ecx, 0x5e77a5f4
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a5f0
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a5f0]
    L_17f3a:
        mov     eax, dword ptr [ebp - 0x4]
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
        jnz     L_17fb8
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
    L_17fb8:
        test    bl, 0x10
        jz      L_17fdb
        mov     eax, dword ptr [g_5e77a6dc]
        mov     edx, dword ptr [g_5e77a6ec]
        imul    ecx, eax
        add     ecx, edx
        mov     dword ptr [g_5e77a604], ecx
        add     ecx, eax
        mov     dword ptr [g_5e77a608], ecx
    L_17fdb:
        fild    dword ptr [g_5e77a5f0]
        fld     st(0)
        fmul    dword ptr [g_5e77a564]
        fadd    dword ptr [g_5e77a56c]
        fst     dword ptr [g_5e77a66c]
        fadd    dword ptr [g_5e77a564]
        fstp    dword ptr [g_5e77a670]
        fld     st(0)
        fmul    dword ptr [g_5e77a568]
        fadd    dword ptr [g_5e77a570]
        fst     dword ptr [g_5e77a678]
        fadd    dword ptr [g_5e77a568]
        fstp    dword ptr [g_5e77a67c]
        fmul    dword ptr [g_5e77a530]
        fadd    dword ptr [g_5e77a534]
        fst     dword ptr [g_5e77a634]
        fadd    dword ptr [g_5e77a530]
        fstp    dword ptr [g_5e77a638]
    L_1803f:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
