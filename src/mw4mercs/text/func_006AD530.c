/*
 * FUN_006AD530 (5 B) — .text data thunk: `jmp 0x6ad540`.
 *
 * Match: target 100%
 */

extern void __cdecl FUN_006ad540(void);

__declspec(naked) void FUN_006AD530(void)
{
    __asm {
        jmp     FUN_006ad540
    }
}
