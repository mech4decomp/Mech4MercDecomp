/*
 * FUN_10047110 (8 B) - tail-call thunk: loads this from [ebp-0x2c] into
 * ecx and jumps to FUN_100196e0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100196e0(void);   /* rel32 tail call, ecx=this */

__declspec(naked) void FUN_10047110(void)
{
    __asm {
        lea     ecx, [ebp - 0x2c]
        jmp     FUN_100196e0
    }
}
