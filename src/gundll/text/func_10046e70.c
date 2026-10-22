/*
 * FUN_10046E70 (8 B) - tail-call thunk.  Sets ecx = ebp-0x30 (a stack-local
 * object pointer) and tail-jumps to FUN_100104a0 (__fastcall, this in ecx).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100104a0(void);   /* rel32 call, ecx=this */

__declspec(naked) void __cdecl FUN_10046E70(void)
{
    __asm {
        lea     ecx, [ebp - 0x30]
        jmp     FUN_100104a0
    }
}
