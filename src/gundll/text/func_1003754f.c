/*
 * FUN_1003754F (6 B) - __stdcall, RET 0x8.  No-op SEH-unwind stub:
 * restores callee-saved regs (pop edi/esi/ebx), leave, returns to caller,
 * popping 2 stack args.  (Transcribed from reference bytes; gaptext tail.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1003754F(void)
{
    __asm {
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret     8
    }
}
