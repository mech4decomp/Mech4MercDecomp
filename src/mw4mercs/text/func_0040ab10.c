/*
 * FUN_0040ab10 (36 B) — constructs a 0x38-byte object on the stack via
 * FUN_0040aa50, initializes it via FUN_0040ad60, destroys it via FUN_0040aab0,
 * returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040aa50(void);
extern void __cdecl FUN_0040ad60(void);
extern void __cdecl FUN_0040aab0(void);

__declspec(naked) void FUN_0040ab10(void)
{
    __asm {
        sub     esp, 0x38
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp] (8D 0C 24); ref needs 8D 4C 24 00 */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_0040aa50
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp] (8D 0C 24); ref needs 8D 4C 24 00 */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_0040ad60
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp] (8D 0C 24); ref needs 8D 4C 24 00 */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_0040aab0
        mov     al, 0x1
        add     esp, 0x38
        ret
    }
}
