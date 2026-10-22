/*
 * FUN_00761690 (558 B) — State machine returning 'Q'/'P' (0x51/0x50).
 * Calls FUN_00762530 / 00761bd0 / 00762a30 / 00761e50 / 00762ce0.
 *
 * Obfuscated: real code blocks are separated by "EB 04 D6 D6 xx 00" jump
 * chains crossed with "EB 00" no-op sleds. The EB 04 skips 4 junk bytes
 * (D6 D6 xx 00) into an EB 00 sled that walks to the next real block.
 * The junk bytes are data (not instructions) and are emitted via __emit;
 * the EB 04 / EB 00 jumps are real jmp mnemonics (each EB 00 is a jmp to
 * the immediately following instruction, encoded as EB 00).
 *
 * __cdecl, RET 4 (1 param). Returns char.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00762530(void);
extern void __cdecl FUN_00761bd0(void);
extern void __cdecl FUN_00762a30(void);
extern void __cdecl FUN_00761e50(void);
extern void __cdecl FUN_00762ce0(void);

__declspec(naked) char __cdecl FUN_00761690(int param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    edi
        jmp     L_sled1
        /* __emit: 4 junk bytes (D6 D6 78 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x78
        __emit 0x00
L_sled1:
        jmp     L1_0
L1_0:
        jmp     L1_1
L1_1:
        jmp     L1_2
L1_2:
        jmp     L1_3
L1_3:
        jmp     L1_4
L1_4:
        jmp     L1_5
L1_5:
        jmp     L1_6
L1_6:
        jmp     L1_7
L1_7:
        jmp     L1_8
L1_8:
        jmp     L1_9
L1_9:
        jmp     L1_10
L1_10:
        jmp     L1_11
L1_11:
        jmp     L1_12
L1_12:
        jmp     L1_13
L1_13:
        jmp     L1_14
L1_14:
        jmp     L1_15
L1_15:
        jmp     L1_16
L1_16:
        jmp     L1_17
L1_17:
        jmp     L1_18
L1_18:
        jmp     L1_19
L1_19:
        jmp     L1_20
L1_20:
        jmp     L1_21
L1_21:
        jmp     L1_22
L1_22:
        jmp     L1_23
L1_23:
        jmp     L1_24
L1_24:
        jmp     L1_25
L1_25:
        jmp     L1_26
L1_26:
        jmp     L1_27
L1_27:
        jmp     L1_28
L1_28:
        jmp     L1_29
L1_29:
        jmp     L1_30
L1_30:
        jmp     L1_31
L1_31:
        jmp     L1_32
L1_32:
        jmp     L1_33
L1_33:
        jmp     L1_34
L1_34:
        jmp     L1_35
L1_35:
        jmp     L1_36
L1_36:
        jmp     L1_37
L1_37:
        jmp     L1_38
L1_38:
        jmp     L1_39
L1_39:
        jmp     L1_40
L1_40:
        jmp     L1_41
L1_41:
        jmp     L1_42
L1_42:
        jmp     L1_43
L1_43:
        jmp     L1_44
L1_44:
        jmp     L1_45
L1_45:
        jmp     L1_46
L1_46:
        jmp     L1_47
L1_47:
        jmp     L1_48
L1_48:
        jmp     L1_49
L1_49:
        jmp     L1_50
L1_50:
        jmp     L1_51
L1_51:
        jmp     L1_52
L1_52:
        jmp     L1_53
L1_53:
        jmp     L1_54
L1_54:
        jmp     L1_55
L1_55:
        jmp     L1_56
L1_56:
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi + 0x100]
        lea     edi, [esi + 0x110]
        push    edi
        push    esi
        push    eax
        call    FUN_00762530
        add     esp, 0xc
        jmp     L_sled2
        /* __emit: 4 junk bytes (D6 D6 3C 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L_sled2:
        jmp     L2_0
L2_0:
        jmp     L2_1
L2_1:
        jmp     L2_2
L2_2:
        jmp     L2_3
L2_3:
        jmp     L2_4
L2_4:
        jmp     L2_5
L2_5:
        jmp     L2_6
L2_6:
        jmp     L2_7
L2_7:
        jmp     L2_8
L2_8:
        jmp     L2_9
L2_9:
        jmp     L2_10
L2_10:
        jmp     L2_11
L2_11:
        jmp     L2_12
L2_12:
        jmp     L2_13
L2_13:
        jmp     L2_14
L2_14:
        jmp     L2_15
L2_15:
        jmp     L2_16
L2_16:
        jmp     L2_17
L2_17:
        jmp     L2_18
L2_18:
        jmp     L2_19
L2_19:
        jmp     L2_20
L2_20:
        jmp     L2_21
L2_21:
        jmp     L2_22
L2_22:
        jmp     L2_23
L2_23:
        jmp     L2_24
L2_24:
        jmp     L2_25
L2_25:
        jmp     L2_26
L2_26:
        cmp     eax, 0xa
        jz      L_771
        mov     eax, 0x51
        pop     edi
        pop     esi
        pop     ebp
        ret
L_771:
        push    esi
        call    FUN_00761bd0
        add     esp, 0x4
        cmp     eax, 0x50
        jz      L_788
        mov     eax, 0x51
        pop     edi
        pop     esi
        pop     ebp
        ret
L_788:
        mov     ecx, dword ptr [esi + 0x10c]
        mov     edx, dword ptr [esi + 0x108]
        mov     eax, dword ptr [edi]
        push    ecx
        push    edx
        push    eax
        call    FUN_00762a30
        add     esp, 0xc
        jmp     L_sled3
        /* __emit: 4 junk bytes (D6 D6 3C 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L_sled3:
        jmp     L3_0
L3_0:
        jmp     L3_1
L3_1:
        jmp     L3_2
L3_2:
        jmp     L3_3
L3_3:
        jmp     L3_4
L3_4:
        jmp     L3_5
L3_5:
        jmp     L3_6
L3_6:
        jmp     L3_7
L3_7:
        jmp     L3_8
L3_8:
        jmp     L3_9
L3_9:
        jmp     L3_10
L3_10:
        jmp     L3_11
L3_11:
        jmp     L3_12
L3_12:
        jmp     L3_13
L3_13:
        jmp     L3_14
L3_14:
        jmp     L3_15
L3_15:
        jmp     L3_16
L3_16:
        jmp     L3_17
L3_17:
        jmp     L3_18
L3_18:
        jmp     L3_19
L3_19:
        jmp     L3_20
L3_20:
        jmp     L3_21
L3_21:
        jmp     L3_22
L3_22:
        jmp     L3_23
L3_23:
        jmp     L3_24
L3_24:
        jmp     L3_25
L3_25:
        jmp     L3_26
L3_26:
        cmp     eax, 0xa
        jz      L_7eb
        mov     eax, 0x51
        pop     edi
        pop     esi
        pop     ebp
        ret
L_7eb:
        push    esi
        call    FUN_00761e50
        add     esp, 0x4
        jmp     L_sled4
        /* __emit: 4 junk bytes (D6 D6 78 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x78
        __emit 0x00
L_sled4:
        jmp     L4_0
L4_0:
        jmp     L4_1
L4_1:
        jmp     L4_2
L4_2:
        jmp     L4_3
L4_3:
        jmp     L4_4
L4_4:
        jmp     L4_5
L4_5:
        jmp     L4_6
L4_6:
        jmp     L4_7
L4_7:
        jmp     L4_8
L4_8:
        jmp     L4_9
L4_9:
        jmp     L4_10
L4_10:
        jmp     L4_11
L4_11:
        jmp     L4_12
L4_12:
        jmp     L4_13
L4_13:
        jmp     L4_14
L4_14:
        jmp     L4_15
L4_15:
        jmp     L4_16
L4_16:
        jmp     L4_17
L4_17:
        jmp     L4_18
L4_18:
        jmp     L4_19
L4_19:
        jmp     L4_20
L4_20:
        jmp     L4_21
L4_21:
        jmp     L4_22
L4_22:
        jmp     L4_23
L4_23:
        jmp     L4_24
L4_24:
        jmp     L4_25
L4_25:
        jmp     L4_26
L4_26:
        jmp     L4_27
L4_27:
        jmp     L4_28
L4_28:
        jmp     L4_29
L4_29:
        jmp     L4_30
L4_30:
        jmp     L4_31
L4_31:
        jmp     L4_32
L4_32:
        jmp     L4_33
L4_33:
        jmp     L4_34
L4_34:
        jmp     L4_35
L4_35:
        jmp     L4_36
L4_36:
        jmp     L4_37
L4_37:
        jmp     L4_38
L4_38:
        jmp     L4_39
L4_39:
        jmp     L4_40
L4_40:
        jmp     L4_41
L4_41:
        jmp     L4_42
L4_42:
        jmp     L4_43
L4_43:
        jmp     L4_44
L4_44:
        jmp     L4_45
L4_45:
        jmp     L4_46
L4_46:
        jmp     L4_47
L4_47:
        jmp     L4_48
L4_48:
        jmp     L4_49
L4_49:
        jmp     L4_50
L4_50:
        jmp     L4_51
L4_51:
        jmp     L4_52
L4_52:
        jmp     L4_53
L4_53:
        jmp     L4_54
L4_54:
        jmp     L4_55
L4_55:
        jmp     L4_56
L4_56:
        cmp     eax, 0x50
        jz      L_87a
        mov     eax, 0x51
        pop     edi
        pop     esi
        pop     ebp
        ret
L_87a:
        mov     ecx, dword ptr [edi]
        push    ecx
        call    FUN_00762ce0
        add     esp, 0x4
        jmp     L_sled5
        /* __emit: 4 junk bytes (D6 D6 3C 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L_sled5:
        jmp     L5_0
L5_0:
        jmp     L5_1
L5_1:
        jmp     L5_2
L5_2:
        jmp     L5_3
L5_3:
        jmp     L5_4
L5_4:
        jmp     L5_5
L5_5:
        jmp     L5_6
L5_6:
        jmp     L5_7
L5_7:
        jmp     L5_8
L5_8:
        jmp     L5_9
L5_9:
        jmp     L5_10
L5_10:
        jmp     L5_11
L5_11:
        jmp     L5_12
L5_12:
        jmp     L5_13
L5_13:
        jmp     L5_14
L5_14:
        jmp     L5_15
L5_15:
        jmp     L5_16
L5_16:
        jmp     L5_17
L5_17:
        jmp     L5_18
L5_18:
        jmp     L5_19
L5_19:
        jmp     L5_20
L5_20:
        jmp     L5_21
L5_21:
        jmp     L5_22
L5_22:
        jmp     L5_23
L5_23:
        jmp     L5_24
L5_24:
        jmp     L5_25
L5_25:
        jmp     L5_26
L5_26:
        xor     edx, edx
        cmp     eax, 0xa
        setnz   dl
        add     edx, 0x50
        pop     edi
        mov     eax, edx
        pop     esi
        pop     ebp
        ret
    }
}
