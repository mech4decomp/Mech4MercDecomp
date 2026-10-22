/*
 * FUN_5e030978 (9 B) - call FUN_5e02bdd2 and return result + 8.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02bdd2(void);

__declspec(naked) void FUN_5e030978(void)
{
    __asm {
        call    FUN_5e02bdd2
        add     eax, 8
        ret
    }
}
