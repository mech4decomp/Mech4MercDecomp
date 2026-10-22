/*
 * FUN_00763BA0 (77 B) — Calls FUN_00763dc0(0x764020, 0), then runs through
 * a chain of EB 00 (jmp +0) obfuscation jumps before a trailing
 * cmp eax,0xa / jnz / ret. The EB 00 chain and the 4 unreachable junk
 * bytes (D6 D6 3C 00) are SafeDisc-style anti-disassembly padding.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00763dc0(void *a, int b);

__declspec(naked) void FUN_00763ba0(void)
{
    __asm {
        push    0x764020
        push    0x0
        call    FUN_00763dc0
        add     esp, 0x8
        jmp     label_763bb5
        /* __emit: 4 unreachable junk bytes (D6 D6 3C 00) skipped by the
           EB 04 jmp above — not real instructions, emitted verbatim */
    __emit 0xD6
    __emit 0xD6
    __emit 0x3C
    __emit 0x00
    label_763bb5:
        jmp     label_763bb7
    label_763bb7:
        jmp     label_763bb9
    label_763bb9:
        jmp     label_763bbb
    label_763bbb:
        jmp     label_763bbd
    label_763bbd:
        jmp     label_763bbf
    label_763bbf:
        jmp     label_763bc1
    label_763bc1:
        jmp     label_763bc3
    label_763bc3:
        jmp     label_763bc5
    label_763bc5:
        jmp     label_763bc7
    label_763bc7:
        jmp     label_763bc9
    label_763bc9:
        jmp     label_763bcb
    label_763bcb:
        jmp     label_763bcd
    label_763bcd:
        jmp     label_763bcf
    label_763bcf:
        jmp     label_763bd1
    label_763bd1:
        jmp     label_763bd3
    label_763bd3:
        jmp     label_763bd5
    label_763bd5:
        jmp     label_763bd7
    label_763bd7:
        jmp     label_763bd9
    label_763bd9:
        jmp     label_763bdb
    label_763bdb:
        jmp     label_763bdd
    label_763bdd:
        jmp     label_763bdf
    label_763bdf:
        jmp     label_763be1
    label_763be1:
        jmp     label_763be3
    label_763be3:
        jmp     label_763be5
    label_763be5:
        jmp     label_763be7
    label_763be7:
        jmp     label_763be9
    label_763be9:
        jmp     label_763beb
    label_763beb:
        cmp     eax, 0xa
        jnz     label_763bf0
    label_763bf0:
        ret
    }
}
