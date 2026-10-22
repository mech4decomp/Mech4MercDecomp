/*
 * FUN_0040a0e0 (36 B) — stack-scoped object lifecycle: construct via
 * FUN_0040a020, init via FUN_0040a330, destroy via FUN_0040a080, return 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040a020(void);
extern void __cdecl FUN_0040a330(void);
extern void __cdecl FUN_0040a080(void);

__declspec(naked) void FUN_0040a0e0(void)
{
    __asm {
        sub     esp, 0x40
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp+0] (8D 0C 24); ref needs 8D 4C 24 00 */
        __emit  0x8D
        __emit  0x4C
        __emit  0x24
        __emit  0x00
        call    FUN_0040a020
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp+0] (8D 0C 24); ref needs 8D 4C 24 00 */
        __emit  0x8D
        __emit  0x4C
        __emit  0x24
        __emit  0x00
        call    FUN_0040a330
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp+0] (8D 0C 24); ref needs 8D 4C 24 00 */
        __emit  0x8D
        __emit  0x4C
        __emit  0x24
        __emit  0x00
        call    FUN_0040a080
        mov     al, 1
        add     esp, 0x40
        ret
    }
}
