/*
 * Jump thunk: jmp 0x41cc60.
 *
 * __cdecl, RET via target.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041cc60(void);

__declspec(naked) void func_0041cc50(void)
{
    __asm {
        jmp     FUN_0041cc60
    }
}
