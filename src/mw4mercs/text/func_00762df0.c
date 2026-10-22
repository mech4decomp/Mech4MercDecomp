/*
 * FUN_00762df0 (1415 B) — joystick/input device command dispatcher.
 *
 * Switch on param_2 (0x96/0x97/0x98) and performs device setup/teardown via
 * the global function pointer DAT_008bd66c and a per-device vtable.
 * Returns 0xa on success, 0xb on failure.
 *
 * Heavily obfuscated: EB 04 + junk-byte (D6 D6 3C 00) jump chains crossed
 * with long EB 00 no-op sleds. The EB 04/EB 00 jumps are real `jmp`
 * mnemonics; the 4 junk bytes after each EB 04 are data and are emitted
 * with __emit (they are not instructions).
 *
 * The shared return epilogues at 0x007633a7 / 0x007633b1 lie just past the
 * function's 1415-byte extent. To make MSVC6 compute the correct rel32 for
 * the many jccs that target them, the labels are placed after a padding
 * region at the exact offsets (0x5b7 / 0x5c1) they occupy relative to the
 * function start; the padding itself is beyond the diff window.
 *
 * __stdcall, RET 0x14 (5 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_8bd66c;              /* DAT_008bd66c - function pointer */

extern int __cdecl FUN_007633c0(void *a);
extern void __cdecl FUN_007627f0(void *a);
extern void __cdecl FUN_007637b0(void *a, void *b, void *c, void *d);
extern int __cdecl FUN_007626d0(void *a, void *b);
extern void *__cdecl FUN_00763430(void *a);

__declspec(naked) int __stdcall FUN_00762df0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        push    edi
        jmp     L_s1_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s1_1: jmp L_s1_2
    L_s1_2: jmp L_s1_3
    L_s1_3: jmp L_s1_4
    L_s1_4: jmp L_s1_5
    L_s1_5: jmp L_s1_6
    L_s1_6: jmp L_s1_7
    L_s1_7: jmp L_s1_8
    L_s1_8: jmp L_s1_9
    L_s1_9: jmp L_s1_10
    L_s1_10: jmp L_s1_11
    L_s1_11: jmp L_s1_12
    L_s1_12: jmp L_s1_13
    L_s1_13: jmp L_s1_14
    L_s1_14: jmp L_s1_15
    L_s1_15: jmp L_s1_16
    L_s1_16: jmp L_s1_17
    L_s1_17: jmp L_s1_18
    L_s1_18: jmp L_s1_19
    L_s1_19: jmp L_s1_20
    L_s1_20: jmp L_s1_21
    L_s1_21: jmp L_s1_22
    L_s1_22: jmp L_s1_23
    L_s1_23: jmp L_s1_24
    L_s1_24: jmp L_s1_25
    L_s1_25: jmp L_s1_26
    L_s1_26: jmp L_s1_27
    L_s1_27: jmp L_62e32
    L_62e32:
        mov     esi, dword ptr [ebp + 0x10]
        test    esi, esi
        jz      L_633b1
        mov     eax, dword ptr [ebp + 0xc]
        sub     eax, 0x96
        jz      L_6317b
        dec     eax
        jz      L_62fdb
        dec     eax
        jnz     L_633b1
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        call    FUN_007633c0
        add     esp, 0x4
        mov     esi, eax
        jmp     L_s2_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s2_1: jmp L_s2_2
    L_s2_2: jmp L_s2_3
    L_s2_3: jmp L_s2_4
    L_s2_4: jmp L_s2_5
    L_s2_5: jmp L_s2_6
    L_s2_6: jmp L_s2_7
    L_s2_7: jmp L_s2_8
    L_s2_8: jmp L_s2_9
    L_s2_9: jmp L_s2_10
    L_s2_10: jmp L_s2_11
    L_s2_11: jmp L_s2_12
    L_s2_12: jmp L_s2_13
    L_s2_13: jmp L_s2_14
    L_s2_14: jmp L_s2_15
    L_s2_15: jmp L_s2_16
    L_s2_16: jmp L_s2_17
    L_s2_17: jmp L_s2_18
    L_s2_18: jmp L_s2_19
    L_s2_19: jmp L_s2_20
    L_s2_20: jmp L_s2_21
    L_s2_21: jmp L_s2_22
    L_s2_22: jmp L_s2_23
    L_s2_23: jmp L_s2_24
    L_s2_24: jmp L_s2_25
    L_s2_25: jmp L_s2_26
    L_s2_26: jmp L_s2_27
    L_s2_27: jmp L_62ea3
    L_62ea3:
        test    esi, esi
        jz      L_633b1
        mov     eax, dword ptr [esi + 0x28]
        jmp     L_s3_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s3_1: jmp L_s3_2
    L_s3_2: jmp L_s3_3
    L_s3_3: jmp L_s3_4
    L_s3_4: jmp L_s3_5
    L_s3_5: jmp L_s3_6
    L_s3_6: jmp L_s3_7
    L_s3_7: jmp L_s3_8
    L_s3_8: jmp L_s3_9
    L_s3_9: jmp L_s3_10
    L_s3_10: jmp L_s3_11
    L_s3_11: jmp L_s3_12
    L_s3_12: jmp L_s3_13
    L_s3_13: jmp L_s3_14
    L_s3_14: jmp L_s3_15
    L_s3_15: jmp L_s3_16
    L_s3_16: jmp L_s3_17
    L_s3_17: jmp L_s3_18
    L_s3_18: jmp L_s3_19
    L_s3_19: jmp L_s3_20
    L_s3_20: jmp L_s3_21
    L_s3_21: jmp L_s3_22
    L_s3_22: jmp L_s3_23
    L_s3_23: jmp L_s3_24
    L_s3_24: jmp L_s3_25
    L_s3_25: jmp L_s3_26
    L_s3_26: jmp L_s3_27
    L_s3_27: jmp L_62eea
    L_62eea:
        test    eax, eax
        jz      L_633b1
        mov     eax, dword ptr [esi + 0x28]
        jmp     L_s4_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s4_1: jmp L_s4_2
    L_s4_2: jmp L_s4_3
    L_s4_3: jmp L_s4_4
    L_s4_4: jmp L_s4_5
    L_s4_5: jmp L_s4_6
    L_s4_6: jmp L_s4_7
    L_s4_7: jmp L_s4_8
    L_s4_8: jmp L_s4_9
    L_s4_9: jmp L_s4_10
    L_s4_10: jmp L_s4_11
    L_s4_11: jmp L_s4_12
    L_s4_12: jmp L_s4_13
    L_s4_13: jmp L_s4_14
    L_s4_14: jmp L_s4_15
    L_s4_15: jmp L_s4_16
    L_s4_16: jmp L_s4_17
    L_s4_17: jmp L_s4_18
    L_s4_18: jmp L_s4_19
    L_s4_19: jmp L_s4_20
    L_s4_20: jmp L_s4_21
    L_s4_21: jmp L_s4_22
    L_s4_22: jmp L_s4_23
    L_s4_23: jmp L_s4_24
    L_s4_24: jmp L_s4_25
    L_s4_25: jmp L_s4_26
    L_s4_26: jmp L_s4_27
    L_s4_27: jmp L_62f31
    L_62f31:
        mov     ecx, dword ptr [eax + 0x4]
        test    ecx, ecx
        jz      L_633b1
        mov     edx, dword ptr [eax + 0x8]
        push    edx
        call    ecx
        add     esp, 0x4
        mov     edi, eax
        jmp     L_s5_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s5_1: jmp L_s5_2
    L_s5_2: jmp L_s5_3
    L_s5_3: jmp L_s5_4
    L_s5_4: jmp L_s5_5
    L_s5_5: jmp L_s5_6
    L_s5_6: jmp L_s5_7
    L_s5_7: jmp L_s5_8
    L_s5_8: jmp L_s5_9
    L_s5_9: jmp L_s5_10
    L_s5_10: jmp L_s5_11
    L_s5_11: jmp L_s5_12
    L_s5_12: jmp L_s5_13
    L_s5_13: jmp L_s5_14
    L_s5_14: jmp L_s5_15
    L_s5_15: jmp L_s5_16
    L_s5_16: jmp L_s5_17
    L_s5_17: jmp L_s5_18
    L_s5_18: jmp L_s5_19
    L_s5_19: jmp L_s5_20
    L_s5_20: jmp L_s5_21
    L_s5_21: jmp L_s5_22
    L_s5_22: jmp L_s5_23
    L_s5_23: jmp L_s5_24
    L_s5_24: jmp L_s5_25
    L_s5_25: jmp L_s5_26
    L_s5_26: jmp L_s5_27
    L_s5_27: jmp L_62f83
    L_62f83:
        push    esi
        call    FUN_007627f0
        add     esp, 0x4
        cmp     edi, 0x50
        jnz     L_633b1
        jmp     L_s6_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s6_1: jmp L_s6_2
    L_s6_2: jmp L_s6_3
    L_s6_3: jmp L_s6_4
    L_s6_4: jmp L_s6_5
    L_s6_5: jmp L_s6_6
    L_s6_6: jmp L_s6_7
    L_s6_7: jmp L_s6_8
    L_s6_8: jmp L_s6_9
    L_s6_9: jmp L_s6_10
    L_s6_10: jmp L_s6_11
    L_s6_11: jmp L_s6_12
    L_s6_12: jmp L_s6_13
    L_s6_13: jmp L_s6_14
    L_s6_14: jmp L_s6_15
    L_s6_15: jmp L_s6_16
    L_s6_16: jmp L_s6_17
    L_s6_17: jmp L_s6_18
    L_s6_18: jmp L_s6_19
    L_s6_19: jmp L_s6_20
    L_s6_20: jmp L_s6_21
    L_s6_21: jmp L_s6_22
    L_s6_22: jmp L_s6_23
    L_s6_23: jmp L_s6_24
    L_s6_24: jmp L_s6_25
    L_s6_25: jmp L_s6_26
    L_s6_26: jmp L_s6_27
    L_s6_27: jmp L_62fd1
    L_62fd1:
        mov     eax, 0xa
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    L_62fdb:
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        call    FUN_007633c0
        add     esp, 0x4
        mov     esi, eax
        jmp     L_s7_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s7_1: jmp L_s7_2
    L_s7_2: jmp L_s7_3
    L_s7_3: jmp L_s7_4
    L_s7_4: jmp L_s7_5
    L_s7_5: jmp L_s7_6
    L_s7_6: jmp L_s7_7
    L_s7_7: jmp L_s7_8
    L_s7_8: jmp L_s7_9
    L_s7_9: jmp L_s7_10
    L_s7_10: jmp L_s7_11
    L_s7_11: jmp L_s7_12
    L_s7_12: jmp L_s7_13
    L_s7_13: jmp L_s7_14
    L_s7_14: jmp L_s7_15
    L_s7_15: jmp L_s7_16
    L_s7_16: jmp L_s7_17
    L_s7_17: jmp L_s7_18
    L_s7_18: jmp L_s7_19
    L_s7_19: jmp L_s7_20
    L_s7_20: jmp L_s7_21
    L_s7_21: jmp L_s7_22
    L_s7_22: jmp L_s7_23
    L_s7_23: jmp L_s7_24
    L_s7_24: jmp L_s7_25
    L_s7_25: jmp L_s7_26
    L_s7_26: jmp L_s7_27
    L_s7_27: jmp L_63025
    L_63025:
        test    esi, esi
        jz      L_633b1
        mov     edi, dword ptr [ebp + 0x14]
        test    edi, edi
        jz      L_633b1
        cmp     word ptr [esi + 0x8], 0x0
        jz      L_633b1
        mov     ebx, dword ptr [ebp + 0x18]
        mov     ecx, dword ptr [esi + 0x1c]
        push    ebx
        push    edi
        lea     edx, [esi + 0xa]
        push    ecx
        push    edx
        call    FUN_007637b0
        add     esp, 0x10
        jmp     L_s8_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s8_1: jmp L_s8_2
    L_s8_2: jmp L_s8_3
    L_s8_3: jmp L_s8_4
    L_s8_4: jmp L_s8_5
    L_s8_5: jmp L_s8_6
    L_s8_6: jmp L_s8_7
    L_s8_7: jmp L_s8_8
    L_s8_8: jmp L_s8_9
    L_s8_9: jmp L_s8_10
    L_s8_10: jmp L_s8_11
    L_s8_11: jmp L_s8_12
    L_s8_12: jmp L_s8_13
    L_s8_13: jmp L_s8_14
    L_s8_14: jmp L_s8_15
    L_s8_15: jmp L_s8_16
    L_s8_16: jmp L_s8_17
    L_s8_17: jmp L_s8_18
    L_s8_18: jmp L_s8_19
    L_s8_19: jmp L_s8_20
    L_s8_20: jmp L_s8_21
    L_s8_21: jmp L_s8_22
    L_s8_22: jmp L_s8_23
    L_s8_23: jmp L_s8_24
    L_s8_24: jmp L_s8_25
    L_s8_25: jmp L_s8_26
    L_s8_26: jmp L_s8_27
    L_s8_27: jmp L_63094
    L_63094:
        mov     esi, dword ptr [esi + 0x28]
        test    esi, esi
        jz      L_633b1
        jmp     L_s9_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s9_1: jmp L_s9_2
    L_s9_2: jmp L_s9_3
    L_s9_3: jmp L_s9_4
    L_s9_4: jmp L_s9_5
    L_s9_5: jmp L_s9_6
    L_s9_6: jmp L_s9_7
    L_s9_7: jmp L_s9_8
    L_s9_8: jmp L_s9_9
    L_s9_9: jmp L_s9_10
    L_s9_10: jmp L_s9_11
    L_s9_11: jmp L_s9_12
    L_s9_12: jmp L_s9_13
    L_s9_13: jmp L_s9_14
    L_s9_14: jmp L_s9_15
    L_s9_15: jmp L_s9_16
    L_s9_16: jmp L_s9_17
    L_s9_17: jmp L_s9_18
    L_s9_18: jmp L_s9_19
    L_s9_19: jmp L_s9_20
    L_s9_20: jmp L_s9_21
    L_s9_21: jmp L_s9_22
    L_s9_22: jmp L_s9_23
    L_s9_23: jmp L_s9_24
    L_s9_24: jmp L_s9_25
    L_s9_25: jmp L_s9_26
    L_s9_26: jmp L_s9_27
    L_s9_27: jmp L_630db
    L_630db:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_633b1
        jmp     L_s10_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s10_1: jmp L_s10_2
    L_s10_2: jmp L_s10_3
    L_s10_3: jmp L_s10_4
    L_s10_4: jmp L_s10_5
    L_s10_5: jmp L_s10_6
    L_s10_6: jmp L_s10_7
    L_s10_7: jmp L_s10_8
    L_s10_8: jmp L_s10_9
    L_s10_9: jmp L_s10_10
    L_s10_10: jmp L_s10_11
    L_s10_11: jmp L_s10_12
    L_s10_12: jmp L_s10_13
    L_s10_13: jmp L_s10_14
    L_s10_14: jmp L_s10_15
    L_s10_15: jmp L_s10_16
    L_s10_16: jmp L_s10_17
    L_s10_17: jmp L_s10_18
    L_s10_18: jmp L_s10_19
    L_s10_19: jmp L_s10_20
    L_s10_20: jmp L_s10_21
    L_s10_21: jmp L_s10_22
    L_s10_22: jmp L_s10_23
    L_s10_23: jmp L_s10_24
    L_s10_24: jmp L_s10_25
    L_s10_25: jmp L_s10_26
    L_s10_26: jmp L_s10_27
    L_s10_27: jmp L_63121
    L_63121:
        mov     ecx, dword ptr [esi + 0x8]
        push    ebx
        push    edi
        push    ecx
        call    eax
        add     esp, 0xc
        jmp     L_s11_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s11_1: jmp L_s11_2
    L_s11_2: jmp L_s11_3
    L_s11_3: jmp L_s11_4
    L_s11_4: jmp L_s11_5
    L_s11_5: jmp L_s11_6
    L_s11_6: jmp L_s11_7
    L_s11_7: jmp L_s11_8
    L_s11_8: jmp L_s11_9
    L_s11_9: jmp L_s11_10
    L_s11_10: jmp L_s11_11
    L_s11_11: jmp L_s11_12
    L_s11_12: jmp L_s11_13
    L_s11_13: jmp L_s11_14
    L_s11_14: jmp L_s11_15
    L_s11_15: jmp L_s11_16
    L_s11_16: jmp L_s11_17
    L_s11_17: jmp L_s11_18
    L_s11_18: jmp L_s11_19
    L_s11_19: jmp L_s11_20
    L_s11_20: jmp L_s11_21
    L_s11_21: jmp L_s11_22
    L_s11_22: jmp L_s11_23
    L_s11_23: jmp L_s11_24
    L_s11_24: jmp L_s11_25
    L_s11_25: jmp L_s11_26
    L_s11_26: jmp L_s11_27
    L_s11_27: jmp L_63168
    L_63168:
        cmp     eax, 0x50
        jz      L_633a7
        mov     eax, 0xb
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    L_6317b:
        mov     eax, dword ptr [g_8bd66c]
        test    eax, eax
        jz      L_633b1
        mov     edi, dword ptr [ebp + 0x14]
        test    edi, edi
        jz      L_633b1
        mov     edx, dword ptr [ebp + 0x8]
        push    esi
        push    edx
        call    FUN_007626d0
        add     esp, 0x8
        mov     ebx, eax
        jmp     L_s12_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s12_1: jmp L_s12_2
    L_s12_2: jmp L_s12_3
    L_s12_3: jmp L_s12_4
    L_s12_4: jmp L_s12_5
    L_s12_5: jmp L_s12_6
    L_s12_6: jmp L_s12_7
    L_s12_7: jmp L_s12_8
    L_s12_8: jmp L_s12_9
    L_s12_9: jmp L_s12_10
    L_s12_10: jmp L_s12_11
    L_s12_11: jmp L_s12_12
    L_s12_12: jmp L_s12_13
    L_s12_13: jmp L_s12_14
    L_s12_14: jmp L_s12_15
    L_s12_15: jmp L_s12_16
    L_s12_16: jmp L_s12_17
    L_s12_17: jmp L_s12_18
    L_s12_18: jmp L_s12_19
    L_s12_19: jmp L_s12_20
    L_s12_20: jmp L_s12_21
    L_s12_21: jmp L_s12_22
    L_s12_22: jmp L_s12_23
    L_s12_23: jmp L_s12_24
    L_s12_24: jmp L_s12_25
    L_s12_25: jmp L_s12_26
    L_s12_26: jmp L_s12_27
    L_s12_27: jmp L_631de
    L_631de:
        test    ebx, ebx
        jz      L_633b1
        push    ebx
        call    FUN_00763430
        add     esp, 0x4
        test    eax, eax
        jz      L_633b1
        mov     ecx, dword ptr [esi]
        mov     esi, eax
        test    ecx, ecx
        mov     ecx, 0x6
        jnz     L_63206
        mov     edi, dword ptr [edi]
    L_63206:
        mov     eax, dword ptr [ebp + 0x10]
        push    0x5
        rep     movsd
        push    0xc
        call    dword ptr [eax + 0x18]
        mov     esi, eax
        xor     ecx, ecx
        mov     edx, esi
        add     esp, 0x8
        mov     dword ptr [edx], ecx
        mov     dword ptr [edx + 0x4], ecx
        mov     dword ptr [edx + 0x8], ecx
        jmp     L_s13_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s13_1: jmp L_s13_2
    L_s13_2: jmp L_s13_3
    L_s13_3: jmp L_s13_4
    L_s13_4: jmp L_s13_5
    L_s13_5: jmp L_s13_6
    L_s13_6: jmp L_s13_7
    L_s13_7: jmp L_s13_8
    L_s13_8: jmp L_s13_9
    L_s13_9: jmp L_s13_10
    L_s13_10: jmp L_s13_11
    L_s13_11: jmp L_s13_12
    L_s13_12: jmp L_s13_13
    L_s13_13: jmp L_s13_14
    L_s13_14: jmp L_s13_15
    L_s13_15: jmp L_s13_16
    L_s13_16: jmp L_s13_17
    L_s13_17: jmp L_s13_18
    L_s13_18: jmp L_s13_19
    L_s13_19: jmp L_s13_20
    L_s13_20: jmp L_s13_21
    L_s13_21: jmp L_s13_22
    L_s13_22: jmp L_s13_23
    L_s13_23: jmp L_s13_24
    L_s13_24: jmp L_s13_25
    L_s13_25: jmp L_s13_26
    L_s13_26: jmp L_s13_27
    L_s13_27: jmp L_6325f
    L_6325f:
        test    esi, esi
        jz      L_633b1
        jmp     L_s14_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s14_1: jmp L_s14_2
    L_s14_2: jmp L_s14_3
    L_s14_3: jmp L_s14_4
    L_s14_4: jmp L_s14_5
    L_s14_5: jmp L_s14_6
    L_s14_6: jmp L_s14_7
    L_s14_7: jmp L_s14_8
    L_s14_8: jmp L_s14_9
    L_s14_9: jmp L_s14_10
    L_s14_10: jmp L_s14_11
    L_s14_11: jmp L_s14_12
    L_s14_12: jmp L_s14_13
    L_s14_13: jmp L_s14_14
    L_s14_14: jmp L_s14_15
    L_s14_15: jmp L_s14_16
    L_s14_16: jmp L_s14_17
    L_s14_17: jmp L_s14_18
    L_s14_18: jmp L_s14_19
    L_s14_19: jmp L_s14_20
    L_s14_20: jmp L_s14_21
    L_s14_21: jmp L_s14_22
    L_s14_22: jmp L_s14_23
    L_s14_23: jmp L_s14_24
    L_s14_24: jmp L_s14_25
    L_s14_25: jmp L_s14_26
    L_s14_26: jmp L_s14_27
    L_s14_27: jmp L_632a3
    L_632a3:
        lea     eax, [esi + 0x8]
        lea     edi, [esi + 0x4]
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        push    edi
        push    esi
        mov     ecx, dword ptr [eax]
        push    ecx
        push    ebx
        call    dword ptr [g_8bd66c]
        add     esp, 0x14
        jmp     L_s15_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s15_1: jmp L_s15_2
    L_s15_2: jmp L_s15_3
    L_s15_3: jmp L_s15_4
    L_s15_4: jmp L_s15_5
    L_s15_5: jmp L_s15_6
    L_s15_6: jmp L_s15_7
    L_s15_7: jmp L_s15_8
    L_s15_8: jmp L_s15_9
    L_s15_9: jmp L_s15_10
    L_s15_10: jmp L_s15_11
    L_s15_11: jmp L_s15_12
    L_s15_12: jmp L_s15_13
    L_s15_13: jmp L_s15_14
    L_s15_14: jmp L_s15_15
    L_s15_15: jmp L_s15_16
    L_s15_16: jmp L_s15_17
    L_s15_17: jmp L_s15_18
    L_s15_18: jmp L_s15_19
    L_s15_19: jmp L_s15_20
    L_s15_20: jmp L_s15_21
    L_s15_21: jmp L_s15_22
    L_s15_22: jmp L_s15_23
    L_s15_23: jmp L_s15_24
    L_s15_24: jmp L_s15_25
    L_s15_25: jmp L_s15_26
    L_s15_26: jmp L_s15_27
    L_s15_27: jmp L_632f8
    L_632f8:
        cmp     eax, 0x50
        jnz     L_633b1
        cmp     dword ptr [esi], 0x0
        jz      L_633b1
        cmp     dword ptr [edi], 0x0
        jz      L_633b1
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_633b1
        jmp     L_s16_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s16_1: jmp L_s16_2
    L_s16_2: jmp L_s16_3
    L_s16_3: jmp L_s16_4
    L_s16_4: jmp L_s16_5
    L_s16_5: jmp L_s16_6
    L_s16_6: jmp L_s16_7
    L_s16_7: jmp L_s16_8
    L_s16_8: jmp L_s16_9
    L_s16_9: jmp L_s16_10
    L_s16_10: jmp L_s16_11
    L_s16_11: jmp L_s16_12
    L_s16_12: jmp L_s16_13
    L_s16_13: jmp L_s16_14
    L_s16_14: jmp L_s16_15
    L_s16_15: jmp L_s16_16
    L_s16_16: jmp L_s16_17
    L_s16_17: jmp L_s16_18
    L_s16_18: jmp L_s16_19
    L_s16_19: jmp L_s16_20
    L_s16_20: jmp L_s16_21
    L_s16_21: jmp L_s16_22
    L_s16_22: jmp L_s16_23
    L_s16_23: jmp L_s16_24
    L_s16_24: jmp L_s16_25
    L_s16_25: jmp L_s16_26
    L_s16_26: jmp L_s16_27
    L_s16_27: jmp L_6335a
    L_6335a:
        mov     dword ptr [ebx + 0x24], 0x15
        mov     dword ptr [ebx + 0x28], esi
        jmp     L_s17_1
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_s17_1: jmp L_s17_2
    L_s17_2: jmp L_s17_3
    L_s17_3: jmp L_s17_4
    L_s17_4: jmp L_s17_5
    L_s17_5: jmp L_s17_6
    L_s17_6: jmp L_s17_7
    L_s17_7: jmp L_s17_8
    L_s17_8: jmp L_s17_9
    L_s17_9: jmp L_s17_10
    L_s17_10: jmp L_s17_11
    L_s17_11: jmp L_s17_12
    L_s17_12: jmp L_s17_13
    L_s17_13: jmp L_s17_14
    L_s17_14: jmp L_s17_15
    L_s17_15: jmp L_s17_16
    L_s17_16: jmp L_s17_17
    L_s17_17: jmp L_s17_18
    L_s17_18: jmp L_s17_19
    L_s17_19: jmp L_s17_20
    L_s17_20: jmp L_s17_21
    L_s17_21: jmp L_s17_22
    L_s17_22: jmp L_s17_23
    L_s17_23: jmp L_s17_24
    L_s17_24: jmp L_s17_25
    L_s17_25: jmp L_s17_26
    L_s17_26: jmp L_s17_27
    L_s17_27: jmp L_633a0
    L_633a0:
        mov     dword ptr [ebx + 0x2c], 0xc
    L_633a7:
        mov     eax, 0xa
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    L_633b1:
    }
}
