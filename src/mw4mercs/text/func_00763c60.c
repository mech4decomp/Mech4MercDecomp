/*
 * FUN_00763C60 (77 B) — Calls FUN_00763dc0(0x765690, 2), then runs through
 * a chain of EB 00 (jmp +0) obfuscation jumps before a trailing
 * cmp eax,0xa / jnz / ret. The EB 00 chain and the 4 unreachable junk
 * bytes (D6 D6 3C 00) are SafeDisc-style anti-disassembly padding.
 * (Sibling of FUN_00763BA0 / FUN_00763C00.)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00763dc0(void *a, int b);

__declspec(naked) void FUN_00763c60(void)
{
    __asm {
        push    0x765690
        push    0x2
        call    FUN_00763dc0
        add     esp, 0x8
        jmp     label_763c75
        /* __emit: 4 unreachable junk bytes (D6 D6 3C 00) skipped by the
           EB 04 jmp above — not real instructions, emitted verbatim */
    __emit 0xD6
    __emit 0xD6
    __emit 0x3C
    __emit 0x00
    label_763c75:
        jmp     label_763c77
    label_763c77:
        jmp     label_763c79
    label_763c79:
        jmp     label_763c7b
    label_763c7b:
        jmp     label_763c7d
    label_763c7d:
        jmp     label_763c7f
    label_763c7f:
        jmp     label_763c81
    label_763c81:
        jmp     label_763c83
    label_763c83:
        jmp     label_763c85
    label_763c85:
        jmp     label_763c87
    label_763c87:
        jmp     label_763c89
    label_763c89:
        jmp     label_763c8b
    label_763c8b:
        jmp     label_763c8d
    label_763c8d:
        jmp     label_763c8f
    label_763c8f:
        jmp     label_763c91
    label_763c91:
        jmp     label_763c93
    label_763c93:
        jmp     label_763c95
    label_763c95:
        jmp     label_763c97
    label_763c97:
        jmp     label_763c99
    label_763c99:
        jmp     label_763c9b
    label_763c9b:
        jmp     label_763c9d
    label_763c9d:
        jmp     label_763c9f
    label_763c9f:
        jmp     label_763ca1
    label_763ca1:
        jmp     label_763ca3
    label_763ca3:
        jmp     label_763ca5
    label_763ca5:
        jmp     label_763ca7
    label_763ca7:
        jmp     label_763ca9
    label_763ca9:
        jmp     label_763cab
    label_763cab:
        cmp     eax, 0xa
        jnz     label_763cb0
    label_763cb0:
        ret
    }
}
