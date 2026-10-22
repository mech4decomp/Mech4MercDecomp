/*
 * FUN_5e013730 (582 B) — DirectDraw caps/format computation.
 *
 * __cdecl, RET 0x8 (2 stack params). Heavy FPU + 16/32-bit division.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a588;   /* DAT_5e77a588 (int array, 32-byte stride) */
extern int g_5e77a584;   /* DAT_5e77a584 (int array) */
extern float g_5e77a58c; /* DAT_5e77a58c (float array) */
extern int g_5e77a5e8;
extern int g_5e77a5ec;
extern int g_5e77a5f0;
extern int g_5e77a5f4;
extern int g_5e77a5f8;
extern int g_5e77a5fc;
extern int g_5e77a5e4;
extern float g_5e77a630;
extern float g_5e77a634;
extern float g_5e77a638;
extern float g_5e03628c;
extern float g_5e77a530;
extern float g_5e77a534;

__declspec(naked) void __cdecl FUN_5e013730(void)
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
        shl     edi, 5
        shl     ecx, 5
        mov     eax, dword ptr [edi + g_5e77a588]
        add     eax, 0xf
        sar     eax, 4
        mov     dword ptr [g_5e77a5e8], eax
        mov     edx, dword ptr [ecx + g_5e77a588]
        add     edx, 0xf
        sar     edx, 4
        sub     edx, eax
        mov     dword ptr [g_5e77a5ec], edx
        jz      L_396d
        mov     ebx, dword ptr [ecx + g_5e77a588]
        mov     esi, dword ptr [ecx + g_5e77a584]
        mov     ecx, dword ptr [edi + g_5e77a584]
        mov     edx, dword ptr [edi + g_5e77a588]
        shl     eax, 4
        sub     esi, ecx
        sub     ebx, edx
        sub     eax, edx
        add     ecx, 0x10
        imul    eax, esi
        imul    ecx, ebx
        lea     eax, [eax + ecx - 1]
        mov     dword ptr [ebp - 4], eax
        mov     eax, ebx
        shl     eax, 4
        mov     dword ptr [ebp + 0x8], eax
        mov     dword ptr [ebp + 0xc], eax
        mov     eax, dword ptr [ebp - 4]
        xor     edx, edx
        test    eax, eax
        jz      L_37ee
        mov     ecx, dword ptr [ebp + 0xc]
        js      L_37e0
        test    ecx, 0xffff0000
        jnz     L_37da
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_37da
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_37ee
    L_37da:
        xor     edx, edx
        div     ecx
        jmp     L_37ee
    L_37e0:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_37ee
        dec     eax
        add     edx, ecx
    L_37ee:
        mov     ecx, offset g_5e77a5fc
        mov     dword ptr [ecx], edx
        mov     ecx, offset g_5e77a5e4
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a5e4]
        mov     edx, dword ptr [edi + g_5e77a584]
        shl     ecx, 4
        sub     ecx, edx
        mov     edx, dword ptr [g_5e77a5e8]
        mov     eax, dword ptr [edi + g_5e77a588]
        mov     dword ptr [ebp + 0xc], ecx
        fild    dword ptr [ebp + 0xc]
        shl     edx, 4
        sub     edx, eax
        mov     ecx, dword ptr [g_5e77a5ec]
        fmul    dword ptr [g_5e03628c]
        mov     dword ptr [ebp + 0xc], edx
        mov     eax, 1
        cmp     ecx, eax
        fmul    dword ptr [g_5e77a530]
        fild    dword ptr [ebp + 0xc]
        fmul    dword ptr [g_5e03628c]
        fmul    dword ptr [g_5e77a534]
        faddp   st(1), st(0)
        fadd    dword ptr [edi + g_5e77a58c]
        fstp    dword ptr [g_5e77a630]
        jle     L_396d
        test    esi, esi
        jl      L_389f
        cmp     esi, ebx
        jge     L_3883
        shl     esi, 4
        mov     dword ptr [g_5e77a5f0], 0
        mov     dword ptr [g_5e77a5f4], esi
        jmp     L_3933
    L_3883:
        lea     ecx, [ebx + ebx]
        cmp     esi, ecx
        jge     L_38d5
        sub     esi, ebx
        mov     dword ptr [g_5e77a5f0], eax
        shl     esi, 4
        mov     dword ptr [g_5e77a5f4], esi
        jmp     L_3933
    L_389f:
        lea     eax, [esi + ebx]
        test    eax, eax
        jl      L_38ba
        shl     eax, 4
        mov     dword ptr [g_5e77a5f0], 0xffffffff
        mov     dword ptr [g_5e77a5f4], eax
        jmp     L_3933
    L_38ba:
        lea     eax, [esi + ebx*2]
        test    eax, eax
        jl      L_38d5
        shl     eax, 4
        mov     dword ptr [g_5e77a5f0], 0xfffffffe
        mov     dword ptr [g_5e77a5f4], eax
        jmp     L_3933
    L_38d5:
        mov     edx, dword ptr [ebp + 0x8]
        shl     esi, 4
        mov     dword ptr [ebp + 0xc], edx
        mov     dword ptr [ebp - 4], esi
        mov     eax, dword ptr [ebp - 4]
        xor     edx, edx
        test    eax, eax
        jz      L_3925
        mov     ecx, dword ptr [ebp + 0xc]
        js      L_3917
        test    ecx, 0xffff0000
        jnz     L_3911
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_3911
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_3925
    L_3911:
        xor     edx, edx
        div     ecx
        jmp     L_3925
    L_3917:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_3925
        dec     eax
        add     edx, ecx
    L_3925:
        mov     ecx, offset g_5e77a5f4
        mov     dword ptr [ecx], edx
        mov     ecx, offset g_5e77a5f0
        mov     dword ptr [ecx], eax
    L_3933:
        fild    dword ptr [g_5e77a5f0]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [g_5e77a5fc]
        sub     ecx, eax
        mov     dword ptr [g_5e77a5f8], eax
        fmul    dword ptr [g_5e77a530]
        mov     dword ptr [g_5e77a5fc], ecx
        fadd    dword ptr [g_5e77a534]
        fst     dword ptr [g_5e77a634]
        fadd    dword ptr [g_5e77a530]
        fstp    dword ptr [g_5e77a638]
    L_396d:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
