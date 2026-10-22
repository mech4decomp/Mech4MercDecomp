/*
 * FUN_10047130 (8 B) - tail-call thunk: loads this from [ebp-0x30] into
 * ecx and jumps to FUN_10019880.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10019880(void);   /* rel32 tail call, ecx=this */

__declspec(naked) void FUN_10047130(void)
{
    __asm {
        lea     ecx, [ebp - 0x30]
        jmp     FUN_10019880
    }
}
