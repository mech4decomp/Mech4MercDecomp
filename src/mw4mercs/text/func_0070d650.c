/*
 * FUN_0070d650 (330 B) — Draws a multi-segment HUD/UI element. Computes a
 * per-column offset (param_4 * 0x17), calls FUN_0070d500 to draw a base
 * segment, then dispatches on param_3 (0..4) via a jump table to draw
 * 1-3 additional segments with per-case offsets/colors.
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0070d500(int, int, int, int, int, int, int, int);
extern void __cdecl FUN_00713cc0(int, int);
extern void __cdecl FUN_007103b0(int, int, int, int, int);
extern unsigned int g_8b28d4;   /* 0x008b28d4 */

__declspec(naked) void __stdcall FUN_0070d650(int p1, int p2, int p3, int p4)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        lea     eax, [ebx + ebx*0x2]
        shl     eax, 0x3
        sub     eax, ebx
        lea     ecx, [eax + 0x5a]
        push    ecx
        push    0x7f
        add     eax, 0x44
        push    eax
        push    0x69
        push    0x16
        push    0x16
        push    edi
        push    esi
        call    FUN_0070d500
        mov     eax, dword ptr [esp + 0x18]
        add     esi, ebx
        add     edi, ebx
        cmp     eax, 0x4
        ja      EXIT
        __emit 0xFF  /* __emit: jmp dword ptr [eax*4+imm32] dispatch — MSVC6 re-bases via EBX instead of FF 24 85 */
        __emit 0x24
        __emit 0x85
        __emit 0x9C
        __emit 0xD7
        __emit 0x70
        __emit 0x00

        /* case 0 */
        push    0x0
        push    0x1
        call    FUN_00713cc0
        push    0x0
        push    0x9
        push    0x7
        add     edi, 0x6
        push    edi
        add     esi, 0x7
        push    esi
        call    FUN_007103b0
        mov     edx, dword ptr [g_8b28d4]
        push    edx
        push    0x1
        call    FUN_00713cc0
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10

        /* case 1 */
        push    0x4d
        push    0x68
        push    0x44
        push    0x62
        push    0x9
        push    -0x6
        add     edi, 0x6
        push    edi
        add     esi, 0xe
        push    esi
        call    FUN_0070d500
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10

        /* case 2 */
        push    0x4d
        push    0x62
        push    0x44
        push    0x60
        push    0x9
        push    0x2
        add     edi, 0x6
        push    edi
        lea     eax, [esi + 0x9]
        push    eax
        call    FUN_0070d500
        push    0x4d
        push    0x62
        push    0x44
        push    0x60
        push    0x9
        push    0x2
        push    edi
        add     esi, 0xc
        push    esi
        call    FUN_0070d500
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10

        /* case 3 */
        push    0x4d
        push    0x68
        push    0x44
        push    0x62
        push    0x9
        push    -0x6
        add     edi, 0x6
        push    edi
        lea     ecx, [esi + 0xd]
        push    ecx
        call    FUN_0070d500
        push    0x4d
        push    0x68
        push    0x44
        push    0x62
        push    0x9
        push    -0x6
        push    edi
        add     esi, 0x13
        push    esi
        call    FUN_0070d500
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10

        /* case 4 */
        push    0x4d
        push    0x68
        push    0x44
        push    0x62
        push    0x9
        push    -0x6
        add     edi, 0x6
        push    edi
        lea     edx, [esi + 0xa]
        push    edx
        call    FUN_0070d500
        push    0x4d
        push    0x68
        push    0x44
        push    0x62
        push    0x9
        push    -0x6
        push    edi
        lea     eax, [esi + 0x10]
        push    eax
        call    FUN_0070d500
        push    0x4d
        push    0x62
        push    0x44
        push    0x60
        push    0x9
        push    -0x2
        push    edi
        add     esi, 0x13
        push    esi
        call    FUN_0070d500

EXIT:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
