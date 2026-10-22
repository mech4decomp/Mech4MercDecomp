/*
 * FUN_007618e0 (715 B) - obfuscated stack/queue pop helper.
 *
 * Heavily obfuscated with EB 04 + D6 D6 xx xx junk-byte jump chains
 * crossed with EB 00 no-op sleds. Real logic: pops an entry from a
 * queue (param_1+0x100/0x108/0x10c), returns 0x50 on success / 0x51 on fail.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_007618e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        jmp     Lc1_1
        /* __emit: obfuscation junk bytes (D6 D6 F0 00) skipped over by EB 04 */
        __emit 0xD6
        __emit 0xD6
        __emit 0xF0
        __emit 0x00
Lc1_1:
        jmp     Lc1_2
Lc1_2:
        jmp     Lc1_3
Lc1_3:
        jmp     Lc1_4
Lc1_4:
        jmp     Lc1_5
Lc1_5:
        jmp     Lc1_6
Lc1_6:
        jmp     Lc1_7
Lc1_7:
        jmp     Lc1_8
Lc1_8:
        jmp     Lc1_9
Lc1_9:
        jmp     Lc1_10
Lc1_10:
        jmp     Lc1_11
Lc1_11:
        jmp     Lc1_12
Lc1_12:
        jmp     Lc1_13
Lc1_13:
        jmp     Lc1_14
Lc1_14:
        jmp     Lc1_15
Lc1_15:
        jmp     Lc1_16
Lc1_16:
        jmp     Lc1_17
Lc1_17:
        jmp     Lc1_18
Lc1_18:
        jmp     Lc1_19
Lc1_19:
        jmp     Lc1_20
Lc1_20:
        jmp     Lc1_21
Lc1_21:
        jmp     Lc1_22
Lc1_22:
        jmp     Lc1_23
Lc1_23:
        jmp     Lc1_24
Lc1_24:
        jmp     Lc1_25
Lc1_25:
        jmp     Lc1_26
Lc1_26:
        jmp     Lc1_27
Lc1_27:
        jmp     Lc1_28
Lc1_28:
        jmp     Lc1_29
Lc1_29:
        jmp     Lc1_30
Lc1_30:
        jmp     Lc1_31
Lc1_31:
        jmp     Lc1_32
Lc1_32:
        jmp     Lc1_33
Lc1_33:
        jmp     Lc1_34
Lc1_34:
        jmp     Lc1_35
Lc1_35:
        jmp     Lc1_36
Lc1_36:
        jmp     Lc1_37
Lc1_37:
        jmp     Lc1_38
Lc1_38:
        jmp     Lc1_39
Lc1_39:
        jmp     Lc1_40
Lc1_40:
        jmp     Lc1_41
Lc1_41:
        jmp     Lc1_42
Lc1_42:
        jmp     Lc1_43
Lc1_43:
        jmp     Lc1_44
Lc1_44:
        jmp     Lc1_45
Lc1_45:
        jmp     Lc1_46
Lc1_46:
        jmp     Lc1_47
Lc1_47:
        jmp     Lc1_48
Lc1_48:
        jmp     Lc1_49
Lc1_49:
        jmp     Lc1_50
Lc1_50:
        jmp     Lc1_51
Lc1_51:
        jmp     Lc1_52
Lc1_52:
        jmp     Lc1_53
Lc1_53:
        jmp     Lc1_54
Lc1_54:
        jmp     Lc1_55
Lc1_55:
        jmp     Lc1_56
Lc1_56:
        jmp     Lc1_57
Lc1_57:
        jmp     Lc1_58
Lc1_58:
        jmp     Lc1_59
Lc1_59:
        jmp     Lc1_60
Lc1_60:
        jmp     Lc1_61
Lc1_61:
        jmp     Lc1_62
Lc1_62:
        jmp     Lc1_63
Lc1_63:
        jmp     Lc1_64
Lc1_64:
        jmp     Lc1_65
Lc1_65:
        jmp     Lc1_66
Lc1_66:
        jmp     Lc1_67
Lc1_67:
        jmp     Lc1_68
Lc1_68:
        jmp     Lc1_69
Lc1_69:
        jmp     Lc1_70
Lc1_70:
        jmp     Lc1_71
Lc1_71:
        jmp     Lc1_72
Lc1_72:
        jmp     Lc1_73
Lc1_73:
        jmp     Lc1_74
Lc1_74:
        jmp     Lc1_75
Lc1_75:
        jmp     Lc1_76
Lc1_76:
        jmp     Lc1_77
Lc1_77:
        jmp     Lc1_78
Lc1_78:
        jmp     Lc1_79
Lc1_79:
        jmp     Lc1_80
Lc1_80:
        jmp     Lc1_81
Lc1_81:
        jmp     Lc1_82
Lc1_82:
        jmp     Lc1_83
Lc1_83:
        jmp     Lc1_84
Lc1_84:
        jmp     Lc1_85
Lc1_85:
        jmp     Lc1_86
Lc1_86:
        jmp     Lc1_87
Lc1_87:
        jmp     Lc1_88
Lc1_88:
        jmp     Lc1_89
Lc1_89:
        jmp     Lc1_90
Lc1_90:
        jmp     Lc1_91
Lc1_91:
        jmp     Lc1_92
Lc1_92:
        jmp     Lc1_93
Lc1_93:
        jmp     Lc1_94
Lc1_94:
        jmp     Lc1_95
Lc1_95:
        jmp     Lc1_96
Lc1_96:
        jmp     Lc1_97
Lc1_97:
        jmp     Lc1_98
Lc1_98:
        jmp     Lc1_99
Lc1_99:
        jmp     Lc1_100
Lc1_100:
        jmp     Lc1_101
Lc1_101:
        jmp     Lc1_102
Lc1_102:
        jmp     Lc1_103
Lc1_103:
        jmp     Lc1_104
Lc1_104:
        jmp     Lc1_105
Lc1_105:
        jmp     Lc1_106
Lc1_106:
        jmp     Lc1_107
Lc1_107:
        jmp     Lc1_108
Lc1_108:
        jmp     Lc1_109
Lc1_109:
        jmp     Lc1_110
Lc1_110:
        jmp     Lc1_111
Lc1_111:
        jmp     Lc1_112
Lc1_112:
        jmp     Lc1_113
Lc1_113:
        jmp     Lc1_114
Lc1_114:
        jmp     Lc1_115
Lc1_115:
        jmp     Lc1_116
Lc1_116:
        jmp     Lc1_117
Lc1_117:
        jmp     Lc1_118
Lc1_118:
        mov     eax, dword ptr [ebp + 0x8]
        test    eax, eax
        jz      L_bbf
        jmp     Lc2_1
        /* __emit: obfuscation junk bytes (D6 D6 3C 00) skipped over by EB 04 */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
Lc2_1:
        jmp     Lc2_2
Lc2_2:
        jmp     Lc2_3
Lc2_3:
        jmp     Lc2_4
Lc2_4:
        jmp     Lc2_5
Lc2_5:
        jmp     Lc2_6
Lc2_6:
        jmp     Lc2_7
Lc2_7:
        jmp     Lc2_8
Lc2_8:
        jmp     Lc2_9
Lc2_9:
        jmp     Lc2_10
Lc2_10:
        jmp     Lc2_11
Lc2_11:
        jmp     Lc2_12
Lc2_12:
        jmp     Lc2_13
Lc2_13:
        jmp     Lc2_14
Lc2_14:
        jmp     Lc2_15
Lc2_15:
        jmp     Lc2_16
Lc2_16:
        jmp     Lc2_17
Lc2_17:
        jmp     Lc2_18
Lc2_18:
        jmp     Lc2_19
Lc2_19:
        jmp     Lc2_20
Lc2_20:
        jmp     Lc2_21
Lc2_21:
        jmp     Lc2_22
Lc2_22:
        jmp     Lc2_23
Lc2_23:
        jmp     Lc2_24
Lc2_24:
        jmp     Lc2_25
Lc2_25:
        jmp     Lc2_26
Lc2_26:
        jmp     Lc2_27
Lc2_27:
        jmp     Lc2_28
Lc2_28:
        mov     edx, dword ptr [eax + 0x100]
        test    edx, edx
        jz      L_bbf
        mov     ecx, dword ptr [ebp + 0xc]
        test    ecx, ecx
        jz      L_bbf
        or      ecx, 0x3
        cmp     ecx, 0x3
        jnz     L_bbf
        jmp     Lc3_1
        /* __emit: obfuscation junk bytes (D6 D6 3C 00) skipped over by EB 04 */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
Lc3_1:
        jmp     Lc3_2
Lc3_2:
        jmp     Lc3_3
Lc3_3:
        jmp     Lc3_4
Lc3_4:
        jmp     Lc3_5
Lc3_5:
        jmp     Lc3_6
Lc3_6:
        jmp     Lc3_7
Lc3_7:
        jmp     Lc3_8
Lc3_8:
        jmp     Lc3_9
Lc3_9:
        jmp     Lc3_10
Lc3_10:
        jmp     Lc3_11
Lc3_11:
        jmp     Lc3_12
Lc3_12:
        jmp     Lc3_13
Lc3_13:
        jmp     Lc3_14
Lc3_14:
        jmp     Lc3_15
Lc3_15:
        jmp     Lc3_16
Lc3_16:
        jmp     Lc3_17
Lc3_17:
        jmp     Lc3_18
Lc3_18:
        jmp     Lc3_19
Lc3_19:
        jmp     Lc3_20
Lc3_20:
        jmp     Lc3_21
Lc3_21:
        jmp     Lc3_22
Lc3_22:
        jmp     Lc3_23
Lc3_23:
        jmp     Lc3_24
Lc3_24:
        jmp     Lc3_25
Lc3_25:
        jmp     Lc3_26
Lc3_26:
        jmp     Lc3_27
Lc3_27:
        jmp     Lc3_28
Lc3_28:
        cmp     dword ptr [edx], 0x0
        jnz     L_b21
        mov     ecx, dword ptr [eax + 0x108]
        mov     edx, dword ptr [eax + 0x10c]
        mov     ecx, dword ptr [ecx + edx - 4]
        mov     edx, dword ptr [ebp + 0x10]
        mov     dword ptr [edx], ecx
        jmp     Lc4_1
        /* __emit: obfuscation junk bytes (D6 D6 3C 00) skipped over by EB 04 */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
Lc4_1:
        jmp     Lc4_2
Lc4_2:
        jmp     Lc4_3
Lc4_3:
        jmp     Lc4_4
Lc4_4:
        jmp     Lc4_5
Lc4_5:
        jmp     Lc4_6
Lc4_6:
        jmp     Lc4_7
Lc4_7:
        jmp     Lc4_8
Lc4_8:
        jmp     Lc4_9
Lc4_9:
        jmp     Lc4_10
Lc4_10:
        jmp     Lc4_11
Lc4_11:
        jmp     Lc4_12
Lc4_12:
        jmp     Lc4_13
Lc4_13:
        jmp     Lc4_14
Lc4_14:
        jmp     Lc4_15
Lc4_15:
        jmp     Lc4_16
Lc4_16:
        jmp     Lc4_17
Lc4_17:
        jmp     Lc4_18
Lc4_18:
        jmp     Lc4_19
Lc4_19:
        jmp     Lc4_20
Lc4_20:
        jmp     Lc4_21
Lc4_21:
        jmp     Lc4_22
Lc4_22:
        jmp     Lc4_23
Lc4_23:
        jmp     Lc4_24
Lc4_24:
        jmp     Lc4_25
Lc4_25:
        jmp     Lc4_26
Lc4_26:
        jmp     Lc4_27
Lc4_27:
        jmp     Lc4_28
Lc4_28:
        add     dword ptr [eax + 0x10c], -0x4
        jmp     Lc5_1
        /* __emit: obfuscation junk bytes (D6 D6 3C 00) skipped over by EB 04 */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
Lc5_1:
        jmp     Lc5_2
Lc5_2:
        jmp     Lc5_3
Lc5_3:
        jmp     Lc5_4
Lc5_4:
        jmp     Lc5_5
Lc5_5:
        jmp     Lc5_6
Lc5_6:
        jmp     Lc5_7
Lc5_7:
        jmp     Lc5_8
Lc5_8:
        jmp     Lc5_9
Lc5_9:
        jmp     Lc5_10
Lc5_10:
        jmp     Lc5_11
Lc5_11:
        jmp     Lc5_12
Lc5_12:
        jmp     Lc5_13
Lc5_13:
        jmp     Lc5_14
Lc5_14:
        jmp     Lc5_15
Lc5_15:
        jmp     Lc5_16
Lc5_16:
        jmp     Lc5_17
Lc5_17:
        jmp     Lc5_18
Lc5_18:
        jmp     Lc5_19
Lc5_19:
        jmp     Lc5_20
Lc5_20:
        jmp     Lc5_21
Lc5_21:
        jmp     Lc5_22
Lc5_22:
        jmp     Lc5_23
Lc5_23:
        jmp     Lc5_24
Lc5_24:
        jmp     Lc5_25
Lc5_25:
        jmp     Lc5_26
Lc5_26:
        jmp     Lc5_27
Lc5_27:
        jmp     Lc5_28
Lc5_28:
        mov     eax, 0x50
        pop     esi
        pop     ebp
        ret
L_b21:
        mov     edx, dword ptr [eax + 0x108]
        mov     ecx, dword ptr [ebp + 0x14]
        mov     esi, dword ptr [eax + 0x10c]
        sub     edx, ecx
        add     edx, esi
        mov     esi, dword ptr [ebp + 0x10]
        mov     dword ptr [esi], edx
        jmp     Lc6_1
        /* __emit: obfuscation junk bytes (D6 D6 3C 00) skipped over by EB 04 */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
Lc6_1:
        jmp     Lc6_2
Lc6_2:
        jmp     Lc6_3
Lc6_3:
        jmp     Lc6_4
Lc6_4:
        jmp     Lc6_5
Lc6_5:
        jmp     Lc6_6
Lc6_6:
        jmp     Lc6_7
Lc6_7:
        jmp     Lc6_8
Lc6_8:
        jmp     Lc6_9
Lc6_9:
        jmp     Lc6_10
Lc6_10:
        jmp     Lc6_11
Lc6_11:
        jmp     Lc6_12
Lc6_12:
        jmp     Lc6_13
Lc6_13:
        jmp     Lc6_14
Lc6_14:
        jmp     Lc6_15
Lc6_15:
        jmp     Lc6_16
Lc6_16:
        jmp     Lc6_17
Lc6_17:
        jmp     Lc6_18
Lc6_18:
        jmp     Lc6_19
Lc6_19:
        jmp     Lc6_20
Lc6_20:
        jmp     Lc6_21
Lc6_21:
        jmp     Lc6_22
Lc6_22:
        jmp     Lc6_23
Lc6_23:
        jmp     Lc6_24
Lc6_24:
        jmp     Lc6_25
Lc6_25:
        jmp     Lc6_26
Lc6_26:
        jmp     Lc6_27
Lc6_27:
        jmp     Lc6_28
Lc6_28:
        sub     dword ptr [eax + 0x10c], ecx
        jmp     Lc7_1
        /* __emit: obfuscation junk bytes (D6 D6 3C 00) skipped over by EB 04 */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
Lc7_1:
        jmp     Lc7_2
Lc7_2:
        jmp     Lc7_3
Lc7_3:
        jmp     Lc7_4
Lc7_4:
        jmp     Lc7_5
Lc7_5:
        jmp     Lc7_6
Lc7_6:
        jmp     Lc7_7
Lc7_7:
        jmp     Lc7_8
Lc7_8:
        jmp     Lc7_9
Lc7_9:
        jmp     Lc7_10
Lc7_10:
        jmp     Lc7_11
Lc7_11:
        jmp     Lc7_12
Lc7_12:
        jmp     Lc7_13
Lc7_13:
        jmp     Lc7_14
Lc7_14:
        jmp     Lc7_15
Lc7_15:
        jmp     Lc7_16
Lc7_16:
        jmp     Lc7_17
Lc7_17:
        jmp     Lc7_18
Lc7_18:
        jmp     Lc7_19
Lc7_19:
        jmp     Lc7_20
Lc7_20:
        jmp     Lc7_21
Lc7_21:
        jmp     Lc7_22
Lc7_22:
        jmp     Lc7_23
Lc7_23:
        jmp     Lc7_24
Lc7_24:
        jmp     Lc7_25
Lc7_25:
        jmp     Lc7_26
Lc7_26:
        jmp     Lc7_27
Lc7_27:
        jmp     Lc7_28
Lc7_28:
        mov     eax, 0x50
        pop     esi
        pop     ebp
        ret
L_bbf:
        mov     eax, 0x51
        pop     esi
        pop     ebp
        ret
    }
}
