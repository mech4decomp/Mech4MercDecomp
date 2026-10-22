/*
 * FUN_100037f0 (324 B, __stdcall) — allocate a new string-table arena:
 * HeapAlloc a 0x2020-byte header (or reuse the static 0x10006340 one),
 * VirtualAlloc a 0x400000-byte region, carve 0x1000-byte blocks, and
 * initialize the free-list. Returns the arena header (or 0 on failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_10006350;
extern int   g_10006340;
extern int   g_10006344;
extern void *g_10008fe8;   /* heap handle */
extern void *g_10005088;   /* IAT: HeapAlloc */
extern void *g_10005098;   /* IAT: VirtualAlloc */
extern void *g_10005070;   /* IAT: VirtualFree */
extern void *g_10005074;   /* IAT: HeapFree */
extern void __cdecl FUN_10003fc0(void);

__declspec(naked) void *FUN_100037f0(void)
{
    __asm {
        cmp     dword ptr [g_10006350], -1
        push    ebx
        push    ebp
        push    esi
        push    edi
        jnz     L_3804
        mov     esi, 0x10006340
        jmp     L_3821
L_3804:
        push    0x2020
        push    0
        push    dword ptr [g_10008fe8]
        call    dword ptr [g_10005088]
        mov     esi, eax
        test    esi, esi
        jz      L_392d
L_3821:
        mov     ebp, dword ptr [g_10005098]
        push    4
        push    0x2000
        push    0x400000
        push    0
        call    ebp
        mov     edi, eax
        test    edi, edi
        jz      L_3916
        push    4
        mov     ebx, 0x10000
        push    0x1000
        push    ebx
        push    edi
        call    ebp
        test    eax, eax
        jz      L_3908
        mov     eax, 0x10006340
        cmp     esi, eax
        jnz     L_3880
        cmp     dword ptr [g_10006340], 0
        jnz     L_3870
        mov     dword ptr [g_10006340], eax
L_3870:
        cmp     dword ptr [g_10006344], 0
        jnz     L_3895
        mov     dword ptr [g_10006344], eax
        jmp     L_3895
L_3880:
        mov     dword ptr [esi], eax
        mov     eax, dword ptr [g_10006344]
        mov     dword ptr [esi + 4], eax
        mov     dword ptr [g_10006344], esi
        mov     eax, dword ptr [esi + 4]
        mov     dword ptr [eax], esi
L_3895:
        lea     eax, [edi + 0x400000]
        lea     ecx, [esi + 0x98]
        mov     dword ptr [esi + 0x14], eax
        lea     eax, [esi + 0x18]
        mov     dword ptr [esi + 0xc], ecx
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 8], eax
        xor     ebp, ebp
        mov     ecx, 0xf1
        xor     edx, edx
L_38b7:
        cmp     ebp, 0x10
        setge   dl
        dec     edx
        and     edx, ecx
        dec     edx
        inc     ebp
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 4], ecx
        add     eax, 8
        cmp     ebp, 0x400
        __emit 0x7C   /* jl L_38b7: MSVC6 miscomputes this backward rel8 (off by 2) due to the following call-reloc */
        __emit 0xE3
        push    ebx
        push    0
        push    edi
        call    FUN_10003fc0
        add     esp, 0xc
L_38e0:
        mov     eax, dword ptr [esi + 0x10]
        add     eax, ebx
        cmp     edi, eax
        jnc     L_3904
        or      byte ptr [edi + 0xf8], 0xff
        lea     eax, [edi + 8]
        mov     dword ptr [edi], eax
        mov     dword ptr [edi + 4], 0xf0
        add     edi, 0x1000
        jmp     L_38e0
L_3904:
        mov     eax, esi
        jmp     L_392f
L_3908:
        push    0x8000
        push    0
        push    edi
        call    dword ptr [g_10005070]
L_3916:
        cmp     esi, 0x10006340
        jz      L_392d
        push    esi
        push    0
        push    dword ptr [g_10008fe8]
        call    dword ptr [g_10005074]
L_392d:
        xor     eax, eax
L_392f:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
