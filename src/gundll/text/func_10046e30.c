/*
 * FUN_10046E30 (8 B) - tail-call thunk.  Sets ecx = ebp-0x38 (a stack-local
 * object pointer) and tail-jumps to FUN_10015f40 (__fastcall, this in ecx).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10015f40(void);   /* rel32 call, ecx=this */

__declspec(naked) void __cdecl FUN_10046E30(void)
{
    __asm {
        lea     ecx, [ebp - 0x38]
        jmp     FUN_10015f40
    }
}
