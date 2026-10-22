/*
 * FUN_5e01c530 (1426 B) — DirectDraw caps/format setup body (__stdcall, RET 0x8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a588;
extern int g_5e77a584;
extern int g_5e77a594;
extern int g_5e77a598;
extern float g_5e77a58c;
extern float g_5e77a590;
extern float g_5e77a518;
extern float g_5e77a524;
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
extern float g_5e77a530;
extern float g_5e77a534;
extern float g_5e77a538;
extern float g_5e77a540;
extern float g_5e77a544;
extern float g_5e77a54c;
extern float g_5e77a550;
extern float g_5e77a558;
extern float g_5e77a630;
extern float g_5e77a63c;
extern float g_5e77a650;
extern float g_5e77a65c;
extern float g_5e77a634;
extern float g_5e77a638;
extern float g_5e77a640;
extern float g_5e77a644;
extern float g_5e77a654;
extern float g_5e77a658;
extern float g_5e77a660;
extern float g_5e77a664;

__declspec(naked) void __stdcall FUN_5e01c530(void)
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
        jz      LCAB9
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
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp + 0xc], eax
        mov     eax, dword ptr [ebp - 0x4]
        xor     edx, edx
        test    eax, eax
        jz      LC5F0
        mov     ecx, dword ptr [ebp + 0xc]
        js      LC5E2
        test    ecx, 0xffff0000
        jnz     LC5DC
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     LC5DC
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     LC5F0
LC5DC:
        xor     edx, edx
        div     ecx
        jmp     LC5F0
LC5E2:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      LC5F0
        dec     eax
        add     edx, ecx
LC5F0:
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
        xor     edx, edx
        mov     dword ptr [ebp - 0x10], eax
        mov     dword ptr [ebp - 0xc], edx
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
        mov     ecx, dword ptr [g_5e77a6b4]
        mov     al, byte ptr [g_5e77a580]
        add     ecx, 0x8000
        test    al, 0x2
        mov     dword ptr [g_5e77a60c], ecx
        jnz     LC749
        fild    dword ptr [g_5e77a6e4]
        mov     eax, dword ptr [esi + g_5e77a594]
        mov     dword ptr [ebp - 0xc], edx
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
        mov     ecx, dword ptr [g_5e77a6b4]
        mov     dword ptr [ebp - 0xc], edx
        add     ecx, 0x8000
        fmul    dword ptr [ebp + 0xc]
        fild    dword ptr [g_5e77a6f8]
        mov     dword ptr [g_5e77a618], ecx
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
        mov     ecx, dword ptr [g_5e77a6b4]
        add     ecx, 0x8000
        mov     dword ptr [g_5e77a624], ecx
LC749:
        test    byte ptr [g_5e77a580], 0x10
        jz      LC7A2
        fild    dword ptr [g_5e77a6dc]
        mov     eax, dword ptr [esi + g_5e77a594]
        mov     dword ptr [ebp - 0xc], edx
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
        mov     ecx, dword ptr [g_5e77a6b4]
        add     ecx, 0x8000
        mov     dword ptr [g_5e77a600], ecx
LC7A2:
        cmp     dword ptr [g_5e77a704], edx
        jnz     LC7FE
        fild    dword ptr [g_5e77a6fc]
        mov     eax, dword ptr [esi + g_5e77a598]
        mov     ecx, 0xff
        shr     eax, 0x18
        fmul    dword ptr [ebp + 0xc]
        fild    dword ptr [g_5e77a700]
        sub     ecx, eax
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x10], ecx
        fmul    dword ptr [ebp - 0x4]
        faddp   st(1), st(0)
        fmul    dword ptr [g_5e036294]
        fiadd   dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     eax, dword ptr [g_5e77a6b4]
        add     eax, 0x8000
        mov     dword ptr [g_5e77a680], eax
LC7FE:
        fld     dword ptr [g_5e77a530]
        fmul    dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, 0x1
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
        __emit 0xD8   /* fadd dword ptr [eax*4+0x5e77a518]: MSVC6 re-bases no-base SIB via EBX */
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
        __emit 0xD8   /* fadd dword ptr [eax*4+0x5e77a524]: MSVC6 re-bases no-base SIB via EBX */
        __emit 0x04
        __emit 0x85
        __emit 0x24
        __emit 0xA5
        __emit 0x77
        __emit 0x5E
        fld     dword ptr [g_5e77a558]
        fmul    dword ptr [ebp - 0x4]
        cmp     dword ptr [g_5e77a5ec], ecx
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a65c]
        jle     LCAB9
        cmp     edi, edx
        jl      LC8CF
        cmp     edi, ebx
        jge     LC8B2
        xor     ecx, ecx
        shl     edi, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], edi
        jmp     LC96F
LC8B2:
        lea     eax, [ebx + ebx]
        cmp     edi, eax
        jge     LC909
        sub     edi, ebx
        mov     dword ptr [g_5e77a5f0], ecx
        shl     edi, 0x4
        mov     dword ptr [g_5e77a5f4], edi
        jmp     LC96F
LC8CF:
        lea     eax, [edi + ebx]
        cmp     eax, edx
        jl      LC8EC
        or      ecx, 0xffffffff
        shl     eax, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], eax
        jmp     LC96F
LC8EC:
        lea     ebx, [edi + ebx*2]
        cmp     ebx, edx
        jl      LC909
        mov     ecx, 0xfffffffe
        shl     ebx, 0x4
        mov     dword ptr [g_5e77a5f0], ecx
        mov     dword ptr [g_5e77a5f4], ebx
        jmp     LC96F
LC909:
        mov     ecx, dword ptr [ebp - 0x8]
        shl     edi, 0x4
        mov     dword ptr [ebp + 0x8], ecx
        mov     dword ptr [ebp + 0xc], edi
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      LC959
        mov     ecx, dword ptr [ebp + 0x8]
        js      LC94B
        test    ecx, 0xffff0000
        jnz     LC945
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     LC945
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     LC959
LC945:
        xor     edx, edx
        div     ecx
        jmp     LC959
LC94B:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      LC959
        dec     eax
        add     edx, ecx
LC959:
        mov     ecx, 0x5e77a5f4
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a5f0
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a5f0]
        xor     edx, edx
LC96F:
        mov     eax, dword ptr [ebp - 0x8]
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
        jnz     LC9ED
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
LC9ED:
        test    bl, 0x10
        jz      LCA0F
        mov     esi, dword ptr [g_5e77a6dc]
        mov     eax, ecx
        imul    eax, esi
        add     eax, dword ptr [g_5e77a6ec]
        mov     dword ptr [g_5e77a604], eax
        add     eax, esi
        mov     dword ptr [g_5e77a608], eax
LCA0F:
        cmp     dword ptr [g_5e77a704], edx
        jnz     LCA35
        mov     eax, dword ptr [g_5e77a6fc]
        mov     edx, dword ptr [g_5e77a700]
        imul    ecx, eax
        add     ecx, edx
        mov     dword ptr [g_5e77a684], ecx
        add     ecx, eax
        mov     dword ptr [g_5e77a688], ecx
LCA35:
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
LCAB9:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
