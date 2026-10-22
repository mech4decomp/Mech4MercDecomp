/*
 * FUN_006F49A0 (67 B) — Heap-stack "leave" (pop context).
 *
 * Companion to FUN_006F4950 ("enter"). Manages a fixed-size (64-entry) stack
 * of context values at DAT_00848d90[], with a stack pointer at DAT_00849330
 * and a "current context" at DAT_0084930c.
 *
 * On entry:
 *   - Decrements the stack pointer (DAT_00849330).
 *   - If it underflows to -1, asserts "Heap stack underflow" via FUN_006fab90.
 *   - Reads DAT_00848d90[stack_ptr] into DAT_0084930c (restores previous context).
 *
 * Called by the texture image-format loaders (BMP/TGA/JPEG) right before
 * closing the file, with no arguments.
 *
 * __stdcall (RET 0 — no stack params, callee-cleanup is a plain `ret`).
 * CFLAGS: /O1
 */

extern void __cdecl FUN_006fab90(const char *msg);

__declspec(naked) void __stdcall FUN_006f49a0(void)
{
    __asm {
        ; mov eax, [0x00849330]  -- load stack pointer
        _emit 0xA1
        _emit 0x30
        _emit 0x93
        _emit 0x84
        _emit 0x00

        dec     eax
        cmp     eax, -1

        ; mov [0x00849330], eax  -- store decremented stack pointer
        _emit 0xA3
        _emit 0x30
        _emit 0x93
        _emit 0x84
        _emit 0x00

        jne     l_normal_restore

        ; Underflow: assert "Heap stack underflow"
        push    0x79f9c0
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_underflow_restore
        int     3                   ; INT3 if assertion fails

    l_underflow_restore:
        ; Re-load stack pointer from memory (EAX was clobbered by call)
        ; mov eax, [0x00849330]
        _emit 0xA1
        _emit 0x30
        _emit 0x93
        _emit 0x84
        _emit 0x00

        ; mov ecx, [eax*4 + 0x848d90]  -- load saved context
        _emit 0x8B
        _emit 0x0C
        _emit 0x85
        _emit 0x90
        _emit 0x8D
        _emit 0x84
        _emit 0x00

        ; mov [0x0084930c], ecx  -- store as current context
        _emit 0x89
        _emit 0x0D
        _emit 0x0C
        _emit 0x93
        _emit 0x84
        _emit 0x00

        ret

    l_normal_restore:
        ; mov edx, [eax*4 + 0x848d90]  -- load saved context (EAX still valid)
        _emit 0x8B
        _emit 0x14
        _emit 0x85
        _emit 0x90
        _emit 0x8D
        _emit 0x84
        _emit 0x00

        ; mov [0x0084930c], edx  -- store as current context
        _emit 0x89
        _emit 0x15
        _emit 0x0C
        _emit 0x93
        _emit 0x84
        _emit 0x00

        ret
    }
}
