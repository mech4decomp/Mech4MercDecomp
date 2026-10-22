/*
 * FUN_10046D50 (6 B) - __thiscall tail-call thunk.  lea ecx,[ebp-0x30];
 * jmp FUN_100149e0 (passes &local as ECX this).  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100149e0(void);   /* rel32 jmp, __thiscall (ECX=this) */

__declspec(naked) void __cdecl FUN_10046D50(void)
{
    __asm {
        lea     ecx, [ebp - 0x30]
        jmp     FUN_100149e0
    }
}
