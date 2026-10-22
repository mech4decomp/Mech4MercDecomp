/*
 * FUN_10046CB0 (6 B) - __thiscall tail-call thunk.  lea ecx,[ebp-0x30];
 * jmp FUN_10013e60 (passes &local as ECX this).  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10013e60(void);   /* rel32 jmp, __thiscall (ECX=this) */

__declspec(naked) void __cdecl FUN_10046CB0(void)
{
    __asm {
        lea     ecx, [ebp - 0x30]
        jmp     FUN_10013e60
    }
}
