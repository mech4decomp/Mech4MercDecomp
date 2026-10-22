/*
 * FUN_5e013cc0 (911 B) — DirectDraw caps/format main driver.
 *
 * __cdecl, no params. Calls FUN_5e013bd0/730/980/13b50 + indirect dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a580;
extern char g_5e038524[];   /* byte table */
extern char g_5e036089[];   /* byte table */
extern char g_5e036088[];   /* byte table */
extern int g_5e038990[];    /* dword table */
extern int g_5e038924[];    /* dword table */
extern int g_5e038928;
extern int g_5e038994;
extern int g_5e77a788;
extern int g_5e77a798;
extern int g_5e77a594;
extern int g_5e77a6a8;
extern int g_5e77a7a0;
extern int g_5e77a79c;
extern int g_5e77a7b0;
extern int g_5e77a7b4;
extern int g_5e77a820;
extern int g_5e77a81c;
extern int g_5e77a6ac;
extern int g_5e77a6bc;
extern int g_5e77a6b8;
extern int g_5e77a6c0;
extern int g_5e77a6c4;
extern int g_5e77a6cc;
extern int g_5e77a6d0;
extern int g_5e77a840;
extern int g_5e77a844;
extern int g_5e77a510;
extern int g_5e77a514;
extern float g_5e77a530;
extern float g_5e036290;
extern int g_5e77a7dc;
extern int g_5e77a7c4;
extern int g_5e77a7c8;
extern int g_5e77a7bc;
extern int g_5e77a7c0;
extern int g_5e77a68c;
extern int g_5e77a698;
extern int g_5e77a69c;
extern int g_5e77a6a0;
extern int g_5e77a6a4;
extern int g_5e77a5e4;
extern int g_5e77a5e8;
extern int g_5e77a5ec;
extern int g_5e77a694;
extern float g_5e77a630;
extern int g_5e77a578;
extern int g_5e77a834;
extern void (*g_5e77a6a8fn)(void);   /* indirect dispatch target */

extern void __cdecl FUN_5e013bd0(void);
extern void __cdecl FUN_5e013730(void);
extern void __cdecl FUN_5e013980(void);
extern void __cdecl FUN_5e013b50(void);

__declspec(naked) void __cdecl FUN_5e013cc0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        mov     eax, dword ptr [g_5e77a580]
        push    ebx
        push    esi
        mov     esi, eax
        and     eax, 0xff
        push    edi
        shr     esi, 0x10
        lea     edi, [eax*4 + g_5e038524]
        xor     eax, eax
        mov     al, byte ptr [esi*2 + g_5e036089]
        mov     ecx, dword ptr [eax*4 + g_5e038990]
        mov     eax, offset g_5e77a788
        mov     dword ptr [g_5e038928], ecx
        xor     ecx, ecx
        xor     edx, edx
        add     eax, 4
    L_13cfc:
        mov     dl, byte ptr [ecx + edi]
        inc     ecx
        cmp     eax, offset g_5e77a798
        mov     edx, dword ptr [edx*4 + g_5e038924]
        mov     dword ptr [eax - 4], edx
        /* __emit: MSVC6 miscomputes the backward rel8 offset for jl L_13cfc (7C EB vs ref 7C E6) */
        __emit  0x7C
        __emit  0xE6
        mov     eax, dword ptr [g_5e77a788]
        xor     ecx, ecx
        mov     cl, byte ptr [esi*2 + g_5e036088]
        mov     dword ptr [g_5e038994], eax
        mov     edx, dword ptr [ecx*4 + g_5e038990]
        mov     ecx, dword ptr [g_5e77a594]
        mov     eax, ecx
        mov     dword ptr [g_5e77a6a8], edx
        shr     eax, 0x1b
        mov     dword ptr [g_5e77a7a0], eax
        mov     eax, ecx
        shr     eax, 2
        mov     edx, ecx
        and     eax, 0x3e
        and     edx, 0xf800
        and     ecx, 0xf80000
        or      eax, edx
        shr     eax, 1
        shl     ecx, 1
        or      eax, ecx
        mov     ecx, dword ptr [g_5e77a820]
        mov     edx, eax
        mov     esi, eax
        and     edx, 0x1f00000
        and     esi, 0x7c00
        shr     edx, cl
        mov     ecx, dword ptr [g_5e77a81c]
        mov     dword ptr [g_5e77a79c], eax
        shr     esi, cl
        and     eax, 0x1f
        and     edx, 0xffff
        or      edx, esi
        or      edx, eax
        mov     eax, edx
        mov     dword ptr [g_5e77a7b0], edx
        shl     eax, 0x10
        or      eax, edx
        mov     dword ptr [g_5e77a7b4], eax
        call    FUN_5e013bd0
        mov     eax, dword ptr [g_5e77a6ac]
        test    eax, eax
        jnz     L_13de9
        mov     ecx, dword ptr [g_5e77a6bc]
        mov     edx, dword ptr [g_5e77a6b8]
        push    ecx
        push    edx
        call    FUN_5e013730
        mov     eax, dword ptr [g_5e77a6c0]
        mov     ecx, dword ptr [g_5e77a6b8]
        push    eax
        push    ecx
        call    FUN_5e013980
        mov     edx, dword ptr [g_5e77a5ec]
        mov     dword ptr [g_5e77a6c4], edx
        jmp     L_13e19
    L_13de9:
        mov     eax, dword ptr [g_5e77a6c0]
        mov     ecx, dword ptr [g_5e77a6b8]
        push    eax
        push    ecx
        call    FUN_5e013730
        mov     edx, dword ptr [g_5e77a6bc]
        mov     eax, dword ptr [g_5e77a6b8]
        push    edx
        push    eax
        call    FUN_5e013980
        mov     ecx, dword ptr [g_5e77a694]
        mov     dword ptr [g_5e77a6c4], ecx
    L_13e19:
        mov     edx, dword ptr [g_5e77a840]
        mov     eax, dword ptr [g_5e77a5e8]
        imul    edx, eax
        fld     dword ptr [g_5e77a530]
        fmul    dword ptr [g_5e036290]
        fstp    dword ptr [ebp - 4]
        mov     ecx, dword ptr [g_5e77a844]
        add     edx, ecx
        mov     ecx, dword ptr [g_5e77a6cc]
        imul    ecx, eax
        mov     eax, dword ptr [g_5e77a6d0]
        mov     dword ptr [g_5e77a510], edx
        add     ecx, eax
        mov     dword ptr [g_5e77a514], ecx
        fld     dword ptr [ebp - 4]
        fistp   qword ptr [ebp - 0xc]
        mov     edx, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [g_5e77a6c4]
        mov     dword ptr [g_5e77a7dc], edx
        mov     dword ptr [ebp - 4], 0
    L_13e75:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     dword ptr [g_5e77a6c4], eax
        jz      L_13ff1
    L_13e85:
        mov     ecx, dword ptr [g_5e77a68c]
        mov     esi, dword ptr [g_5e77a514]
        mov     edx, dword ptr [g_5e77a510]
    L_13e97:
        mov     edi, dword ptr [g_5e77a5e4]
        mov     ebx, edi
        sub     ebx, ecx
        mov     dword ptr [g_5e77a578], ebx
        jns     L_13f6b
        mov     ecx, dword ptr [g_5e77a834]
        mov     eax, edi
        fld     dword ptr [g_5e77a630]
        fmul    dword ptr [g_5e036290]
        shl     eax, cl
        fstp    dword ptr [ebp - 8]
        lea     ecx, [edx + eax*2]
        lea     edx, [esi + edi*2]
        mov     dword ptr [g_5e77a7bc], ecx
        mov     dword ptr [g_5e77a7c0], edx
        fld     dword ptr [ebp - 8]
        fistp   qword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0x14]
        mov     dword ptr [g_5e77a7c8], eax
        mov     eax, dword ptr [g_5e77a578]
    L_13eeb:
        cmp     eax, -0x10
        mov     dword ptr [g_5e77a7c4], eax
        jge     L_13eff
        mov     eax, 0xfffffff0
        mov     dword ptr [g_5e77a7c4], eax
    L_13eff:
        mov     ecx, dword ptr [g_5e77a834]
        mov     edx, eax
        shl     edx, cl
        mov     ecx, dword ptr [g_5e77a7bc]
        neg     eax
        neg     edx
        lea     edx, [ecx + edx*2]
        mov     ecx, dword ptr [g_5e77a7c0]
        mov     dword ptr [g_5e77a7bc], edx
        lea     edx, [ecx + eax*2]
        mov     dword ptr [g_5e77a7c0], edx
        push    ebx
        push    esi
        push    edi
        push    ebp
        call    dword ptr [g_5e77a6a8fn]
        pop     ebp
        pop     edi
        pop     esi
        pop     ebx
        mov     eax, dword ptr [g_5e77a578]
        mov     ecx, dword ptr [g_5e77a7c4]
        sub     eax, ecx
        mov     dword ptr [g_5e77a578], eax
        jns     L_13f66
        mov     ecx, dword ptr [g_5e77a7dc]
        mov     edx, dword ptr [g_5e77a7c8]
        shl     ecx, 4
        add     edx, ecx
        mov     dword ptr [g_5e77a7c8], edx
        jmp     L_13eeb
    L_13f66:
        mov     eax, dword ptr [g_5e77a6c4]
    L_13f6b:
        cmp     eax, dword ptr [ebp - 4]
        jl      L_14048
        call    FUN_5e013b50
        mov     ecx, dword ptr [g_5e77a68c]
        mov     esi, dword ptr [g_5e77a698]
        mov     eax, dword ptr [g_5e77a6a4]
        mov     edx, dword ptr [g_5e77a69c]
        add     ecx, esi
        add     eax, edx
        mov     dword ptr [g_5e77a68c], ecx
        mov     dword ptr [g_5e77a6a4], eax
        js      L_13fb5
        mov     edx, dword ptr [g_5e77a6a0]
        inc     ecx
        sub     eax, edx
        mov     dword ptr [g_5e77a68c], ecx
        mov     dword ptr [g_5e77a6a4], eax
    L_13fb5:
        mov     edx, dword ptr [g_5e77a510]
        mov     esi, dword ptr [g_5e77a840]
        mov     eax, dword ptr [g_5e77a6cc]
        add     edx, esi
        mov     esi, dword ptr [g_5e77a514]
        mov     dword ptr [g_5e77a510], edx
        add     esi, eax
        mov     eax, dword ptr [g_5e77a6c4]
        mov     edi, eax
        dec     eax
        test    edi, edi
        mov     dword ptr [g_5e77a514], esi
        mov     dword ptr [g_5e77a6c4], eax
        jnz     L_13e97
    L_13ff1:
        mov     edx, dword ptr [g_5e77a694]
        mov     eax, dword ptr [g_5e77a5ec]
        cmp     eax, edx
        jz      L_14048
        mov     ecx, dword ptr [ebp - 4]
        mov     eax, dword ptr [g_5e77a6ac]
        inc     ecx
        test    eax, eax
        mov     dword ptr [ebp - 4], ecx
        jnz     L_1402c
        mov     eax, dword ptr [g_5e77a6c0]
        mov     ecx, dword ptr [g_5e77a6bc]
        push    eax
        push    ecx
        call    FUN_5e013730
        mov     eax, dword ptr [g_5e77a5ec]
        jmp     L_13e75
    L_1402c:
        mov     edx, dword ptr [g_5e77a6c0]
        mov     eax, dword ptr [g_5e77a6bc]
        push    edx
        push    eax
        call    FUN_5e013980
        mov     eax, dword ptr [g_5e77a694]
        jmp     L_13e75
    L_14048:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
