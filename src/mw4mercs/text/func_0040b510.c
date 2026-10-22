/*
 * FUN_0040b510 (34 B) — constructs a temporary object on the stack,
 * runs FUN_0040b670 on it, then destroys it via FUN_0040b4b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040b450(void);
extern void __cdecl FUN_0040b670(void);
extern void __cdecl FUN_0040b4b0(void);

__declspec(naked) void FUN_0040b510(void)
{
    __asm {
        sub     esp, 0x30
        /* __emit: MSVC6 encodes lea ecx,[esp] as 8D 0C 24 (drops the 00 disp byte); ref needs 8D 4C 24 00 */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_0040b450
        /* __emit: MSVC6 encodes lea ecx,[esp] as 8D 0C 24 (drops the 00 disp byte); ref needs 8D 4C 24 00 */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_0040b670
        /* __emit: MSVC6 encodes lea ecx,[esp] as 8D 0C 24 (drops the 00 disp byte); ref needs 8D 4C 24 00 */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_0040b4b0
        add     esp, 0x30
        ret
    }
}
