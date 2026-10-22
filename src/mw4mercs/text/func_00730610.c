/*
 * FUN_00730610 (883 B) — __cdecl. Builds a dialog template / control
 * descriptor block.
 *
 * Allocates a buffer via LocalAlloc (IAT 0x76b0bc), fills it with a long
 * sequence of 16-bit control/flag words, and calls helper builders
 * (FUN_007314f0 / FUN_007315e0 / FUN_00731580 / FUN_007314e0 /
 * FUN_00731610) to append string-keyed entries. Ends by invoking a dialog
 * via DialogBoxIndirectParamA (IAT 0x76b434) with a callback at 0x730990,
 * then LocalHandle/LocalFree (IAT 0x76b238/0x76b140).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void* (__stdcall *g_76b0bc)(unsigned int, unsigned int); /* LocalAlloc */
extern void* (__stdcall *g_76b434)(void);                       /* DialogBoxIndirectParamA */
extern void* (__stdcall *g_76b238)(void);                       /* LocalHandle */
extern void* (__stdcall *g_76b140)(void*);                      /* LocalFree */

extern short g_8a9860;
extern int   g_87dc00;
extern int   g_858bf8;
extern int   g_858bfc;

extern void __cdecl FUN_007314f0(void);
extern void __cdecl FUN_007315e0(void);
extern void __cdecl FUN_00731580(void);
extern void __cdecl FUN_007314e0(void);
extern void __cdecl FUN_00731610(void);

__declspec(naked) void FUN_00730610(void)
{
    __asm {
        push    esi
        push    edi
        push    0x800
        push    0x40
        call    dword ptr [g_76b0bc]
        mov     esi, eax
        mov     word ptr [esi], 0xac4
        mov     word ptr [esi + 2], 0x80c0
        mov     edi, esi
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 5
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0x163
        add     esi, 2
        add     esi, 2
        mov     word ptr [esi], 0xba
        add     esi, 2
        mov     word ptr [esi], 0
        add     esi, 2
        mov     word ptr [esi], 0
        push    0x7a5eb8
        add     esi, 2
        push    esi
        call    FUN_007314f0
        and     eax, 0xffff
        lea     esi, [esi + eax*2]
        call    FUN_007315e0
        push    0x7a5eac
        mov     word ptr [esi], ax
        push    0x8d
        add     esi, 2
        push    esi
        call    FUN_00731580
        mov     word ptr [g_8a9860], 0x3ea
        and     eax, 0xffff
        lea     eax, [esi + eax*2]
        push    eax
        call    FUN_007314e0
        mov     esi, eax
        mov     word ptr [esi], 0
        mov     word ptr [esi + 2], 0x5003
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0x4e
        add     esi, 2
        mov     word ptr [esi + 2], 0xa7
        add     esi, 2
        add     esi, 2
        mov     word ptr [esi], 0x2e
        add     esi, 2
        mov     word ptr [esi], 0xe
        add     esi, 2
        mov     word ptr [esi], 0x3ea
        push    0x772354
        add     esi, 2
        push    esi
        call    FUN_007314f0
        push    0x7a5ea4
        and     eax, 0xffff
        lea     esi, [esi + eax*2]
        push    0x94
        push    esi
        call    FUN_00731610
        and     eax, 0xffff
        lea     eax, [esi + eax*2]
        mov     word ptr [eax], 0
        add     eax, 2
        push    eax
        call    FUN_007314e0
        mov     esi, eax
        mov     word ptr [esi], 0
        mov     word ptr [esi + 2], 0x5001
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0x9c
        add     esi, 2
        mov     word ptr [esi + 2], 0xa7
        add     esi, 2
        add     esi, 2
        mov     word ptr [esi], 0x2e
        add     esi, 2
        mov     word ptr [esi], 0xe
        add     esi, 2
        mov     word ptr [esi], 3
        push    0x772354
        add     esi, 2
        push    esi
        call    FUN_007314f0
        and     eax, 0xffff
        lea     esi, [esi + eax*2]
        mov     eax, dword ptr [g_87dc00]
        __emit 0xF6          /* TEST AH,0x8 (MSVC6 rejects test ah,imm8) */
        __emit 0xC4
        __emit 0x08
        je      L_7307c7
        push    0x7a5e80
        push    0x90
        jmp     L_7307d1
L_7307c7:
        push    0x7a5e74
        push    0x91
L_7307d1:
        push    esi
        call    FUN_00731610
        and     eax, 0xffff
        lea     eax, [esi + eax*2]
        mov     word ptr [eax], 0
        add     eax, 2
        push    eax
        call    FUN_007314e0
        mov     esi, eax
        mov     word ptr [esi], 0
        mov     word ptr [esi + 2], 0x5001
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0xea
        add     esi, 2
        mov     word ptr [esi + 2], 0xa7
        add     esi, 2
        add     esi, 2
        mov     word ptr [esi], 0x2e
        add     esi, 2
        mov     word ptr [esi], 0xe
        add     esi, 2
        mov     word ptr [esi], 0x3ec
        push    0x772354
        add     esi, 2
        push    esi
        call    FUN_007314f0
        push    0x7a5e6c
        and     eax, 0xffff
        lea     esi, [esi + eax*2]
        push    0x92
        push    esi
        call    FUN_00731610
        and     eax, 0xffff
        lea     eax, [esi + eax*2]
        mov     word ptr [eax], 0
        add     eax, 2
        push    eax
        call    FUN_007314e0
        mov     esi, eax
        mov     word ptr [esi], 0x8c4
        mov     word ptr [esi + 2], 0x50a2
        add     esi, 2
        mov     word ptr [esi + 2], 0x204
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 2
        add     esi, 2
        mov     word ptr [esi + 2], 5
        add     esi, 2
        add     esi, 2
        mov     word ptr [esi], 0x15f
        add     esi, 2
        mov     word ptr [esi], 0x74
        add     esi, 2
        mov     word ptr [esi], 0x3e9
        push    0x7a5e48
        add     esi, 2
        push    esi
        call    FUN_007314f0
        and     eax, 0xffff
        lea     eax, [esi + eax*2]
        mov     word ptr [eax], 0
        add     eax, 2
        mov     word ptr [eax], 0
        add     eax, 2
        push    eax
        call    FUN_007314e0
        mov     esi, eax
        mov     word ptr [esi], 0x10c4
        add     esi, 2
        mov     word ptr [esi], 0x50a0
        add     esi, 2
        mov     word ptr [esi], 0
        add     esi, 2
        mov     word ptr [esi], 0
        add     esi, 2
        mov     word ptr [esi], 2
        mov     word ptr [esi + 2], 0x7d
        add     esi, 2
        add     esi, 2
        mov     word ptr [esi], 0x15f
        add     esi, 2
        mov     word ptr [esi], 0x25
        add     esi, 2
        mov     word ptr [esi], 0x3ef
        push    0x7a5e48
        add     esi, 2
        push    esi
        call    FUN_007314f0
        mov     ecx, dword ptr [g_858bf8]
        mov     edx, dword ptr [g_858bfc]
        push    0
        push    0x730990
        push    ecx
        and     eax, 0xffff
        lea     eax, [esi + eax*2]
        push    edi
        mov     word ptr [eax], 0
        push    edx
        mov     word ptr [eax + 2], 0
        call    dword ptr [g_76b434]
        push    edi
        call    dword ptr [g_76b238]
        push    eax
        call    dword ptr [g_76b140]
        pop     edi
        pop     esi
        ret
    }
}
