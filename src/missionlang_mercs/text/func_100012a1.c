/*
 * FUN_100012a1 (9 B) — calls FUN_10001d0c(0xd).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001d0c(int);

__declspec(naked) void __stdcall FUN_100012a1(void)
{
    __asm {
        push    0xd
        call    FUN_10001d0c
        pop     ecx
        ret
    }
}
