/*
 * FUN_00764400 (562 B) — __cdecl (2 stack params, RET).
 *
 * In-.text data block at 0x764400. Obfuscated/anti-tamper-style function:
 * the real logic (validate [ebp+0xc], call a function pointer, allocate via
 * FUN_00765C80, call FUN_00765E50, free via IAT 0x76b0b8) is interleaved
 * with junk `EB 00` jmp chains and `D6 salc` blocks. Each `EB 00` is a real
 * jmp to the immediately-following instruction (transcribed as such); each
 * `D6 salc` is __emit (undocumented opcode, MSVC6 has no mnemonic).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8bd4f0;   /* DAT_008bd4f0 */

extern void *g_76b0b8;  /* IAT 0x76b0b8 */

extern void __cdecl FUN_00765C80(void);
extern void __cdecl FUN_00765E50(void);

__declspec(naked) void __cdecl FUN_00764400(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        push    edi
        jmp     Lc1
        /* __emit: salc (D6, undocumented; no MSVC6 mnemonic) */
        __emit 0xD6
        __emit 0xD6
        cmp     al, 0
Lc1:
        jmp     c1_1
c1_1:   jmp     c1_2
c1_2:   jmp     c1_3
c1_3:   jmp     c1_4
c1_4:   jmp     c1_5
c1_5:   jmp     c1_6
c1_6:   jmp     c1_7
c1_7:   jmp     c1_8
c1_8:   jmp     c1_9
c1_9:   jmp     c1_10
c1_10:  jmp     c1_11
c1_11:  jmp     c1_12
c1_12:  jmp     c1_13
c1_13:  jmp     c1_14
c1_14:  jmp     c1_15
c1_15:  jmp     c1_16
c1_16:  jmp     c1_17
c1_17:  jmp     c1_18
c1_18:  jmp     c1_19
c1_19:  jmp     c1_20
c1_20:  jmp     c1_21
c1_21:  jmp     c1_22
c1_22:  jmp     c1_23
c1_23:  jmp     c1_24
c1_24:  jmp     c1_25
c1_25:  jmp     c1_26
c1_26:  jmp     Lc2
Lc2:
        jmp     Lc2chain
        /* __emit: salc (D6) */
        __emit 0xD6
        __emit 0xD6
        cmp     al, 0
Lc2chain:
        jmp     c2_1
c2_1:   jmp     c2_2
c2_2:   jmp     c2_3
c2_3:   jmp     c2_4
c2_4:   jmp     c2_5
c2_5:   jmp     c2_6
c2_6:   jmp     c2_7
c2_7:   jmp     c2_8
c2_8:   jmp     c2_9
c2_9:   jmp     c2_10
c2_10:  jmp     c2_11
c2_11:  jmp     c2_12
c2_12:  jmp     c2_13
c2_13:  jmp     c2_14
c2_14:  jmp     c2_15
c2_15:  jmp     c2_16
c2_16:  jmp     c2_17
c2_17:  jmp     c2_18
c2_18:  jmp     c2_19
c2_19:  jmp     c2_20
c2_20:  jmp     c2_21
c2_21:  jmp     c2_22
c2_22:  jmp     c2_23
c2_23:  jmp     c2_24
c2_24:  jmp     c2_25
c2_25:  jmp     c2_26
c2_26:  jmp     Lreal1
Lreal1:
        mov     edi, dword ptr [ebp + 0xc]
        test    edi, edi
        jne     Lreal2
        mov     eax, 0xb
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
Lreal2:
        mov     ebx, dword ptr [edi]
        jmp     Lc3
        /* __emit: salc (D6) */
        __emit 0xD6
        __emit 0xD6
        cmp     al, 0
Lc3:
        jmp     c3_1
c3_1:   jmp     c3_2
c3_2:   jmp     c3_3
c3_3:   jmp     c3_4
c3_4:   jmp     c3_5
c3_5:   jmp     c3_6
c3_6:   jmp     c3_7
c3_7:   jmp     c3_8
c3_8:   jmp     c3_9
c3_9:   jmp     c3_10
c3_10:  jmp     c3_11
c3_11:  jmp     c3_12
c3_12:  jmp     c3_13
c3_13:  jmp     c3_14
c3_14:  jmp     c3_15
c3_15:  jmp     c3_16
c3_16:  jmp     c3_17
c3_17:  jmp     c3_18
c3_18:  jmp     c3_19
c3_19:  jmp     c3_20
c3_20:  jmp     c3_21
c3_21:  jmp     c3_22
c3_22:  jmp     c3_23
c3_23:  jmp     c3_24
c3_24:  jmp     c3_25
c3_25:  jmp     c3_26
c3_26:  jmp     Lreal3
Lreal3:
        test    ebx, ebx
        jne     Lreal4
        mov     eax, 0xb
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
Lreal4:
        mov     ecx, dword ptr [ebp + 8]
        mov     edx, dword ptr [g_8bd4f0]
        lea     eax, [ebp - 4]
        push    eax
        push    0
        push    0
        push    0x98
        push    ecx
        push    edx
        call    FUN_00765C80
        add     esp, 0x18
        mov     esi, eax
        jmp     Lc4
        /* __emit: salc (D6) */
        __emit 0xD6
        __emit 0xD6
        cmp     al, 0
Lc4:
        jmp     c4_1
c4_1:   jmp     c4_2
c4_2:   jmp     c4_3
c4_3:   jmp     c4_4
c4_4:   jmp     c4_5
c4_5:   jmp     c4_6
c4_6:   jmp     c4_7
c4_7:   jmp     c4_8
c4_8:   jmp     c4_9
c4_9:   jmp     c4_10
c4_10:  jmp     c4_11
c4_11:  jmp     c4_12
c4_12:  jmp     c4_13
c4_13:  jmp     c4_14
c4_14:  jmp     c4_15
c4_15:  jmp     c4_16
c4_16:  jmp     c4_17
c4_17:  jmp     c4_18
c4_18:  jmp     c4_19
c4_19:  jmp     c4_20
c4_20:  jmp     c4_21
c4_21:  jmp     c4_22
c4_22:  jmp     c4_23
c4_23:  jmp     c4_24
c4_24:  jmp     c4_25
c4_25:  jmp     c4_26
c4_26:  jmp     Lreal5
Lreal5:
        test    esi, esi
        jne     Lreal6
        mov     eax, 0xb
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
Lreal6:
        push    esi
        call    ebx
        add     esp, 4
        mov     ebx, eax
        jmp     Lc5
        /* __emit: salc (D6) */
        __emit 0xD6
        __emit 0xD6
        cmp     al, 0
Lc5:
        jmp     c5_1
c5_1:   jmp     c5_2
c5_2:   jmp     c5_3
c5_3:   jmp     c5_4
c5_4:   jmp     c5_5
c5_5:   jmp     c5_6
c5_6:   jmp     c5_7
c5_7:   jmp     c5_8
c5_8:   jmp     c5_9
c5_9:   jmp     c5_10
c5_10:  jmp     c5_11
c5_11:  jmp     c5_12
c5_12:  jmp     c5_13
c5_13:  jmp     c5_14
c5_14:  jmp     c5_15
c5_15:  jmp     c5_16
c5_16:  jmp     c5_17
c5_17:  jmp     c5_18
c5_18:  jmp     c5_19
c5_19:  jmp     c5_20
c5_20:  jmp     c5_21
c5_21:  jmp     c5_22
c5_22:  jmp     c5_23
c5_23:  jmp     c5_24
c5_24:  jmp     c5_25
c5_25:  jmp     c5_26
c5_26:  jmp     Lreal7
Lreal7:
        mov     eax, dword ptr [g_8bd4f0]
        push    esi
        push    eax
        call    FUN_00765E50
        add     esp, 8
        mov     dword ptr [edi], 0
        jmp     Lc6
        /* __emit: salc (D6) */
        __emit 0xD6
        __emit 0xD6
        cmp     al, 0
Lc6:
        jmp     c6_1
c6_1:   jmp     c6_2
c6_2:   jmp     c6_3
c6_3:   jmp     c6_4
c6_4:   jmp     c6_5
c6_5:   jmp     c6_6
c6_6:   jmp     c6_7
c6_7:   jmp     c6_8
c6_8:   jmp     c6_9
c6_9:   jmp     c6_10
c6_10:  jmp     c6_11
c6_11:  jmp     c6_12
c6_12:  jmp     c6_13
c6_13:  jmp     c6_14
c6_14:  jmp     c6_15
c6_15:  jmp     c6_16
c6_16:  jmp     c6_17
c6_17:  jmp     c6_18
c6_18:  jmp     c6_19
c6_19:  jmp     c6_20
c6_20:  jmp     c6_21
c6_21:  jmp     c6_22
c6_22:  jmp     c6_23
c6_23:  jmp     c6_24
c6_24:  jmp     c6_25
c6_25:  jmp     c6_26
c6_26:  jmp     Lreal8
Lreal8:
        mov     ecx, dword ptr [edi + 4]
        push    ecx
        call    dword ptr [g_76b0b8]
        jmp     Lc7
        /* __emit: salc (D6) */
        __emit 0xD6
        __emit 0xD6
        cmp     al, 0
Lc7:
        jmp     c7_1
c7_1:   jmp     c7_2
c7_2:   jmp     c7_3
c7_3:   jmp     c7_4
c7_4:   jmp     c7_5
c7_5:   jmp     c7_6
c7_6:   jmp     c7_7
c7_7:   jmp     c7_8
c7_8:   jmp     c7_9
c7_9:   jmp     c7_10
c7_10:  jmp     c7_11
c7_11:  jmp     c7_12
c7_12:  jmp     c7_13
c7_13:  jmp     c7_14
c7_14:  jmp     c7_15
c7_15:  jmp     c7_16
c7_16:  jmp     c7_17
c7_17:  jmp     c7_18
c7_18:  jmp     c7_19
c7_19:  jmp     c7_20
c7_20:  jmp     c7_21
c7_21:  jmp     c7_22
c7_22:  jmp     c7_23
c7_23:  jmp     c7_24
c7_24:  jmp     c7_25
c7_25:  jmp     c7_26
c7_26:  jmp     Lreal9
Lreal9:
        pop     edi
        mov     eax, ebx
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
