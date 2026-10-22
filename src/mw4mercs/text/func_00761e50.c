/*
 * FUN_00761E50 (564 B) — Buffer-processing routine. Walks a list of buffers
 * (rep movsd/movsb copies), then flushes them via a vtable call
 * ([ECX+0x20]) and resets the queue.
 *
 * Obfuscated: real code blocks are separated by "EB 04 D6 D6 3C 00" jump
 * chains crossed with "EB 00" no-op sleds. The EB 04 skips 4 junk bytes
 * (D6 D6 3C 00) into an EB 00 sled that walks to the next real block.
 * The junk bytes are data (not instructions) and are emitted via __emit;
 * the EB 04 / EB 00 jumps are real jmp mnemonics (each EB 00 is a jmp to
 * the immediately following instruction, encoded as EB 00).
 *
 * __cdecl, RET 4 (1 param). Returns char.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char __cdecl FUN_00761e50(int param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        xor     ebx, ebx
        cmp     esi, ebx
        push    edi
        jnz     L_6e6e
        mov     eax, 0x51
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_6e6e:
        jmp     L_sled1
        /* __emit: 4 junk bytes (D6 D6 3C 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
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
        mov     ecx, dword ptr [esi + 0x100]
        cmp     ecx, ebx
        mov     dword ptr [ebp - 0xc], ecx
        jnz     L_6ec3
        mov     eax, 0x51
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_6ec3:
        cmp     dword ptr [ecx], ebx
        jz      L_6fe8
        mov     eax, dword ptr [esi + 0x104]
        mov     edx, dword ptr [esi + 0x108]
        cmp     eax, ebx
        mov     dword ptr [ebp - 0x8], ebx
        jbe     L_6fe8
        lea     eax, [esi + 0x114]
        mov     dword ptr [ebp - 0x4], eax
L_6eeb:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ecx]
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
        test    byte ptr [eax], 0x1
        jbe     L_6f86
        mov     ecx, dword ptr [eax + 0x8]
        mov     edi, dword ptr [eax + 0x4]
        mov     ebx, ecx
        mov     esi, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
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
        mov     esi, dword ptr [ebp + 0x8]
L_6f86:
        add     edx, dword ptr [eax + 0x8]
        jmp     L_sled4
        /* __emit: 4 junk bytes (D6 D6 3C 00) skipped by the EB 04 jump */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
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
        mov     eax, dword ptr [ebp - 0x8]
        mov     edi, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [esi + 0x104]
        inc     eax
        add     edi, 0x4
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0x4], edi
        jc      L_6eeb
        mov     ecx, dword ptr [ebp - 0xc]
        xor     ebx, ebx
L_6fe8:
        mov     eax, dword ptr [esi + 0x108]
        cmp     eax, ebx
        jz      L_62044
        mov     edx, dword ptr [esi + 0x10c]
        push    0x2
        push    edx
        push    eax
        call    dword ptr [ecx + 0x20]
        add     esp, 0xc
        mov     dword ptr [esi + 0x108], ebx
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
L_62044:
        mov     eax, dword ptr [esi + 0x104]
        mov     dword ptr [esi + 0x10c], ebx
        cmp     eax, ebx
        jbe     L_62082
        lea     edi, [esi + 0x114]
L_6205a:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L_6206e
        push    0x3
        push    0xc
        push    eax
        mov     eax, dword ptr [ebp - 0xc]
        call    dword ptr [eax + 0x20]
        add     esp, 0xc
L_6206e:
        mov     dword ptr [edi], 0x0
        mov     eax, dword ptr [esi + 0x104]
        inc     ebx
        add     edi, 0x4
        cmp     ebx, eax
        jc      L_6205a
L_62082:
        mov     dword ptr [esi + 0x104], 0x0
        pop     edi
        pop     esi
        mov     eax, 0x50
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
