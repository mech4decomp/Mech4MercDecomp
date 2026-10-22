/*
 * FUN_5e01b670 (1358 B) — DirectDraw caps/format setup body (__stdcall, RET 0x8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a588;
extern int g_5e77a584;
extern int g_5e77a594;
extern int g_5e77a598;
extern float g_5e77a59c;
extern float g_5e77a5a0;
extern float g_5e77a58c;
extern int g_5e77a5e8;
extern int g_5e77a5ec;
extern int g_5e77a5fc;
extern int g_5e77a5e4;
extern int g_5e77a5f0;
extern int g_5e77a5f4;
extern int g_5e77a5f8;
extern int g_5e77a6e0;
extern int g_5e77a6f0;
extern int g_5e77a6e4;
extern int g_5e77a6f4;
extern int g_5e77a6e8;
extern int g_5e77a6f8;
extern int g_5e77a6dc;
extern int g_5e77a6ec;
extern int g_5e77a6fc;
extern int g_5e77a700;
extern int g_5e77a6b4;
extern int g_5e77a60c;
extern int g_5e77a618;
extern int g_5e77a624;
extern int g_5e77a600;
extern int g_5e77a680;
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
extern int g_5e77a704;
extern char g_5e77a580;

extern float g_5e03628c;
extern float g_5e036294;
extern float g_5e0384e8;
extern float g_5e77a564;
extern float g_5e77a56c;
extern float g_5e77a568;
extern float g_5e77a570;
extern float g_5e77a530;
extern float g_5e77a534;
extern float g_5e77a668;
extern float g_5e77a674;
extern float g_5e77a630;
extern float g_5e77a66c;
extern float g_5e77a670;
extern float g_5e77a678;
extern float g_5e77a67c;
extern float g_5e77a634;
extern float g_5e77a638;

__declspec(naked) void __stdcall FUN_5e01b670(void)
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
        jz      LBBB5
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
        mov     dword ptr [ebp + 0xc], eax
        mov     eax, ebx
        shl     eax, 0x4
        mov     dword ptr [ebp - 0x4], eax
        mov     dword ptr [ebp + 0x8], eax
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      L730
        mov     ecx, dword ptr [ebp + 0x8]
        js      L722
        test    ecx, 0xffff0000
        jnz     L71C
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L71C
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L730
L71C:
        xor     edx, edx
        div     ecx
        jmp     L730
L722:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L730
        dec     eax
        add     edx, ecx
L730:
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
        jnz     L889
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
L889:
        test    byte ptr [g_5e77a580], 0x10
        jz      L8E2
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
L8E2:
        cmp     dword ptr [g_5e77a704], edx
        jnz     L93E
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
L93E:
        fld     dword ptr [g_5e77a564]
        fmul    dword ptr [ebp + 0x8]
        mov     eax, dword ptr [g_5e77a5ec]
        mov     ecx, 0x1
        cmp     eax, ecx
        fadd    dword ptr [esi + g_5e77a59c]
        fld     dword ptr [g_5e77a56c]
        fmul    dword ptr [ebp + 0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a668]
        fld     dword ptr [g_5e77a568]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [esi + g_5e77a5a0]
        fld     dword ptr [g_5e77a570]
        fmul    dword ptr [ebp + 0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a674]
        fld     dword ptr [g_5e77a530]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [esi + g_5e77a58c]
        fld     dword ptr [g_5e77a534]
        fmul    dword ptr [ebp + 0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a630]
        jle     LBBB5
        cmp     edi, edx
        jl      L9EB
        cmp     edi, ebx
        jge     L9CE
        xor     ecx, ecx
        shl     edi, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], edi
        jmp     LBA8B
L9CE:
        lea     eax, [ebx + ebx]
        cmp     edi, eax
        jge     LA25
        sub     edi, ebx
        mov     dword ptr [g_5e77a5f0], ecx
        shl     edi, 0x4
        mov     dword ptr [g_5e77a5f4], edi
        jmp     LBA8B
L9EB:
        lea     eax, [edi + ebx]
        cmp     eax, edx
        jl      LA08
        or      ecx, 0xffffffff
        shl     eax, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], eax
        jmp     LBA8B
LA08:
        lea     ebx, [edi + ebx*2]
        cmp     ebx, edx
        jl      LA25
        mov     ecx, 0xfffffffe
        shl     ebx, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], ebx
        jmp     LBA8B
LA25:
        mov     ecx, dword ptr [ebp - 0x4]
        shl     edi, 0x4
        mov     dword ptr [ebp + 0x8], ecx
        mov     dword ptr [ebp + 0xc], edi
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      LBA75
        mov     ecx, dword ptr [ebp + 0x8]
        js      LBA67
        test    ecx, 0xffff0000
        jnz     LBA61
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     LBA61
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     LBA75
LBA61:
        xor     edx, edx
        div     ecx
        jmp     LBA75
LBA67:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      LBA75
        dec     eax
        add     edx, ecx
LBA75:
        mov     ecx, 0x5e77a5f4
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a5f0
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a5f0]
        xor     edx, edx
LBA8B:
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
        jnz     LBB09
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
LBB09:
        test    bl, 0x10
        jz      LBB2B
        mov     esi, dword ptr [g_5e77a6dc]
        mov     eax, ecx
        imul    eax, esi
        add     eax, dword ptr [g_5e77a6ec]
        mov     dword ptr [g_5e77a604], eax
        add     eax, esi
        mov     dword ptr [g_5e77a608], eax
LBB2B:
        cmp     dword ptr [g_5e77a704], edx
        jnz     LBB51
        mov     eax, dword ptr [g_5e77a6fc]
        mov     edx, dword ptr [g_5e77a700]
        imul    ecx, eax
        add     ecx, edx
        mov     dword ptr [g_5e77a684], ecx
        add     ecx, eax
        mov     dword ptr [g_5e77a688], ecx
LBB51:
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
LBBB5:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
