/*
 * FUN_00763DC0 (242 B) — __stdcall, RET (no stack cleanup; 2 dword params).
 * Calls FUN_00763DB0(param_1); if it returns 0, returns 0xB. Otherwise calls
 * the callback at [EBP+0xC]; if it returns 10, clears a slot in the
 * DAT_008bd4a0 table and decrements DAT_008bd498, returning 10.
 *
 * The function body is padded with EB 04 / EB 00 self-jump chains (obfuscation
 * padding) around the real logic. These are transcribed as real short-jump
 * mnemonics to labels placed at the immediately-following instruction, which
 * MSVC6 encodes as EB 00 (verified). The 4 data bytes after each EB 04
 * (D6 D6 3C 00) are unreachable padding data emitted via __emit.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8bd498;            /* DAT_008bd498 */
extern int g_8bd4a0;            /* DAT_008bd4a0 */

extern void __cdecl FUN_00763DB0(void);

__declspec(naked) int __stdcall FUN_00763DC0(int param_1, void *param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    esi
        call    FUN_00763DB0
        add     esp, 0x4
        jmp     D1
        __emit  0xD6            /* padding data (unreachable) */
        __emit  0xD6
        __emit  0x3C
        __emit  0x00
D1:
        jmp     P1_1
P1_1:   jmp     P1_2
P1_2:   jmp     P1_3
P1_3:   jmp     P1_4
P1_4:   jmp     P1_5
P1_5:   jmp     P1_6
P1_6:   jmp     P1_7
P1_7:   jmp     P1_8
P1_8:   jmp     P1_9
P1_9:   jmp     P1_10
P1_10:  jmp     P1_11
P1_11:  jmp     P1_12
P1_12:  jmp     P1_13
P1_13:  jmp     P1_14
P1_14:  jmp     P1_15
P1_15:  jmp     P1_16
P1_16:  jmp     P1_17
P1_17:  jmp     P1_18
P1_18:  jmp     P1_19
P1_19:  jmp     P1_20
P1_20:  jmp     P1_21
P1_21:  jmp     P1_22
P1_22:  jmp     P1_23
P1_23:  jmp     P1_24
P1_24:  jmp     P1_25
P1_25:  jmp     P1_26
P1_26:  jmp     P1_27
P1_27:
        test    eax, eax
        jnz     L_e18
        mov     eax, 0xb
        pop     esi
        pop     ebp
        ret
L_e18:
        call    dword ptr [ebp + 0xc]
        jmp     D2
        __emit  0xD6            /* padding data (unreachable) */
        __emit  0xD6
        __emit  0x3C
        __emit  0x00
D2:
        jmp     P2_1
P2_1:   jmp     P2_2
P2_2:   jmp     P2_3
P2_3:   jmp     P2_4
P2_4:   jmp     P2_5
P2_5:   jmp     P2_6
P2_6:   jmp     P2_7
P2_7:   jmp     P2_8
P2_8:   jmp     P2_9
P2_9:   jmp     P2_10
P2_10:  jmp     P2_11
P2_11:  jmp     P2_12
P2_12:  jmp     P2_13
P2_13:  jmp     P2_14
P2_14:  jmp     P2_15
P2_15:  jmp     P2_16
P2_16:  jmp     P2_17
P2_17:  jmp     P2_18
P2_18:  jmp     P2_19
P2_19:  jmp     P2_20
P2_20:  jmp     P2_21
P2_21:  jmp     P2_22
P2_22:  jmp     P2_23
P2_23:  jmp     P2_24
P2_24:  jmp     P2_25
P2_25:  jmp     P2_26
P2_26:  jmp     P2_27
P2_27:
        cmp     eax, 0xa
        jz      L_e64
        mov     eax, 0xb
        pop     esi
        pop     ebp
        ret
L_e64:
        mov     eax, dword ptr [g_8bd498]
        mov     dword ptr [esi*4 + g_8bd4a0], 0
        dec     eax
        mov     dword ptr [g_8bd498], eax
        jmp     D3
        __emit  0xD6            /* padding data (unreachable) */
        __emit  0xD6
        __emit  0x3C
        __emit  0x00
D3:
        jmp     P3_1
P3_1:   jmp     P3_2
P3_2:   jmp     P3_3
P3_3:   jmp     P3_4
P3_4:   jmp     P3_5
P3_5:   jmp     P3_6
P3_6:   jmp     P3_7
P3_7:   jmp     P3_8
P3_8:   jmp     P3_9
P3_9:   jmp     P3_10
P3_10:  jmp     P3_11
P3_11:  jmp     P3_12
P3_12:  jmp     P3_13
P3_13:  jmp     P3_14
P3_14:  jmp     P3_15
P3_15:  jmp     P3_16
P3_16:  jmp     P3_17
P3_17:  jmp     P3_18
P3_18:  jmp     P3_19
P3_19:  jmp     P3_20
P3_20:  jmp     P3_21
P3_21:  jmp     P3_22
P3_22:  jmp     P3_23
P3_23:  jmp     P3_24
P3_24:  jmp     P3_25
P3_25:  jmp     P3_26
P3_26:  jmp     P3_27
P3_27:
        mov     eax, 0xa
        pop     esi
        pop     ebp
        ret
    }
}
