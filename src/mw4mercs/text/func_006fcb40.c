/*
 * FUN_006fcb40 (393 B) — __cdecl, no params, plain RET.
 * Error-code-to-string lookup. Reads DAT_00856844 and dispatches through
 * four jump tables (0x6fcccc, 0x6fccf4, 0x6fcd14, 0x6fcd34) returning a
 * string pointer; default "Unknown error code." at 0x7a03e8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00856844;

__declspec(naked) void __cdecl FUN_006fcb40(void)
{
    __asm {
        mov     eax, dword ptr [g_00856844]
        cmp     eax, 0xc1120400
        jg      L_cba5
        jz      L_cb9f
        add     eax, 0x3eedffff
        cmp     eax, 0x9
        ja      L_ccb7
        jmp     dword ptr [eax*4 + 0x6fcccc]
        mov     eax, 0x7a0b8c
        ret
        mov     eax, 0x7a0b50
        ret
        mov     eax, 0x7a0b34
        ret
        mov     eax, 0x7a0afc
        ret
        mov     eax, 0x7a0ab0
        ret
        mov     eax, 0x7a0a94
        ret
        mov     eax, 0x7a0a74
        ret
        mov     eax, 0x7a0a2c
        ret
        mov     eax, 0x7a09ec
        ret
        mov     eax, 0x7a09bc
        ret
L_cb9f:
        mov     eax, 0x7a0988
        ret
L_cba5:
        cmp     eax, 0xc1120800
        jg      L_cbf9
        jz      L_cbf3
        add     eax, 0x3eedfbff
        cmp     eax, 0x7
        ja      L_ccb7
        jmp     dword ptr [eax*4 + 0x6fccf4]
        mov     eax, 0x7a095c
        ret
        mov     eax, 0x7a0924
        ret
        mov     eax, 0x7a08f4
        ret
        mov     eax, 0x7a08bc
        ret
        mov     eax, 0x7a0898
        ret
        mov     eax, 0x7a0870
        ret
        mov     eax, 0x7a083c
        ret
        mov     eax, 0x7a0800
        ret
L_cbf3:
        mov     eax, 0x7a07c4
        ret
L_cbf9:
        cmp     eax, 0xc1120c00
        jg      L_cc4d
        jz      L_cc47
        add     eax, 0x3eedf7ff
        cmp     eax, 0x7
        ja      L_ccb7
        jmp     dword ptr [eax*4 + 0x6fcd14]
        mov     eax, 0x7a0788
        ret
        mov     eax, 0x7a0734
        ret
        mov     eax, 0x7a06f0
        ret
        mov     eax, 0x7a06c0
        ret
        mov     eax, 0x7a0684
        ret
        mov     eax, 0x7a0658
        ret
        mov     eax, 0x7a0610
        ret
        mov     eax, 0x7a05dc
        ret
L_cc47:
        mov     eax, 0x7a05b8
        ret
L_cc4d:
        cmp     eax, 0xc1121c00
        jg      L_cca9
        jz      L_cca3
        add     eax, 0x3eedf3ff
        cmp     eax, 0x9
        ja      L_ccb7
        jmp     dword ptr [eax*4 + 0x6fcd34]
        mov     eax, 0x7a0590
        ret
        mov     eax, 0x7a0568
        ret
        mov     eax, 0x7a0540
        ret
        mov     eax, 0x7a0504
        ret
        mov     eax, 0x7a04dc
        ret
        mov     eax, 0x7a049c
        ret
        mov     eax, 0x7a0480
        ret
        mov     eax, 0x7a046c
        ret
        mov     eax, 0x7a044c
        ret
        mov     eax, 0x7a0424
        ret
L_cca3:
        mov     eax, 0x7a03fc
        ret
L_cca9:
        cmp     eax, 0xc1121c01
        jz      L_ccc3
        cmp     eax, 0xc1121c02
        jz      L_ccbd
L_ccb7:
        mov     eax, 0x7a03e8
        ret
L_ccbd:
        mov     eax, 0x7a03bc
        ret
L_ccc3:
        mov     eax, 0x7a0390
        ret
    }
}
