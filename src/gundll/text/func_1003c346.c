/*
 * FUN_1003c346 (9 B) - __stdcall. Calls FUN_10039b7a(9).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10039b7a(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1003c346(void)
{
    __asm {
        push    9
        call    FUN_10039b7a
        pop     ecx
        ret
    }
}
