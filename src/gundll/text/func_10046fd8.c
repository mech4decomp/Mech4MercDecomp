/*
 * FUN_10046FD8 (8 B) - thiscall tail-call thunk.  Loads this from
 * [ebp-0x10] and tail-jumps to FUN_10006240.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10006240(void);   /* rel32 call, ecx=this */

__declspec(naked) void FUN_10046FD8(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_10006240
    }
}
