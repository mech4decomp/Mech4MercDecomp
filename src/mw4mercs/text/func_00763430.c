/*
 * FUN_00763430 (852 B) — obfuscated helper. Validates a param, reads a
 * vtable pointer, and if the target buffer is empty, calls a virtual
 * method, then fills a 16-byte buffer with an obfuscated byte pattern
 * (EB 04 + D6 D6 xx 00 junk chains crossed with EB 00 no-op sleds).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00763430(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x8]
        push    esi
        test    ecx, ecx
        push    edi
        jnz     L_63442
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebp
        ret
    L_63442:
        jmp     L_s1
        /* __emit: junk data bytes (D6 D6 3C 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s1:
        jmp     L_s1_1
    L_s1_1:
        jmp     L_s1_2
    L_s1_2:
        jmp     L_s1_3
    L_s1_3:
        jmp     L_s1_4
    L_s1_4:
        jmp     L_s1_5
    L_s1_5:
        jmp     L_s1_6
    L_s1_6:
        jmp     L_s1_7
    L_s1_7:
        jmp     L_s1_8
    L_s1_8:
        jmp     L_s1_9
    L_s1_9:
        jmp     L_s1_10
    L_s1_10:
        jmp     L_s1_11
    L_s1_11:
        jmp     L_s1_12
    L_s1_12:
        jmp     L_s1_13
    L_s1_13:
        jmp     L_s1_14
    L_s1_14:
        jmp     L_s1_15
    L_s1_15:
        jmp     L_s1_16
    L_s1_16:
        jmp     L_s1_17
    L_s1_17:
        jmp     L_s1_18
    L_s1_18:
        jmp     L_s1_19
    L_s1_19:
        jmp     L_s1_20
    L_s1_20:
        jmp     L_s1_21
    L_s1_21:
        jmp     L_s1_22
    L_s1_22:
        jmp     L_s1_23
    L_s1_23:
        jmp     L_s1_24
    L_s1_24:
        jmp     L_s1_25
    L_s1_25:
        jmp     L_s1_26
    L_s1_26:
        jmp     L_after_s1
    L_after_s1:
        mov     eax, dword ptr [ecx + 0x20]
        test    eax, eax
        jnz     L_63489
        pop     edi
        pop     esi
        pop     ebp
        ret
    L_63489:
        jmp     L_s2
        /* __emit: junk data bytes (D6 D6 3C 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s2:
        jmp     L_s2_1
    L_s2_1:
        jmp     L_s2_2
    L_s2_2:
        jmp     L_s2_3
    L_s2_3:
        jmp     L_s2_4
    L_s2_4:
        jmp     L_s2_5
    L_s2_5:
        jmp     L_s2_6
    L_s2_6:
        jmp     L_s2_7
    L_s2_7:
        jmp     L_s2_8
    L_s2_8:
        jmp     L_s2_9
    L_s2_9:
        jmp     L_s2_10
    L_s2_10:
        jmp     L_s2_11
    L_s2_11:
        jmp     L_s2_12
    L_s2_12:
        jmp     L_s2_13
    L_s2_13:
        jmp     L_s2_14
    L_s2_14:
        jmp     L_s2_15
    L_s2_15:
        jmp     L_s2_16
    L_s2_16:
        jmp     L_s2_17
    L_s2_17:
        jmp     L_s2_18
    L_s2_18:
        jmp     L_s2_19
    L_s2_19:
        jmp     L_s2_20
    L_s2_20:
        jmp     L_s2_21
    L_s2_21:
        jmp     L_s2_22
    L_s2_22:
        jmp     L_s2_23
    L_s2_23:
        jmp     L_s2_24
    L_s2_24:
        jmp     L_s2_25
    L_s2_25:
        jmp     L_s2_26
    L_s2_26:
        jmp     L_after_s2
    L_after_s2:
        lea     esi, [ecx + 0x8]
        jmp     L_s3
        /* __emit: junk data bytes (D6 D6 3C 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s3:
        jmp     L_s3_1
    L_s3_1:
        jmp     L_s3_2
    L_s3_2:
        jmp     L_s3_3
    L_s3_3:
        jmp     L_s3_4
    L_s3_4:
        jmp     L_s3_5
    L_s3_5:
        jmp     L_s3_6
    L_s3_6:
        jmp     L_s3_7
    L_s3_7:
        jmp     L_s3_8
    L_s3_8:
        jmp     L_s3_9
    L_s3_9:
        jmp     L_s3_10
    L_s3_10:
        jmp     L_s3_11
    L_s3_11:
        jmp     L_s3_12
    L_s3_12:
        jmp     L_s3_13
    L_s3_13:
        jmp     L_s3_14
    L_s3_14:
        jmp     L_s3_15
    L_s3_15:
        jmp     L_s3_16
    L_s3_16:
        jmp     L_s3_17
    L_s3_17:
        jmp     L_s3_18
    L_s3_18:
        jmp     L_s3_19
    L_s3_19:
        jmp     L_s3_20
    L_s3_20:
        jmp     L_s3_21
    L_s3_21:
        jmp     L_s3_22
    L_s3_22:
        jmp     L_s3_23
    L_s3_23:
        jmp     L_s3_24
    L_s3_24:
        jmp     L_s3_25
    L_s3_25:
        jmp     L_s3_26
    L_s3_26:
        jmp     L_after_s3
    L_after_s3:
        cmp     word ptr [esi], 0
        jz      L_63510
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebp
        ret
    L_63510:
        jmp     L_s4
        /* __emit: junk data bytes (D6 D6 78 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x78
        __emit 0x00
    L_s4:
        jmp     L_s4_1
    L_s4_1:
        jmp     L_s4_2
    L_s4_2:
        jmp     L_s4_3
    L_s4_3:
        jmp     L_s4_4
    L_s4_4:
        jmp     L_s4_5
    L_s4_5:
        jmp     L_s4_6
    L_s4_6:
        jmp     L_s4_7
    L_s4_7:
        jmp     L_s4_8
    L_s4_8:
        jmp     L_s4_9
    L_s4_9:
        jmp     L_s4_10
    L_s4_10:
        jmp     L_s4_11
    L_s4_11:
        jmp     L_s4_12
    L_s4_12:
        jmp     L_s4_13
    L_s4_13:
        jmp     L_s4_14
    L_s4_14:
        jmp     L_s4_15
    L_s4_15:
        jmp     L_s4_16
    L_s4_16:
        jmp     L_s4_17
    L_s4_17:
        jmp     L_s4_18
    L_s4_18:
        jmp     L_s4_19
    L_s4_19:
        jmp     L_s4_20
    L_s4_20:
        jmp     L_s4_21
    L_s4_21:
        jmp     L_s4_22
    L_s4_22:
        jmp     L_s4_23
    L_s4_23:
        jmp     L_s4_24
    L_s4_24:
        jmp     L_s4_25
    L_s4_25:
        jmp     L_s4_26
    L_s4_26:
        jmp     L_s4_27
    L_s4_27:
        jmp     L_s4_28
    L_s4_28:
        jmp     L_s4_29
    L_s4_29:
        jmp     L_s4_30
    L_s4_30:
        jmp     L_s4_31
    L_s4_31:
        jmp     L_s4_32
    L_s4_32:
        jmp     L_s4_33
    L_s4_33:
        jmp     L_s4_34
    L_s4_34:
        jmp     L_s4_35
    L_s4_35:
        jmp     L_s4_36
    L_s4_36:
        jmp     L_s4_37
    L_s4_37:
        jmp     L_s4_38
    L_s4_38:
        jmp     L_s4_39
    L_s4_39:
        jmp     L_s4_40
    L_s4_40:
        jmp     L_s4_41
    L_s4_41:
        jmp     L_s4_42
    L_s4_42:
        jmp     L_s4_43
    L_s4_43:
        jmp     L_s4_44
    L_s4_44:
        jmp     L_s4_45
    L_s4_45:
        jmp     L_s4_46
    L_s4_46:
        jmp     L_s4_47
    L_s4_47:
        jmp     L_s4_48
    L_s4_48:
        jmp     L_s4_49
    L_s4_49:
        jmp     L_s4_50
    L_s4_50:
        jmp     L_s4_51
    L_s4_51:
        jmp     L_s4_52
    L_s4_52:
        jmp     L_s4_53
    L_s4_53:
        jmp     L_s4_54
    L_s4_54:
        jmp     L_s4_55
    L_s4_55:
        jmp     L_s4_56
    L_s4_56:
        jmp     L_after_s4
    L_after_s4:
        call    dword ptr [eax + 0x14]
        jmp     L_s5
        /* __emit: junk data bytes (D6 D6 3C 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s5:
        jmp     L_s5_1
    L_s5_1:
        jmp     L_s5_2
    L_s5_2:
        jmp     L_s5_3
    L_s5_3:
        jmp     L_s5_4
    L_s5_4:
        jmp     L_s5_5
    L_s5_5:
        jmp     L_s5_6
    L_s5_6:
        jmp     L_s5_7
    L_s5_7:
        jmp     L_s5_8
    L_s5_8:
        jmp     L_s5_9
    L_s5_9:
        jmp     L_s5_10
    L_s5_10:
        jmp     L_s5_11
    L_s5_11:
        jmp     L_s5_12
    L_s5_12:
        jmp     L_s5_13
    L_s5_13:
        jmp     L_s5_14
    L_s5_14:
        jmp     L_s5_15
    L_s5_15:
        jmp     L_s5_16
    L_s5_16:
        jmp     L_s5_17
    L_s5_17:
        jmp     L_s5_18
    L_s5_18:
        jmp     L_s5_19
    L_s5_19:
        jmp     L_s5_20
    L_s5_20:
        jmp     L_s5_21
    L_s5_21:
        jmp     L_s5_22
    L_s5_22:
        jmp     L_s5_23
    L_s5_23:
        jmp     L_s5_24
    L_s5_24:
        jmp     L_s5_25
    L_s5_25:
        jmp     L_s5_26
    L_s5_26:
        jmp     L_after_s5
    L_after_s5:
        mov     ecx, 0x56aa71f3
        jmp     L_s6
        /* __emit: junk data bytes (D6 D6 78 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x78
        __emit 0x00
    L_s6:
        jmp     L_s6_1
    L_s6_1:
        jmp     L_s6_2
    L_s6_2:
        jmp     L_s6_3
    L_s6_3:
        jmp     L_s6_4
    L_s6_4:
        jmp     L_s6_5
    L_s6_5:
        jmp     L_s6_6
    L_s6_6:
        jmp     L_s6_7
    L_s6_7:
        jmp     L_s6_8
    L_s6_8:
        jmp     L_s6_9
    L_s6_9:
        jmp     L_s6_10
    L_s6_10:
        jmp     L_s6_11
    L_s6_11:
        jmp     L_s6_12
    L_s6_12:
        jmp     L_s6_13
    L_s6_13:
        jmp     L_s6_14
    L_s6_14:
        jmp     L_s6_15
    L_s6_15:
        jmp     L_s6_16
    L_s6_16:
        jmp     L_s6_17
    L_s6_17:
        jmp     L_s6_18
    L_s6_18:
        jmp     L_s6_19
    L_s6_19:
        jmp     L_s6_20
    L_s6_20:
        jmp     L_s6_21
    L_s6_21:
        jmp     L_s6_22
    L_s6_22:
        jmp     L_s6_23
    L_s6_23:
        jmp     L_s6_24
    L_s6_24:
        jmp     L_s6_25
    L_s6_25:
        jmp     L_s6_26
    L_s6_26:
        jmp     L_s6_27
    L_s6_27:
        jmp     L_s6_28
    L_s6_28:
        jmp     L_s6_29
    L_s6_29:
        jmp     L_s6_30
    L_s6_30:
        jmp     L_s6_31
    L_s6_31:
        jmp     L_s6_32
    L_s6_32:
        jmp     L_s6_33
    L_s6_33:
        jmp     L_s6_34
    L_s6_34:
        jmp     L_s6_35
    L_s6_35:
        jmp     L_s6_36
    L_s6_36:
        jmp     L_s6_37
    L_s6_37:
        jmp     L_s6_38
    L_s6_38:
        jmp     L_s6_39
    L_s6_39:
        jmp     L_s6_40
    L_s6_40:
        jmp     L_s6_41
    L_s6_41:
        jmp     L_s6_42
    L_s6_42:
        jmp     L_s6_43
    L_s6_43:
        jmp     L_s6_44
    L_s6_44:
        jmp     L_s6_45
    L_s6_45:
        jmp     L_s6_46
    L_s6_46:
        jmp     L_s6_47
    L_s6_47:
        jmp     L_s6_48
    L_s6_48:
        jmp     L_s6_49
    L_s6_49:
        jmp     L_s6_50
    L_s6_50:
        jmp     L_s6_51
    L_s6_51:
        jmp     L_s6_52
    L_s6_52:
        jmp     L_s6_53
    L_s6_53:
        jmp     L_s6_54
    L_s6_54:
        jmp     L_s6_55
    L_s6_55:
        jmp     L_s6_56
    L_s6_56:
        jmp     L_after_s6
    L_after_s6:
        lea     edi, [eax + 0x14523ec1]
        imul    eax, eax, 0x45fa2391
        xor     edx, edx
        add     eax, 0xea3ee51
    L_63657:
        lea     ecx, [ecx + eax*1 + 0x9a5ce221]
        jmp     L_s7
        /* __emit: junk data bytes (D6 D6 3C 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s7:
        jmp     L_s7_1
    L_s7_1:
        jmp     L_s7_2
    L_s7_2:
        jmp     L_s7_3
    L_s7_3:
        jmp     L_s7_4
    L_s7_4:
        jmp     L_s7_5
    L_s7_5:
        jmp     L_s7_6
    L_s7_6:
        jmp     L_s7_7
    L_s7_7:
        jmp     L_s7_8
    L_s7_8:
        jmp     L_s7_9
    L_s7_9:
        jmp     L_s7_10
    L_s7_10:
        jmp     L_s7_11
    L_s7_11:
        jmp     L_s7_12
    L_s7_12:
        jmp     L_s7_13
    L_s7_13:
        jmp     L_s7_14
    L_s7_14:
        jmp     L_s7_15
    L_s7_15:
        jmp     L_s7_16
    L_s7_16:
        jmp     L_s7_17
    L_s7_17:
        jmp     L_s7_18
    L_s7_18:
        jmp     L_s7_19
    L_s7_19:
        jmp     L_s7_20
    L_s7_20:
        jmp     L_s7_21
    L_s7_21:
        jmp     L_s7_22
    L_s7_22:
        jmp     L_s7_23
    L_s7_23:
        jmp     L_s7_24
    L_s7_24:
        jmp     L_s7_25
    L_s7_25:
        jmp     L_s7_26
    L_s7_26:
        jmp     L_after_s7
    L_after_s7:
        mov     byte ptr [edx + esi*1 + 0x2], cl
        jmp     L_s8
        /* __emit: junk data bytes (D6 D6 3C 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s8:
        jmp     L_s8_1
    L_s8_1:
        jmp     L_s8_2
    L_s8_2:
        jmp     L_s8_3
    L_s8_3:
        jmp     L_s8_4
    L_s8_4:
        jmp     L_s8_5
    L_s8_5:
        jmp     L_s8_6
    L_s8_6:
        jmp     L_s8_7
    L_s8_7:
        jmp     L_s8_8
    L_s8_8:
        jmp     L_s8_9
    L_s8_9:
        jmp     L_s8_10
    L_s8_10:
        jmp     L_s8_11
    L_s8_11:
        jmp     L_s8_12
    L_s8_12:
        jmp     L_s8_13
    L_s8_13:
        jmp     L_s8_14
    L_s8_14:
        jmp     L_s8_15
    L_s8_15:
        jmp     L_s8_16
    L_s8_16:
        jmp     L_s8_17
    L_s8_17:
        jmp     L_s8_18
    L_s8_18:
        jmp     L_s8_19
    L_s8_19:
        jmp     L_s8_20
    L_s8_20:
        jmp     L_s8_21
    L_s8_21:
        jmp     L_s8_22
    L_s8_22:
        jmp     L_s8_23
    L_s8_23:
        jmp     L_s8_24
    L_s8_24:
        jmp     L_s8_25
    L_s8_25:
        jmp     L_s8_26
    L_s8_26:
        jmp     L_after_s8
    L_after_s8:
        inc     edx
        add     eax, edi
        cmp     edx, 0x10
        jc      L_63657
        jmp     L_s9
        /* __emit: junk data bytes (D6 D6 78 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x78
        __emit 0x00
    L_s9:
        jmp     L_s9_1
    L_s9_1:
        jmp     L_s9_2
    L_s9_2:
        jmp     L_s9_3
    L_s9_3:
        jmp     L_s9_4
    L_s9_4:
        jmp     L_s9_5
    L_s9_5:
        jmp     L_s9_6
    L_s9_6:
        jmp     L_s9_7
    L_s9_7:
        jmp     L_s9_8
    L_s9_8:
        jmp     L_s9_9
    L_s9_9:
        jmp     L_s9_10
    L_s9_10:
        jmp     L_s9_11
    L_s9_11:
        jmp     L_s9_12
    L_s9_12:
        jmp     L_s9_13
    L_s9_13:
        jmp     L_s9_14
    L_s9_14:
        jmp     L_s9_15
    L_s9_15:
        jmp     L_s9_16
    L_s9_16:
        jmp     L_s9_17
    L_s9_17:
        jmp     L_s9_18
    L_s9_18:
        jmp     L_s9_19
    L_s9_19:
        jmp     L_s9_20
    L_s9_20:
        jmp     L_s9_21
    L_s9_21:
        jmp     L_s9_22
    L_s9_22:
        jmp     L_s9_23
    L_s9_23:
        jmp     L_s9_24
    L_s9_24:
        jmp     L_s9_25
    L_s9_25:
        jmp     L_s9_26
    L_s9_26:
        jmp     L_s9_27
    L_s9_27:
        jmp     L_s9_28
    L_s9_28:
        jmp     L_s9_29
    L_s9_29:
        jmp     L_s9_30
    L_s9_30:
        jmp     L_s9_31
    L_s9_31:
        jmp     L_s9_32
    L_s9_32:
        jmp     L_s9_33
    L_s9_33:
        jmp     L_s9_34
    L_s9_34:
        jmp     L_s9_35
    L_s9_35:
        jmp     L_s9_36
    L_s9_36:
        jmp     L_s9_37
    L_s9_37:
        jmp     L_s9_38
    L_s9_38:
        jmp     L_s9_39
    L_s9_39:
        jmp     L_s9_40
    L_s9_40:
        jmp     L_s9_41
    L_s9_41:
        jmp     L_s9_42
    L_s9_42:
        jmp     L_s9_43
    L_s9_43:
        jmp     L_s9_44
    L_s9_44:
        jmp     L_s9_45
    L_s9_45:
        jmp     L_s9_46
    L_s9_46:
        jmp     L_s9_47
    L_s9_47:
        jmp     L_s9_48
    L_s9_48:
        jmp     L_s9_49
    L_s9_49:
        jmp     L_s9_50
    L_s9_50:
        jmp     L_s9_51
    L_s9_51:
        jmp     L_s9_52
    L_s9_52:
        jmp     L_s9_53
    L_s9_53:
        jmp     L_s9_54
    L_s9_54:
        jmp     L_s9_55
    L_s9_55:
        jmp     L_s9_56
    L_s9_56:
        jmp     L_after_s9
    L_after_s9:
        mov     dword ptr [esi + 0x14], 0x10
        jmp     L_s10
        /* __emit: junk data bytes (D6 D6 3C 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s10:
        jmp     L_s10_1
    L_s10_1:
        jmp     L_s10_2
    L_s10_2:
        jmp     L_s10_3
    L_s10_3:
        jmp     L_s10_4
    L_s10_4:
        jmp     L_s10_5
    L_s10_5:
        jmp     L_s10_6
    L_s10_6:
        jmp     L_s10_7
    L_s10_7:
        jmp     L_s10_8
    L_s10_8:
        jmp     L_s10_9
    L_s10_9:
        jmp     L_s10_10
    L_s10_10:
        jmp     L_s10_11
    L_s10_11:
        jmp     L_s10_12
    L_s10_12:
        jmp     L_s10_13
    L_s10_13:
        jmp     L_s10_14
    L_s10_14:
        jmp     L_s10_15
    L_s10_15:
        jmp     L_s10_16
    L_s10_16:
        jmp     L_s10_17
    L_s10_17:
        jmp     L_s10_18
    L_s10_18:
        jmp     L_s10_19
    L_s10_19:
        jmp     L_s10_20
    L_s10_20:
        jmp     L_s10_21
    L_s10_21:
        jmp     L_s10_22
    L_s10_22:
        jmp     L_s10_23
    L_s10_23:
        jmp     L_s10_24
    L_s10_24:
        jmp     L_s10_25
    L_s10_25:
        jmp     L_s10_26
    L_s10_26:
        jmp     L_after_s10
    L_after_s10:
        mov     word ptr [esi], 0x1
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebp
        ret
    }
}
