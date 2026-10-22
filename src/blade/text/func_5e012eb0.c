/*
 * FUN_5e012eb0 (834 B) — DirectDraw caps/format init (__thiscall, ECX=this).
 *
 * __thiscall, RET 0xc (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_5e036288;
extern float g_5e77a6b0;
extern float g_5e77a59c;
extern float g_5e77a5bc;
extern float g_5e77a5dc;
extern float g_5e77a5a0;
extern float g_5e77a5c0;
extern float g_5e77a5e0;

extern int g_5e77a584;
extern int g_5e77a588;
extern int g_5e77a5a4;
extern int g_5e77a5a8;
extern int g_5e77a5c4;
extern int g_5e77a5c8;
extern int g_5e77a6b8;
extern int g_5e77a6bc;
extern int g_5e77a6c0;
extern int g_5e77a6b4;
extern int g_5e77a6ac;
extern int g_5e77a58c;
extern int g_5e77a5ac;
extern int g_5e77a594;
extern int g_5e77a5cc;
extern int g_5e77a5d4;
extern int g_5e77a5b4;
extern int g_5e77a5b8;
extern int g_5e77a598;
extern int g_5e77a5d8;
extern int g_5e77a590;
extern int g_5e77a5b0;
extern int g_5e77a5d0;
extern int g_5e77a574;
extern int g_5e77a580;

extern int __cdecl FUN_5e00ea80(void);
extern int __cdecl FUN_5e00ea90(void);
extern int __cdecl FUN_5e00e610(void);
extern void __cdecl FUN_5e012df0(void);

__declspec(naked) void __fastcall FUN_5e012eb0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    ebp
        push    esi
        fld     dword ptr [eax]
        fadd    dword ptr [g_5e036288]
        push    edi
        mov     edi, ecx
        fstp    dword ptr [g_5e77a6b0]
        fld     dword ptr [eax + 0x4]
        mov     ecx, dword ptr [g_5e77a6b0]
        fadd    dword ptr [g_5e036288]
        and     ecx, 0x7fffff
        mov     dword ptr [g_5e77a584], ecx
        mov     ecx, dword ptr [esp + 0x18]
        fstp    dword ptr [g_5e77a6b0]
        fld     dword ptr [ecx]
        mov     eax, dword ptr [g_5e77a6b0]
        fadd    dword ptr [g_5e036288]
        and     eax, 0x7fffff
        mov     dword ptr [g_5e77a588], eax
        fstp    dword ptr [g_5e77a6b0]
        fld     dword ptr [ecx + 0x4]
        mov     edx, dword ptr [g_5e77a6b0]
        fadd    dword ptr [g_5e036288]
        and     edx, 0x7fffff
        mov     dword ptr [g_5e77a5a4], edx
        mov     edx, dword ptr [esp + 0x1c]
        fstp    dword ptr [g_5e77a6b0]
        fld     dword ptr [edx]
        mov     ecx, dword ptr [g_5e77a6b0]
        fadd    dword ptr [g_5e036288]
        and     ecx, 0x7fffff
        mov     dword ptr [g_5e77a5a8], ecx
        fstp    dword ptr [g_5e77a6b0]
        fld     dword ptr [edx + 0x4]
        mov     esi, dword ptr [g_5e77a6b0]
        fadd    dword ptr [g_5e036288]
        and     esi, 0x7fffff
        mov     dword ptr [g_5e77a5c4], esi
        fstp    dword ptr [g_5e77a6b0]
        mov     esi, dword ptr [g_5e77a6b0]
        and     esi, 0x7fffff
        cmp     ecx, eax
        mov     dword ptr [g_5e77a5c8], esi
        jge     L_fc4
        cmp     esi, ecx
        jge     L_fa3
        mov     edx, 0x2
        mov     eax, 0x1
        mov     dword ptr [g_5e77a6b8], edx
        mov     dword ptr [g_5e77a6bc], eax
        xor     ecx, ecx
        jmp     L_100d
L_fa3:
        mov     edx, 0x1
        cmp     esi, eax
        mov     dword ptr [g_5e77a6b8], edx
        jge     L_fc0
        mov     eax, 0x2
        xor     ecx, ecx
        mov     dword ptr [g_5e77a6bc], eax
        jmp     L_100d
L_fc0:
        xor     eax, eax
        jmp     L_1003
L_fc4:
        cmp     esi, eax
        jge     L_fe1
        mov     edx, 0x2
        xor     eax, eax
        mov     dword ptr [g_5e77a6b8], edx
        mov     dword ptr [g_5e77a6bc], eax
        mov     ecx, 0x1
        jmp     L_100d
L_fe1:
        xor     edx, edx
        cmp     esi, ecx
        mov     dword ptr [g_5e77a6b8], edx
        jge     L_ffe
        mov     eax, 0x2
        mov     ecx, 0x1
        mov     dword ptr [g_5e77a6bc], eax
        jmp     L_100d
L_ffe:
        mov     eax, 0x1
L_1003:
        mov     dword ptr [g_5e77a6bc], eax
        mov     ecx, 0x2
L_100d:
        shl     eax, 0x5
        mov     dword ptr [g_5e77a6c0], ecx
        mov     esi, dword ptr [eax + g_5e77a584]
        mov     eax, dword ptr [eax + g_5e77a588]
        shl     edx, 0x5
        shl     ecx, 0x5
        mov     ebp, dword ptr [edx + g_5e77a584]
        mov     ebx, esi
        sub     ebx, ebp
        mov     ebp, dword ptr [ecx + g_5e77a588]
        mov     ecx, dword ptr [ecx + g_5e77a584]
        sub     ebp, eax
        imul    ebx, ebp
        mov     ebp, dword ptr [edx + g_5e77a588]
        sub     ecx, esi
        sub     eax, ebp
        mov     esi, dword ptr [edi + 0x64]
        imul    eax, ecx
        mov     ecx, dword ptr [esi + 0x4604]
        sub     eax, ebx
        cmp     ecx, 0x1
        mov     dword ptr [g_5e77a6b4], eax
        jz      L_10ef
        mov     ecx, esi
        call    FUN_5e00ea80
        test    eax, eax
        jz      L_10ad
        mov     eax, dword ptr [g_5e77a6b4]
        test    eax, eax
        jg      L_108f
        mov     edx, dword ptr [g_5e77a6bc]
        lea     ecx, [edx + 0x1]
        cmp     ecx, 0x2
        jle     L_109f
        xor     ecx, ecx
        jmp     L_109f
L_108f:
        mov     ecx, dword ptr [g_5e77a6bc]
        dec     ecx
        test    ecx, ecx
        jge     L_109f
        mov     ecx, 0x2
L_109f:
        cmp     dword ptr [g_5e77a6b8], ecx
        jz      L_11eb
        jmp     L_10ef
L_10ad:
        mov     ecx, esi
        call    FUN_5e00ea90
        test    eax, eax
        mov     eax, dword ptr [g_5e77a6b4]
        jz      L_10ef
        test    eax, eax
        jl      L_10d3
        mov     edx, dword ptr [g_5e77a6bc]
        lea     ecx, [edx + 0x1]
        cmp     ecx, 0x2
        jle     L_10e3
        xor     ecx, ecx
        jmp     L_10e3
L_10d3:
        mov     ecx, dword ptr [g_5e77a6bc]
        dec     ecx
        test    ecx, ecx
        jge     L_10e3
        mov     ecx, 0x2
L_10e3:
        cmp     dword ptr [g_5e77a6b8], ecx
        jz      L_11eb
L_10ef:
        test    eax, eax
        jz      L_11eb
        mov     ebp, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [esp + 0x14]
        and     eax, 0x80000000
        mov     edx, dword ptr [ebx + 0x8]
        mov     dword ptr [g_5e77a6ac], eax
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [g_5e77a58c], edx
        mov     edx, dword ptr [ebx + 0x10]
        mov     dword ptr [g_5e77a5ac], eax
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [g_5e77a594], edx
        mov     ecx, dword ptr [eax + 0x8]
        mov     edx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax + 0x14]
        mov     dword ptr [g_5e77a5cc], ecx
        mov     ecx, dword ptr [ebp + 0x10]
        mov     dword ptr [g_5e77a5d4], edx
        mov     edx, dword ptr [ebp + 0x14]
        mov     dword ptr [g_5e77a5b4], ecx
        mov     ecx, dword ptr [ebx + 0x14]
        mov     dword ptr [g_5e77a5b8], edx
        mov     dword ptr [g_5e77a598], ecx
        mov     ecx, esi
        mov     dword ptr [g_5e77a5d8], eax
        call    FUN_5e00e610
        test    eax, eax
        jz      L_11ce
        fld     dword ptr [ebx + 0x18]
        fmul    dword ptr [edi + 0x38]
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [ebx + 0xc]
        mov     edx, dword ptr [ebp + 0xc]
        mov     dword ptr [g_5e77a590], ecx
        mov     ecx, dword ptr [eax + 0xc]
        mov     dword ptr [g_5e77a5b0], edx
        fstp    dword ptr [g_5e77a59c]
        fld     dword ptr [ebp + 0x18]
        fmul    dword ptr [edi + 0x38]
        mov     dword ptr [g_5e77a5d0], ecx
        fstp    dword ptr [g_5e77a5bc]
        fld     dword ptr [eax + 0x18]
        fmul    dword ptr [edi + 0x38]
        fstp    dword ptr [g_5e77a5dc]
        fld     dword ptr [ebx + 0x1c]
        fmul    dword ptr [edi + 0x3c]
        fstp    dword ptr [g_5e77a5a0]
        fld     dword ptr [ebp + 0x1c]
        fmul    dword ptr [edi + 0x3c]
        fstp    dword ptr [g_5e77a5c0]
        fld     dword ptr [eax + 0x1c]
        fmul    dword ptr [edi + 0x3c]
        fstp    dword ptr [g_5e77a5e0]
L_11ce:
        cmp     dword ptr [g_5e77a574], edi
        jz      L_11dd
        mov     ecx, edi
        call    FUN_5e012df0
L_11dd:
        mov     edx, dword ptr [edi + 0x5c]
        mov     ecx, edi
        mov     dword ptr [g_5e77a580], edx
        call    dword ptr [edi + 0x60]
L_11eb:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
