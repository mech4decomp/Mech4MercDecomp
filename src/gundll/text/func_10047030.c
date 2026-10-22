/*
 * FUN_10047030 (8 B) - thiscall tail-call thunk.  Loads this from
 * [ebp-0x30] and tail-jumps to FUN_100193e0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100193e0(void);   /* rel32 call (thiscall, ecx=this) */

__declspec(naked) void FUN_10047030(void)
{
    __asm {
        lea     ecx, [ebp - 0x30]
        jmp     FUN_100193e0
    }
}
