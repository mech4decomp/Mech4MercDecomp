/*
 * FUN_100471C0 (8 B) - tail-call thunk: loads this from [ebp-0x3c] into
 * ecx and jumps to FUN_1000d3e0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1000d3e0(void);   /* rel32 tail call, ecx=this */

__declspec(naked) void FUN_100471C0(void)
{
    __asm {
        lea     ecx, [ebp - 0x3c]
        jmp     FUN_1000d3e0
    }
}
