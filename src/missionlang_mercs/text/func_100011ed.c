/*
 * FUN_100011ed (15 B, __stdcall) — calls FUN_100011fc(1, 0, 0).
 *
 * Match: target 100%
 */

extern void __cdecl FUN_100011fc(int, int, int);

__declspec(naked) void __stdcall FUN_100011ed(void)
{
    __asm {
        push    1
        push    0
        push    0
        call    FUN_100011fc
        add     esp, 0xC
        ret
    }
}
