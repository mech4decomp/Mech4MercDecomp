/*
 * WSACleanup (5 B) — Import thunk for WSACleanup.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075e022(void);   /* thunk at 0x0075E022 */

__declspec(naked) int __stdcall func_005008d0(void)
{
    __asm {
        jmp FUN_0075e022
    }
}
