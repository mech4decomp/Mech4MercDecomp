/*
 * FUN_00484890 (5 B) — .text data thunk: `jmp 0x4848a0`.
 *
 * Match: target 100%
 */

extern void __cdecl FUN_004848a0(void);

__declspec(naked) void FUN_00484890(void)
{
    __asm {
        jmp     FUN_004848a0
    }
}
