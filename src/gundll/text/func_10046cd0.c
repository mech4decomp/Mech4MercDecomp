/*
 * FUN_10046CD0 (6 B) - __thiscall tail-call thunk.  lea ecx,[ebp-0x34];
 * jmp FUN_10014090 (passes &local as ECX this).  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10014090(void);   /* rel32 jmp, __thiscall (ECX=this) */

__declspec(naked) void __cdecl FUN_10046CD0(void)
{
    __asm {
        lea     ecx, [ebp - 0x34]
        jmp     FUN_10014090
    }
}
