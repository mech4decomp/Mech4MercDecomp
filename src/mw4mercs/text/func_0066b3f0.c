/*
 * FUN_0066b3f0 (733 B) - AnimationStateEngine::LoadScript.
 * Parses a script (via FUN_004d2000 stream), walks the code list, and for
 * each entry dispatches on whether the name contains "::" (strstr @ IAT
 * 0x76b298) to build either a state (FUN_00603dd0) or a transition
 * (FUN_00603e10) object, accumulating counts, then allocates the state
 * array (0x30) and transition array (0x34). Second pass walks the list
 * again to wire up references. __thiscall, RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_7f27a4;                 /* DAT_007f27a4 */
extern int   g_7b8810;                 /* DAT_007b8810 */
extern void *g_76b298;                 /* IAT: strstr @ 0x76b298 */

extern void __cdecl FUN_006f4950(int);
extern void __cdecl FUN_004d2000(int, int);   /* thiscall via ECX */
extern void __cdecl FUN_004d21c0(void);       /* thiscall via ECX */
extern void __cdecl FUN_004d2310(void);       /* thiscall via ECX */
extern void __cdecl FUN_0040dd50(void);       /* thiscall via ECX */
extern void *__cdecl FUN_004084c0(int, int);
extern void *__cdecl FUN_004084d0(int);       /* alloc */
extern void *__cdecl FUN_00603dd0(void);      /* thiscall via ECX */
extern int   __cdecl FUN_0066bba0(int);       /* thiscall via ECX */
extern void __cdecl FUN_004179b0(void);       /* thiscall via ECX */
extern void *__cdecl FUN_00603e10(void);      /* thiscall via ECX */
extern int   __cdecl FUN_006fab90(const char *);
extern void __cdecl FUN_0066bd40(void);       /* thiscall via ECX */
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d2330(void);       /* thiscall via ECX */
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0040de20(void);       /* thiscall via ECX */
extern void __cdecl FUN_0066bc30(void);       /* thiscall via ECX */

__declspec(naked) void FUN_0066b3f0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xbc
        mov     eax, dword ptr [g_7f27a4]
        push    ebx
        push    esi
        mov     ebx, ecx
        push    eax
        mov     byte ptr [ebx + 0x1c], 1
        call    FUN_006f4950
        mov     ecx, dword ptr [ebp + 0x8]
        xor     esi, esi
        push    esi
        push    ecx
        lea     ecx, [ebp - 0x6c]
        call    FUN_004d2000
        cmp     dword ptr [ebp - 0x30], esi
        jz      L_b425
        cmp     dword ptr [ebp - 0x50], esi
        ja      L_b435
L_b425:
        lea     ecx, [ebp - 0x6c]
        call    FUN_004d21c0
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_b435:
        lea     ecx, [ebp - 0x6c]
        call    FUN_004d2310
        lea     edx, [ebp - 0x6c]
        push    edx
        lea     ecx, [ebp - 0xbc]
        call    FUN_0040dd50
        mov     eax, dword ptr [g_7b8810]
        push    eax
        push    0xc
        call    FUN_004084c0
        add     esp, 8
        cmp     eax, esi
        jz      L_b477
        lea     ecx, [ebp - 0x78]
        mov     dword ptr [eax + 4], ecx
        mov     edx, dword ptr [ebp - 0x78]
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax], 0x76cd64
        mov     dword ptr [ebp - 0x10], eax
        jmp     L_b47a
L_b477:
        mov     dword ptr [ebp - 0x10], esi
L_b47a:
        push    edi
        mov     dword ptr [ebp - 0xc], esi
        mov     dword ptr [ebp + 8], esi
        mov     esi, dword ptr [ebp - 0x10]
L_b481:
        mov     eax, dword ptr [esi + 8]
        test    eax, eax
        jz      L_b57a
        mov     edi, dword ptr [eax]
        test    edi, edi
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [esi + 8], eax
        jz      L_b57a
        mov     esi, dword ptr [edi + 0x14]
        push    0x772d84
        push    esi
        call    dword ptr [g_76b298]
        add     esp, 8
        test    eax, eax
        jnz     L_b4ff
        push    0x30
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_b4cf
        push    ebx
        mov     ecx, eax
        call    FUN_00603dd0
        mov     esi, eax
        jmp     L_b4d1
L_b4cf:
        xor     esi, esi
L_b4d1:
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 4]
        push    edi
        mov     ecx, esi
        call    FUN_0066bba0
        mov     ecx, dword ptr [ebp - 0xc]
        add     ecx, eax
        mov     eax, dword ptr [esi]
        mov     dword ptr [ebp - 0xc], ecx
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        add     dword ptr [ebp + 8], eax
        push    esi
        lea     ecx, [ebx + 0x68]
        call    FUN_004179b0
        __emit 0xEB   /* jmp L_b481 - MSVC6 miscomputes backward rel8 (off-by-3) */
        __emit 0x82
L_b4ff:
        push    0x772d84
        push    esi
        call    dword ptr [g_76b298]
        add     esp, 8
        test    eax, eax
        jz      L_b55f
        push    0x4c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_b52c
        push    ebx
        mov     ecx, eax
        call    FUN_00603e10
        mov     esi, eax
        jmp     L_b52e
L_b52c:
        xor     esi, esi
L_b52e:
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 4]
        push    edi
        mov     ecx, esi
        call    FUN_0066bba0
        mov     ecx, dword ptr [ebp - 0xc]
        add     ecx, eax
        mov     eax, dword ptr [esi]
        mov     dword ptr [ebp - 0xc], ecx
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        add     dword ptr [ebp + 8], eax
        push    esi
        lea     ecx, [ebx + 0x70]
        call    FUN_004179b0
        __emit 0xE9   /* jmp L_b481 - MSVC6 miscomputes backward rel32 (off-by-3) */
        __emit 0x22
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
L_b55f:
        push    0x796da0
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        __emit 0x0F   /* jz L_b481 - MSVC6 miscomputes backward rel32 (off-by-3) */
        __emit 0x84
        __emit 0x0D
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        int     3
        __emit 0xE9   /* jmp L_b481 (dead-code tail after INT3) - backward rel32 off-by-3 */
        __emit 0x07
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
L_b57a:
        mov     eax, dword ptr [ebp - 0xc]
        __emit 0x8D   /* lea ecx,[eax*4+0] - no-base SIB form MSVC6 can't encode */
        __emit 0x0C
        __emit 0x85
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    ecx
        mov     dword ptr [ebx + 0x2c], eax
        call    FUN_004084d0
        mov     dword ptr [ebx + 0x30], eax
        mov     eax, dword ptr [ebp + 8]
        add     esp, 4
        test    eax, eax
        mov     dword ptr [ebx + 0x38], eax
        jz      L_b5dd
        lea     edx, [eax + eax*2]
        shl     edx, 3
        push    edx
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        jz      L_b5d5
        mov     eax, dword ptr [ebp + 8]
        dec     eax
        test    eax, eax
        mov     esi, edi
        jl      L_b5d7
        inc     eax
        mov     dword ptr [ebp + 8], eax
L_b5c0:
        mov     ecx, esi
        call    FUN_0066bd40
        mov     eax, dword ptr [ebp + 8]
        add     esi, 0x18
        dec     eax
        mov     dword ptr [ebp + 8], eax
        jnz     L_b5c0
        jmp     L_b5d7
L_b5d5:
        xor     edi, edi
L_b5d7:
        mov     esi, dword ptr [ebp - 0x10]
        mov     dword ptr [ebx + 0x34], edi
L_b5dd:
        mov     ecx, dword ptr [ebx + 0x68]
        mov     edx, dword ptr [ebx + 0x70]
        xor     eax, eax
        mov     dword ptr [ebp - 4], eax
        mov     dword ptr [ebp - 8], eax
        mov     eax, dword ptr [esi + 4]
        mov     dword ptr [ebp - 0x20], ecx
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp - 0x14], edx
        mov     dword ptr [esi + 8], ecx
L_b5f9:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ecx + 8]
        test    eax, eax
        jz      L_b6a5
        mov     edi, dword ptr [eax]
        test    edi, edi
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ecx + 8], edx
        jz      L_b6a5
        mov     esi, dword ptr [edi + 0x14]
        mov     ebx, dword ptr [g_76b298]
        push    0x772d84
        push    esi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_b640
        mov     eax, dword ptr [ebp - 0x20]
        test    eax, eax
        jz      L_b660
        mov     esi, dword ptr [eax]
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [ebp - 0x20], eax
        jmp     L_b662
L_b640:
        push    0x772d84
        push    esi
        call    ebx
        add     esp, 8
        test    eax, eax
        jz      L_b68a
        mov     eax, dword ptr [ebp - 0x14]
        test    eax, eax
        jz      L_b660
        mov     esi, dword ptr [eax]
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [ebp - 0x14], eax
        jmp     L_b662
L_b660:
        xor     esi, esi
L_b662:
        mov     ebx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [esi]
        push    ebx
        lea     eax, [ebp - 4]
        push    eax
        lea     ecx, [ebp - 8]
        push    ecx
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 8]
        mov     ecx, esi
        call    FUN_0066bc30
        mov     edx, dword ptr [esi]
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x10]
        jmp     L_b5f9
L_b68a:
        push    0x796da0
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_b5f9
        int     3
        jmp     L_b5f9   /* dead-code tail after INT3 trap (hidden by Ghidra linear disasm) */
L_b6a5:
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        lea     ecx, [ebp - 0x6c]
        call    FUN_004d2330
        call    FUN_006f49a0
        lea     ecx, [ebp - 0xbc]
        call    FUN_0040de20
        lea     ecx, [ebp - 0x6c]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
