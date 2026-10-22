/*
 * FUN_5e0166d0 (652 B) — DirectDraw surface format/creation body.
 * Fixed-point division (DIV/IDIV) + 2-channel FPU interpolation.
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

extern int g_5e77a588[];    /* int array */
extern int g_5e77a584[];    /* int array */

extern float g_5e03628c;    /* DAT_5e03628c */
extern float g_5e77a564;    /* DAT_5e77a564 */
extern float g_5e77a56c;    /* DAT_5e77a56c */
extern float g_5e77a568;    /* DAT_5e77a568 */
extern float g_5e77a570;    /* DAT_5e77a570 */
extern float g_5e77a668;    /* DAT_5e77a668 */
extern float g_5e77a674;    /* DAT_5e77a674 */
extern float g_5e77a66c;    /* DAT_5e77a66c */
extern float g_5e77a670;    /* DAT_5e77a670 */
extern float g_5e77a678;    /* DAT_5e77a678 */
extern float g_5e77a67c;    /* DAT_5e77a67c */

extern float g_5e77a59c[];  /* float array */
extern float g_5e77a5a0[];  /* float array */

__declspec(naked) void __stdcall FUN_5e0166d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp + 0xc]
        shl     edi, 0x5
        shl     ecx, 0x5
        mov     eax, dword ptr [edi + g_5e77a588]
        add     eax, 0xf
        sar     eax, 0x4
        mov     dword ptr [g_5e77a5e8], eax
        mov     edx, dword ptr [ecx + g_5e77a588]
        add     edx, 0xf
        sar     edx, 0x4
        sub     edx, eax
        mov     dword ptr [g_5e77a5ec], edx
        jz      L_6953
        mov     ebx, dword ptr [ecx + g_5e77a588]
        mov     esi, dword ptr [ecx + g_5e77a584]
        mov     ecx, dword ptr [edi + g_5e77a584]
        mov     edx, dword ptr [edi + g_5e77a588]
        shl     eax, 0x4
        sub     esi, ecx
        sub     ebx, edx
        sub     eax, edx
        add     ecx, 0x10
        imul    eax, esi
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
        jz      L_678e
        mov     ecx, dword ptr [ebp + 0xc]
        js      L_6780
        test    ecx, 0xffff0000
        jnz     L_677a
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_677a
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_678e
    L_677a:
        xor     edx, edx
        div     ecx
        jmp     L_678e
    L_6780:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_678e
        dec     eax
        add     edx, ecx
    L_678e:
        mov     ecx, 0x5e77a5fc
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a5e4
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a5e8]
        mov     edx, dword ptr [edi + g_5e77a588]
        mov     eax, dword ptr [edi + g_5e77a584]
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
        fadd    dword ptr [edi + g_5e77a59c]
        fld     dword ptr [g_5e77a56c]
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a668]
        fld     dword ptr [g_5e77a568]
        fmul    st(0), st(1)
        fadd    dword ptr [edi + g_5e77a5a0]
        fld     dword ptr [g_5e77a570]
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a674]
        fstp    st(0)
        fstp    st(0)
        jle     L_6953
        test    esi, esi
        jl      L_6865
        cmp     esi, ebx
        jge     L_6849
        shl     esi, 0x4
        mov     dword ptr [g_5e77a5f0], 0
        mov     dword ptr [g_5e77a5f4], esi
        jmp     L_68f9
    L_6849:
        lea     ecx, [ebx + ebx]
        cmp     esi, ecx
        jge     L_689b
        sub     esi, ebx
        mov     dword ptr [g_5e77a5f0], eax
        shl     esi, 0x4
        mov     dword ptr [g_5e77a5f4], esi
        jmp     L_68f9
    L_6865:
        lea     eax, [esi + ebx]
        test    eax, eax
        jl      L_6880
        shl     eax, 0x4
        mov     dword ptr [g_5e77a5f0], 0xffffffff
        mov     dword ptr [g_5e77a5f4], eax
        jmp     L_68f9
    L_6880:
        lea     eax, [esi + ebx*2]
        test    eax, eax
        jl      L_689b
        shl     eax, 0x4
        mov     dword ptr [g_5e77a5f0], 0xfffffffe
        mov     dword ptr [g_5e77a5f4], eax
        jmp     L_68f9
    L_689b:
        mov     edx, dword ptr [ebp + 0x8]
        shl     esi, 0x4
        mov     dword ptr [ebp + 0xc], edx
        mov     dword ptr [ebp - 0x4], esi
        mov     eax, dword ptr [ebp - 0x4]
        xor     edx, edx
        test    eax, eax
        jz      L_68eb
        mov     ecx, dword ptr [ebp + 0xc]
        js      L_68dd
        test    ecx, 0xffff0000
        jnz     L_68d7
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_68d7
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_68eb
    L_68d7:
        xor     edx, edx
        div     ecx
        jmp     L_68eb
    L_68dd:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_68eb
        dec     eax
        add     edx, ecx
    L_68eb:
        mov     ecx, 0x5e77a5f4
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a5f0
        mov     dword ptr [ecx], eax
    L_68f9:
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
        fmul    dword ptr [g_5e77a568]
        fadd    dword ptr [g_5e77a570]
        fst     dword ptr [g_5e77a678]
        fadd    dword ptr [g_5e77a568]
        fstp    dword ptr [g_5e77a67c]
    L_6953:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
