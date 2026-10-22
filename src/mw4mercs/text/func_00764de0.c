/*
 * FUN_00764DE0 (340 B) — Allocates and initializes a vtable-style
 * object (DAT_008bd4f8) with 9 function-pointer slots, returning it.
 * Returns 0 if param_1==0 or param_2!=0.
 *
 * __cdecl, RET (two stack params).
 *
 * The three `EB 04 D6 D6 3C 00` + 27x `EB 00` runs are compiler/macro
 * padding: the `EB 04` jumps over 4 dead data bytes (D6 D6 3C 00) into
 * a chain of 27 `EB 00` (jmp +0) NOPs. The 4 data bytes are not
 * executable code and have no MSVC6 mnemonic, so they are __emit'd.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_8bd4f8;                /* DAT_008bd4f8 object pointer */

extern void *__cdecl FUN_00765460(int a, int b);
extern void FUN_00764fb0(void);
extern void FUN_00765120(void);
extern void FUN_007652c0(void);
extern void FUN_00765450(void);
extern void FUN_00765490(void);
extern void FUN_00765500(void);

__declspec(naked) void *__cdecl FUN_00764DE0(int param_1, int param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        test    esi, esi
        jz      L_4f3b
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jnz     L_4f3b
        push    0x7
        push    0x24
        call    FUN_00765460
        add     esp, 0x8
        mov     dword ptr [g_8bd4f8], eax
        /* block 1: EB 04 over 4 dead data bytes, then 27x EB 00 */
        jmp     L_skip1
        __emit 0xD6   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0xD6   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0x3C   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0x00   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
L_skip1:
        jmp     L_p1
L_p1:   jmp     L_p2
L_p2:   jmp     L_p3
L_p3:   jmp     L_p4
L_p4:   jmp     L_p5
L_p5:   jmp     L_p6
L_p6:   jmp     L_p7
L_p7:   jmp     L_p8
L_p8:   jmp     L_p9
L_p9:   jmp     L_p10
L_p10:  jmp     L_p11
L_p11:  jmp     L_p12
L_p12:  jmp     L_p13
L_p13:  jmp     L_p14
L_p14:  jmp     L_p15
L_p15:  jmp     L_p16
L_p16:  jmp     L_p17
L_p17:  jmp     L_p18
L_p18:  jmp     L_p19
L_p19:  jmp     L_p20
L_p20:  jmp     L_p21
L_p21:  jmp     L_p22
L_p22:  jmp     L_p23
L_p23:  jmp     L_p24
L_p24:  jmp     L_p25
L_p25:  jmp     L_p26
L_p26:  jmp     L_p27
L_p27:
        mov     eax, dword ptr [g_8bd4f8]
        test    eax, eax
        jz      L_4f3b
        mov     dword ptr [eax], 0x4
        /* block 2 */
        jmp     L_skip2
        __emit 0xD6   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0xD6   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0x3C   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0x00   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
L_skip2:
        jmp     L_q1
L_q1:   jmp     L_q2
L_q2:   jmp     L_q3
L_q3:   jmp     L_q4
L_q4:   jmp     L_q5
L_q5:   jmp     L_q6
L_q6:   jmp     L_q7
L_q7:   jmp     L_q8
L_q8:   jmp     L_q9
L_q9:   jmp     L_q10
L_q10:  jmp     L_q11
L_q11:  jmp     L_q12
L_q12:  jmp     L_q13
L_q13:  jmp     L_q14
L_q14:  jmp     L_q15
L_q15:  jmp     L_q16
L_q16:  jmp     L_q17
L_q17:  jmp     L_q18
L_q18:  jmp     L_q19
L_q19:  jmp     L_q20
L_q20:  jmp     L_q21
L_q21:  jmp     L_q22
L_q22:  jmp     L_q23
L_q23:  jmp     L_q24
L_q24:  jmp     L_q25
L_q25:  jmp     L_q26
L_q26:  jmp     L_q27
L_q27:
        mov     eax, dword ptr [g_8bd4f8]
        mov     dword ptr [eax + 0x4], offset FUN_00764fb0
        mov     ecx, dword ptr [g_8bd4f8]
        mov     dword ptr [ecx + 0x8], offset FUN_00765120
        mov     edx, dword ptr [g_8bd4f8]
        mov     dword ptr [edx + 0xc], offset FUN_007652c0
        mov     eax, dword ptr [g_8bd4f8]
        mov     dword ptr [eax + 0x14], offset FUN_00765450
        mov     ecx, dword ptr [g_8bd4f8]
        mov     dword ptr [ecx + 0x18], offset FUN_00765460
        mov     edx, dword ptr [g_8bd4f8]
        mov     dword ptr [edx + 0x1c], offset FUN_00765490
        mov     eax, dword ptr [g_8bd4f8]
        mov     dword ptr [eax + 0x20], offset FUN_00765500
        mov     ecx, dword ptr [g_8bd4f8]
        mov     dword ptr [ecx + 0x10], esi
        /* block 3 */
        jmp     L_skip3
        __emit 0xD6   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0xD6   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0x3C   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0x00   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
L_skip3:
        jmp     L_r1
L_r1:   jmp     L_r2
L_r2:   jmp     L_r3
L_r3:   jmp     L_r4
L_r4:   jmp     L_r5
L_r5:   jmp     L_r6
L_r6:   jmp     L_r7
L_r7:   jmp     L_r8
L_r8:   jmp     L_r9
L_r9:   jmp     L_r10
L_r10:  jmp     L_r11
L_r11:  jmp     L_r12
L_r12:  jmp     L_r13
L_r13:  jmp     L_r14
L_r14:  jmp     L_r15
L_r15:  jmp     L_r16
L_r16:  jmp     L_r17
L_r17:  jmp     L_r18
L_r18:  jmp     L_r19
L_r19:  jmp     L_r20
L_r20:  jmp     L_r21
L_r21:  jmp     L_r22
L_r22:  jmp     L_r23
L_r23:  jmp     L_r24
L_r24:  jmp     L_r25
L_r25:  jmp     L_r26
L_r26:  jmp     L_r27
L_r27:
        mov     eax, dword ptr [g_8bd4f8]
        pop     esi
        pop     ebp
        ret
L_4f3b:
        xor     eax, eax
        pop     esi
        pop     ebp
        ret
    }
}
