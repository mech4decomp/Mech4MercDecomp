/*
 * FUN_10007df0 (13 B) - __fastcall: pushes string 0x10025678, calls
 * FUN_10008dc0, returns 0.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10008dc0(void);

__declspec(naked) int __cdecl FUN_10007df0(void)
{
    __asm {
        push    0x10025678
        call    FUN_10008dc0
        xor     al, al
        ret
    }
}
