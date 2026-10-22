/*
 * FUN_5e030981 (9 B) - call FUN_5e02bdd2 and return result + 0xc.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02bdd2(void);

__declspec(naked) void FUN_5e030981(void)
{
    __asm {
        call    FUN_5e02bdd2
        add     eax, 0xc
        ret
    }
}
