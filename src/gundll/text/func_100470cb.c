/*
 * FUN_100470CB (8 B) - __fastcall tail-call thunk: loads this from
 * [ebp-0x14] into ecx and jumps to FUN_100068d0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_100068d0(void);   /* rel32 tail call */

__declspec(naked) void __fastcall FUN_100470CB(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x14]
        jmp     FUN_100068d0
    }
}
