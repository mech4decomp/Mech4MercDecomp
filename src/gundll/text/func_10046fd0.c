/*
 * FUN_10046FD0 (8 B) - thiscall tail-call thunk.  Loads this from
 * [ebp-0x1c] and tail-jumps to FUN_10006480.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10006480(void);   /* rel32 call (thiscall, ecx=this) */

__declspec(naked) void FUN_10046FD0(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x1c]
        jmp     FUN_10006480
    }
}
