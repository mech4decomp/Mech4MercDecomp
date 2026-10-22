/*
 * FUN_100470D3 (8 B) - tail-call thunk: loads this from [ebp-0x10] into
 * ecx and jumps to FUN_10006240.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10006240(void);   /* rel32 tail call, ecx=this */

__declspec(naked) void FUN_100470D3(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_10006240
    }
}
