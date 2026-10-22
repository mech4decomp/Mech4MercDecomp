/*
 * FUN_004096d0 (36 B) — constructs a temporary object on the stack
 * (FUN_00409610), calls FUN_004098f0, destroys it (FUN_00409670),
 * returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00409610(void);
extern void __cdecl FUN_004098f0(void);
extern void __cdecl FUN_00409670(void);

__declspec(naked) void FUN_004096d0(void)
{
    __asm {
        sub     esp, 0x38
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp] (8D 0C 24); ref needs 8D 4C 24 00 */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_00409610
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp] (8D 0C 24); ref needs 8D 4C 24 00 */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_004098f0
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp] (8D 0C 24); ref needs 8D 4C 24 00 */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_00409670
        mov     al, 1
        add     esp, 0x38
        ret
    }
}
