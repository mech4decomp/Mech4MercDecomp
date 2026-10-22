/*
 * FUN_1001C470 (5 B) - naked forwarder. Tail-jumps to FUN_1001C480
 * (rel32 jmp; the callee preserves the stack). (gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001C480(void);

__declspec(naked) void FUN_1001C470(void)
{
    __asm {
        jmp     FUN_1001C480
    }
}
