/*
 * FUN_5e014fc0 (714 B) — DirectDraw surface format/creation body.
 * Fixed-point division (DIV/IDIV), FPU interpolation, global state.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a5e8;      /* DAT_5e77a5e8 */
extern int g_5e77a5ec;      /* DAT_5e77a5ec */
extern int g_5e77a5fc;      /* DAT_5e77a5fc */
extern int g_5e77a5e4;      /* DAT_5e77a5e4 */
extern int g_5e77a5f0;      /* DAT_5e77a5f0 */
extern int g_5e77a5f4;      /* DAT_5e77a5f4 */
extern int g_5e77a5f8;      /* DAT_5e77a5f8 */

extern int g_5e77a588[];    /* int array (indexed by esi/ecx) */
extern int g_5e77a584[];    /* int array */

extern float g_5e03628c;    /* DAT_5e03628c */
extern float g_5e77a564;    /* DAT_5e77a564 */
extern float g_5e77a56c;    /* DAT_5e77a56c */
extern float g_5e77a568;    /* DAT_5e77a568 */
extern float g_5e77a570;    /* DAT_5e77a570 */
extern float g_5e77a530;    /* DAT_5e77a530 */
extern float g_5e77a534;    /* DAT_5e77a534 */
extern float g_5e77a668;    /* DAT_5e77a668 */
extern float g_5e77a674;    /* DAT_5e77a674 */
extern float g_5e77a630;    /* DAT_5e77a630 */
extern float g_5e77a66c;    /* DAT_5e77a66c */
extern float g_5e77a670;    /* DAT_5e77a670 */
extern float g_5e77a678;    /* DAT_5e77a678 */
extern float g_5e77a67c;    /* DAT_5e77a67c */
extern float g_5e77a634;    /* DAT_5e77a634 */
extern float g_5e77a638;    /* DAT_5e77a638 */

extern float g_5e77a59c[];  /* float array */
extern float g_5e77a5a0[];  /* float array */
extern float g_5e77a58c[];  /* float array */

__declspec(naked) void __stdcall FUN_5e014fc0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
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
        jz      L_5281
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
        lea     eax, [eax + ecx - 1]
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, ebx
        shl     eax, 0x4
        mov     dword ptr [ebp + 0x8], eax
        mov     dword ptr [ebp + 0xc], eax
        mov     eax, dword ptr [ebp - 0x4]
        xor     edx, edx
        test    eax, eax
        jz      L_507e
        mov     ecx, dword ptr [ebp + 0xc]
        js      L_5070
        test    ecx, 0xffff0000
        jnz     L_506a
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_506a
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_507e
    L_506a:
        xor     edx, edx
        div     ecx
        jmp     L_507e
    L_5070:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_507e
        dec     eax
        add     edx, ecx
    L_507e:
        mov     ecx, 0x5e77a5fc
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a5e4
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a5e8]
        mov     edx, dword ptr [esi + g_5e77a588]
        mov     eax, dword ptr [esi + g_5e77a584]
        shl     ecx, 0x4
        sub     ecx, edx
        mov     edx, dword ptr [g_5e77a5e4]
        mov     dword ptr [ebp + 0xc], ecx
        mov     ecx, dword ptr [g_5e77a5ec]
        fild    dword ptr [ebp + 0xc]
        shl     edx, 0x4
        sub     edx, eax
        mov     eax, 0x1
        fmul    dword ptr [g_5e03628c]
        mov     dword ptr [ebp + 0xc], edx
        cmp     ecx, eax
        fild    dword ptr [ebp + 0xc]
        fmul    dword ptr [g_5e03628c]
        fld     dword ptr [g_5e77a564]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + g_5e77a59c]
        fld     dword ptr [g_5e77a56c]
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a668]
        fld     dword ptr [g_5e77a568]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + g_5e77a5a0]
        fld     dword ptr [g_5e77a570]
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a674]
        fld     dword ptr [g_5e77a530]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + g_5e77a58c]
        fld     dword ptr [g_5e77a534]
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a630]
        fstp    st(0)
        fstp    st(0)
        jle     L_5281
        test    edi, edi
        jl      L_5173
        cmp     edi, ebx
        jge     L_5157
        shl     edi, 0x4
        mov     dword ptr [g_5e77a5f0], 0
        mov     dword ptr [g_5e77a5f4], edi
        jmp     L_5207
    L_5157:
        lea     ecx, [ebx + ebx]
        cmp     edi, ecx
        jge     L_51a9
        sub     edi, ebx
        mov     dword ptr [g_5e77a5f0], eax
        shl     edi, 0x4
        mov     dword ptr [g_5e77a5f4], edi
        jmp     L_5207
    L_5173:
        lea     eax, [edi + ebx]
        test    eax, eax
        jl      L_518e
        shl     eax, 0x4
        mov     dword ptr [g_5e77a5f0], 0xffffffff
        mov     dword ptr [g_5e77a5f4], eax
        jmp     L_5207
    L_518e:
        lea     eax, [edi + ebx*2]
        test    eax, eax
        jl      L_51a9
        shl     eax, 0x4
        mov     dword ptr [g_5e77a5f0], 0xfffffffe
        mov     dword ptr [g_5e77a5f4], eax
        jmp     L_5207
    L_51a9:
        mov     edx, dword ptr [ebp + 0x8]
        shl     edi, 0x4
        mov     dword ptr [ebp + 0xc], edx
        mov     dword ptr [ebp - 0x4], edi
        mov     eax, dword ptr [ebp - 0x4]
        xor     edx, edx
        test    eax, eax
        jz      L_51f9
        mov     ecx, dword ptr [ebp + 0xc]
        js      L_51eb
        test    ecx, 0xffff0000
        jnz     L_51e5
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_51e5
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_51f9
    L_51e5:
        xor     edx, edx
        div     ecx
        jmp     L_51f9
    L_51eb:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_51f9
        dec     eax
        add     edx, ecx
    L_51f9:
        mov     ecx, 0x5e77a5f4
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a5f0
        mov     dword ptr [ecx], eax
    L_5207:
        fild    dword ptr [g_5e77a5f0]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [g_5e77a5fc]
        sub     ecx, eax
        mov     dword ptr [g_5e77a5f8], eax
        fld     st(0)
        fmul    dword ptr [g_5e77a564]
        mov     dword ptr [g_5e77a5fc], ecx
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
    L_5281:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
