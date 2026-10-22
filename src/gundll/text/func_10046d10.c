/*
 * FUN_10046D10 (6 B) - __thiscall tail-call thunk.  lea ecx,[ebp-0x2c];
 * jmp FUN_10014590 (passes &local as ECX this).  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10014590(void);   /* rel32 jmp, __thiscall (ECX=this) */

__declspec(naked) void __cdecl FUN_10046D10(void)
{
    __asm {
        lea     ecx, [ebp - 0x2c]
        jmp     FUN_10014590
    }
}
