/*
 * FUN_0046C500 (5 B) — .text data thunk: `jmp 0x46c510`.
 *
 * Match: target 100%
 */

extern void __cdecl FUN_0046c510(void);

__declspec(naked) void FUN_0046C500(void)
{
    __asm {
        jmp     FUN_0046c510
    }
}
