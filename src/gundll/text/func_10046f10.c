/*
 * FUN_10046F10 (8 B) - tail-call thunk.  Sets ecx = ebp-0x38 (a stack-local
 * object pointer) and tail-jumps to FUN_10010fd0 (__fastcall, this in ecx).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10010fd0(void);   /* rel32 call, ecx=this */

__declspec(naked) void __cdecl FUN_10046F10(void)
{
    __asm {
        lea     ecx, [ebp - 0x38]
        jmp     FUN_10010fd0
    }
}
