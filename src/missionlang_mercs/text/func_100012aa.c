/*
 * FUN_100012aa (9 B) — calls FUN_10001d6d(0xd).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001d6d(int);

__declspec(naked) void __stdcall FUN_100012aa(void)
{
    __asm {
        push    0xd
        call    FUN_10001d6d
        pop     ecx
        ret
    }
}
