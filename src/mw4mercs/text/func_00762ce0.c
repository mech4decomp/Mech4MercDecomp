/*
 * FUN_00762ce0 (255 B) — __cdecl, one pointer param. Validates a struct,
 * calls a function pointer from param_1[8]+0xc, then FUN_007627f0(param_1).
 * Returns 0xb on validation failure.
 *
 * The three `EB 04` + `D6 D6 3C 00` + `EB 00` chains are a switch-statement
 * jump-table artifact: each `EB 04` jumps over 4 embedded data bytes into a
 * chain of `jmp +0` (EB 00) instructions that fall through to the real code.
 * The 4 data bytes are __emit'd; each EB 00 is a real `jmp` to the next label.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_007627f0(void *param_1);

__declspec(naked) void __stdcall FUN_00762ce0(void *param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        test    esi, esi
        push    edi
        jz      L_de2
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      L_de2
        jmp     L_c1a1
        /* __emit: 4 embedded jump-table data bytes (D6 D6 3C 00) skipped by the EB 04 */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L_c1a1: jmp     L_c1a2
L_c1a2: jmp     L_c1a3
L_c1a3: jmp     L_c1a4
L_c1a4: jmp     L_c1a5
L_c1a5: jmp     L_c1a6
L_c1a6: jmp     L_c1a7
L_c1a7: jmp     L_c1a8
L_c1a8: jmp     L_c1a9
L_c1a9: jmp     L_c1a10
L_c1a10: jmp    L_c1a11
L_c1a11: jmp    L_c1a12
L_c1a12: jmp    L_c1a13
L_c1a13: jmp    L_c1a14
L_c1a14: jmp    L_c1a15
L_c1a15: jmp    L_c1a16
L_c1a16: jmp    L_c1a17
L_c1a17: jmp    L_c1a18
L_c1a18: jmp    L_c1a19
L_c1a19: jmp    L_c1a20
L_c1a20: jmp    L_c1a21
L_c1a21: jmp    L_c1a22
L_c1a22: jmp    L_c1a23
L_c1a23: jmp    L_c1a24
L_c1a24: jmp    L_c1a25
L_c1a25: jmp    L_c1a26
L_c1a26: jmp    L_c1a27
L_c1a27: jmp    L_c1a28
L_c1a28:
        mov     eax, dword ptr [esi + 0x20]
        test    eax, eax
        jz      L_de2
        mov     eax, dword ptr [eax + 0xc]
        test    eax, eax
        jz      L_de2
        mov     ecx, dword ptr [esi + 0x28]
        mov     edx, dword ptr [esi]
        push    ecx
        push    edx
        call    eax
        add     esp, 0x8
        mov     edi, eax
        jmp     L_c2a1
        /* __emit: 4 embedded jump-table data bytes (D6 D6 3C 00) skipped by the EB 04 */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L_c2a1: jmp     L_c2a2
L_c2a2: jmp     L_c2a3
L_c2a3: jmp     L_c2a4
L_c2a4: jmp     L_c2a5
L_c2a5: jmp     L_c2a6
L_c2a6: jmp     L_c2a7
L_c2a7: jmp     L_c2a8
L_c2a8: jmp     L_c2a9
L_c2a9: jmp     L_c2a10
L_c2a10: jmp    L_c2a11
L_c2a11: jmp    L_c2a12
L_c2a12: jmp    L_c2a13
L_c2a13: jmp    L_c2a14
L_c2a14: jmp    L_c2a15
L_c2a15: jmp    L_c2a16
L_c2a16: jmp    L_c2a17
L_c2a17: jmp    L_c2a18
L_c2a18: jmp    L_c2a19
L_c2a19: jmp    L_c2a20
L_c2a20: jmp    L_c2a21
L_c2a21: jmp    L_c2a22
L_c2a22: jmp    L_c2a23
L_c2a23: jmp    L_c2a24
L_c2a24: jmp    L_c2a25
L_c2a25: jmp    L_c2a26
L_c2a26: jmp    L_c2a27
L_c2a27: jmp    L_c2a28
L_c2a28:
        push    esi
        call    FUN_007627f0
        add     esp, 0x4
        jmp     L_c3a1
        /* __emit: 4 embedded jump-table data bytes (D6 D6 3C 00) skipped by the EB 04 */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L_c3a1: jmp     L_c3a2
L_c3a2: jmp     L_c3a3
L_c3a3: jmp     L_c3a4
L_c3a4: jmp     L_c3a5
L_c3a5: jmp     L_c3a6
L_c3a6: jmp     L_c3a7
L_c3a7: jmp     L_c3a8
L_c3a8: jmp     L_c3a9
L_c3a9: jmp     L_c3a10
L_c3a10: jmp    L_c3a11
L_c3a11: jmp    L_c3a12
L_c3a12: jmp    L_c3a13
L_c3a13: jmp    L_c3a14
L_c3a14: jmp    L_c3a15
L_c3a15: jmp    L_c3a16
L_c3a16: jmp    L_c3a17
L_c3a17: jmp    L_c3a18
L_c3a18: jmp    L_c3a19
L_c3a19: jmp    L_c3a20
L_c3a20: jmp    L_c3a21
L_c3a21: jmp    L_c3a22
L_c3a22: jmp    L_c3a23
L_c3a23: jmp    L_c3a24
L_c3a24: jmp    L_c3a25
L_c3a25: jmp    L_c3a26
L_c3a26: jmp    L_c3a27
L_c3a27: jmp    L_c3a28
L_c3a28:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        ret
L_de2:
        pop     edi
        mov     eax, 0xb
        pop     esi
        pop     ebp
        ret
    }
}
