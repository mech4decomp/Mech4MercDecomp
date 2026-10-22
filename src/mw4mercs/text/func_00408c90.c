/*
 * FUN_00408c90 (34 B) — __fastcall wrapper. Constructs a temporary object on
 * the stack, runs FUN_00408f60 on it, then destructs it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00408bd0(int);
extern void __cdecl FUN_00408f60(int);
extern void __cdecl FUN_00408c30(int);

__declspec(naked) void FUN_00408c90(void)
{
    __asm {
        sub     esp, 0x30
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp] (8D 0C 24) */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_00408bd0
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp] (8D 0C 24) */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_00408f60
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp] (8D 0C 24) */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_00408c30
        add     esp, 0x30
        ret
    }
}
