/*
 * FUN_1001B070 (5 B) - naked forwarder. Tail-jumps to FUN_1001B080
 * (rel32 jmp; the callee preserves the stack). (gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001B080(void);

__declspec(naked) void FUN_1001B070(void)
{
    __asm {
        jmp     FUN_1001B080
    }
}
