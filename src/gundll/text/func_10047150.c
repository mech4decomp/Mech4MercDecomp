/*
 * FUN_10047150 (8 B) - tail-call thunk: loads this from [ebp-0x3c] into
 * ecx and jumps to FUN_10019b20.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10019b20(void);   /* rel32 tail call, ecx=this */

__declspec(naked) void FUN_10047150(void)
{
    __asm {
        lea     ecx, [ebp - 0x3c]
        jmp     FUN_10019b20
    }
}
