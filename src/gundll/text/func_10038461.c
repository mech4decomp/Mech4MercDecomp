/*
 * FUN_10038461 (9 B) - __stdcall. Calls FUN_10039b19(0xd).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10039b19(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10038461(void)
{
    __asm {
        push    0xd
        call    FUN_10039b19
        pop     ecx
        ret
    }
}
