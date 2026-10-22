/*
 * FUN_10046C30 (6 B) - __thiscall tail-call thunk.  lea ecx,[ebp-0x2c];
 * jmp FUN_100136c0 (passes &local as ECX this).  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100136c0(void);   /* rel32 jmp, __thiscall (ECX=this) */

__declspec(naked) void __cdecl FUN_10046C30(void)
{
    __asm {
        lea     ecx, [ebp - 0x2c]
        jmp     FUN_100136c0
    }
}
