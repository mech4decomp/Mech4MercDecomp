/*
 * FUN_0040bc90 (36 B) — constructs a 0x24-byte temp object on the stack:
 * FUN_0040bc00, FUN_0040bd60, FUN_0040bc30, returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0040bc00(void);
extern void FUN_0040bd60(void);
extern void FUN_0040bc30(void);

__declspec(naked) void FUN_0040bc90(void)
{
    __asm {
        sub     esp, 0x24
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp+0] (8D 0C 24) */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_0040bc00
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp+0] (8D 0C 24) */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_0040bd60
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp+0] (8D 0C 24) */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_0040bc30
        mov     al, 1
        add     esp, 0x24
        ret
    }
}
