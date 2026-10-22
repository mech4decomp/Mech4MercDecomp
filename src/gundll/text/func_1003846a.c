/*
 * FUN_1003846a (9 B) - __stdcall. Calls FUN_10039b7a(0xd).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10039b7a(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1003846a(void)
{
    __asm {
        push    0xd
        call    FUN_10039b7a
        pop     ecx
        ret
    }
}
