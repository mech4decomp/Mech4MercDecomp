/*
 * FUN_00762530 (385 B) — factory/loader function.
 *
 * NOTE: The reference binary contains 4 NOP-sled padding blocks, each of the
 * form `EB 04` + 4 data bytes (D6 D6 3C 00) + 27x `EB 00` (jmp-to-next).
 * These are real bytes in .text (verified against the raw EXE; Ghidra's
 * disassembly of them is wrong). The `EB 04`/`EB 00` are transcribed as real
 * `jmp` mnemonics; only the 4 embedded data bytes per block use `__emit`
 * (they are data, not instructions).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007626d0(void);
extern void __cdecl FUN_007627f0(void);

__declspec(naked) void __stdcall FUN_00762530(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        push    edi
        test    ebx, ebx
        jnz     L_pad1_start
        mov     eax, 0xb
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L_pad1_start:
        jmp     L_pad1_end
        __emit  0xD6            /* data byte in NOP-sled padding, not an instruction */
        __emit  0xD6
        __emit  0x3C
        __emit  0x00
L_pad1_end:
        jmp     L_p1_1
L_p1_1: jmp     L_p1_2
L_p1_2: jmp     L_p1_3
L_p1_3: jmp     L_p1_4
L_p1_4: jmp     L_p1_5
L_p1_5: jmp     L_p1_6
L_p1_6: jmp     L_p1_7
L_p1_7: jmp     L_p1_8
L_p1_8: jmp     L_p1_9
L_p1_9: jmp     L_p1_10
L_p1_10: jmp    L_p1_11
L_p1_11: jmp    L_p1_12
L_p1_12: jmp    L_p1_13
L_p1_13: jmp    L_p1_14
L_p1_14: jmp    L_p1_15
L_p1_15: jmp    L_p1_16
L_p1_16: jmp    L_p1_17
L_p1_17: jmp    L_p1_18
L_p1_18: jmp    L_p1_19
L_p1_19: jmp    L_p1_20
L_p1_20: jmp    L_p1_21
L_p1_21: jmp    L_p1_22
L_p1_22: jmp    L_p1_23
L_p1_23: jmp    L_p1_24
L_p1_24: jmp    L_p1_25
L_p1_25: jmp    L_p1_26
L_p1_26: jmp    L_p1_27
L_p1_27:
        push    ebx
        push    0x3e7
        call    FUN_007626d0
        add     esp, 0x8
        mov     esi, eax
L_pad2_start:
        jmp     L_pad2_end
        __emit  0xD6            /* data byte in NOP-sled padding, not an instruction */
        __emit  0xD6
        __emit  0x3C
        __emit  0x00
L_pad2_end:
        jmp     L_p2_1
L_p2_1: jmp     L_p2_2
L_p2_2: jmp     L_p2_3
L_p2_3: jmp     L_p2_4
L_p2_4: jmp     L_p2_5
L_p2_5: jmp     L_p2_6
L_p2_6: jmp     L_p2_7
L_p2_7: jmp     L_p2_8
L_p2_8: jmp     L_p2_9
L_p2_9: jmp     L_p2_10
L_p2_10: jmp    L_p2_11
L_p2_11: jmp    L_p2_12
L_p2_12: jmp    L_p2_13
L_p2_13: jmp    L_p2_14
L_p2_14: jmp    L_p2_15
L_p2_15: jmp    L_p2_16
L_p2_16: jmp    L_p2_17
L_p2_17: jmp    L_p2_18
L_p2_18: jmp    L_p2_19
L_p2_19: jmp    L_p2_20
L_p2_20: jmp    L_p2_21
L_p2_21: jmp    L_p2_22
L_p2_22: jmp    L_p2_23
L_p2_23: jmp    L_p2_24
L_p2_24: jmp    L_p2_25
L_p2_25: jmp    L_p2_26
L_p2_26: jmp    L_p2_27
L_p2_27:
        test    esi, esi
        jnz     L_B1
        mov     eax, 0xb
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L_B1:
        mov     eax, dword ptr [esi + 0x1c]
        lea     edi, [esi + 0x8]
        test    eax, eax
        jz      L_B2
        mov     eax, 0xb
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L_B2:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ebp + 0xc]
        lea     eax, [ebp + 0x8]
        push    eax
        push    edi
        push    ecx
        push    edx
        call    dword ptr [ebx + 0x4]
        add     esp, 0x10
L_pad3_start:
        jmp     L_pad3_end
        __emit  0xD6            /* data byte in NOP-sled padding, not an instruction */
        __emit  0xD6
        __emit  0x3C
        __emit  0x00
L_pad3_end:
        jmp     L_p3_1
L_p3_1: jmp     L_p3_2
L_p3_2: jmp     L_p3_3
L_p3_3: jmp     L_p3_4
L_p3_4: jmp     L_p3_5
L_p3_5: jmp     L_p3_6
L_p3_6: jmp     L_p3_7
L_p3_7: jmp     L_p3_8
L_p3_8: jmp     L_p3_9
L_p3_9: jmp     L_p3_10
L_p3_10: jmp    L_p3_11
L_p3_11: jmp    L_p3_12
L_p3_12: jmp    L_p3_13
L_p3_13: jmp    L_p3_14
L_p3_14: jmp    L_p3_15
L_p3_15: jmp    L_p3_16
L_p3_16: jmp    L_p3_17
L_p3_17: jmp    L_p3_18
L_p3_18: jmp    L_p3_19
L_p3_19: jmp    L_p3_20
L_p3_20: jmp    L_p3_21
L_p3_21: jmp    L_p3_22
L_p3_22: jmp    L_p3_23
L_p3_23: jmp    L_p3_24
L_p3_24: jmp    L_p3_25
L_p3_25: jmp    L_p3_26
L_p3_26: jmp    L_p3_27
L_p3_27:
        cmp     word ptr [edi], 0x0
        jnz     L_C1
        mov     eax, 0xb
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L_C1:
        test    eax, eax
        jnz     L_C2
        push    esi
        call    FUN_007627f0
        add     esp, 0x4
        mov     eax, 0xb
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L_C2:
        mov     dword ptr [esi + 0x24], 0x14
        mov     dword ptr [esi + 0x28], eax
L_pad4_start:
        jmp     L_pad4_end
    __emit  0xD6            /* data byte in NOP-sled padding, not an instruction */
    __emit  0xD6
    __emit  0x3C
    __emit 0x00
L_pad4_end:
        jmp     L_p4_1
L_p4_1: jmp     L_p4_2
L_p4_2: jmp     L_p4_3
L_p4_3: jmp     L_p4_4
L_p4_4: jmp     L_p4_5
L_p4_5: jmp     L_p4_6
L_p4_6: jmp     L_p4_7
L_p4_7: jmp     L_p4_8
L_p4_8: jmp     L_p4_9
L_p4_9: jmp     L_p4_10
L_p4_10: jmp    L_p4_11
L_p4_11: jmp    L_p4_12
L_p4_12: jmp    L_p4_13
L_p4_13: jmp    L_p4_14
L_p4_14: jmp    L_p4_15
L_p4_15: jmp    L_p4_16
L_p4_16: jmp    L_p4_17
L_p4_17: jmp    L_p4_18
L_p4_18: jmp    L_p4_19
L_p4_19: jmp    L_p4_20
L_p4_20: jmp    L_p4_21
L_p4_21: jmp    L_p4_22
L_p4_22: jmp    L_p4_23
L_p4_23: jmp    L_p4_24
L_p4_24: jmp    L_p4_25
L_p4_25: jmp    L_p4_26
L_p4_26: jmp    L_p4_27
L_p4_27:
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp + 0x10]
        mov     dword ptr [esi + 0x2c], eax
        pop     edi
        mov     dword ptr [ecx], esi
        pop     esi
        mov     eax, 0xa
        pop     ebx
        pop     ebp
        ret
    }
}
