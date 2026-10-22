/*
 * FUN_00763C00 (77 B) — Calls FUN_00763dc0(0x764f40, 4), then runs through
 * a chain of EB 00 (jmp +0) obfuscation jumps before a trailing
 * cmp eax,0xa / jnz / ret. The EB 00 chain and the 4 unreachable junk
 * bytes (D6 D6 3C 00) are SafeDisc-style anti-disassembly padding.
 * (Sibling of FUN_00763BA0.)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00763dc0(void *a, int b);

__declspec(naked) void FUN_00763c00(void)
{
    __asm {
        push    0x764f40
        push    0x4
        call    FUN_00763dc0
        add     esp, 0x8
        jmp     label_763c15
        /* __emit: 4 unreachable junk bytes (D6 D6 3C 00) skipped by the
           EB 04 jmp above — not real instructions, emitted verbatim */
    __emit 0xD6
    __emit 0xD6
    __emit 0x3C
    __emit 0x00
    label_763c15:
        jmp     label_763c17
    label_763c17:
        jmp     label_763c19
    label_763c19:
        jmp     label_763c1b
    label_763c1b:
        jmp     label_763c1d
    label_763c1d:
        jmp     label_763c1f
    label_763c1f:
        jmp     label_763c21
    label_763c21:
        jmp     label_763c23
    label_763c23:
        jmp     label_763c25
    label_763c25:
        jmp     label_763c27
    label_763c27:
        jmp     label_763c29
    label_763c29:
        jmp     label_763c2b
    label_763c2b:
        jmp     label_763c2d
    label_763c2d:
        jmp     label_763c2f
    label_763c2f:
        jmp     label_763c31
    label_763c31:
        jmp     label_763c33
    label_763c33:
        jmp     label_763c35
    label_763c35:
        jmp     label_763c37
    label_763c37:
        jmp     label_763c39
    label_763c39:
        jmp     label_763c3b
    label_763c3b:
        jmp     label_763c3d
    label_763c3d:
        jmp     label_763c3f
    label_763c3f:
        jmp     label_763c41
    label_763c41:
        jmp     label_763c43
    label_763c43:
        jmp     label_763c45
    label_763c45:
        jmp     label_763c47
    label_763c47:
        jmp     label_763c49
    label_763c49:
        jmp     label_763c4b
    label_763c4b:
        cmp     eax, 0xa
        jnz     label_763c50
    label_763c50:
        ret
    }
}
