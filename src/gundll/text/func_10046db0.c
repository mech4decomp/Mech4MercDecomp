/*
 * FUN_10046DB0 (8 B) - tail-call thunk.  Sets ecx = ebp-0x34 (a stack-local
 * object pointer) and tail-jumps to FUN_100152b0 (__fastcall, this in ecx).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100152b0(void);   /* rel32 call, ecx=this */

__declspec(naked) void __cdecl FUN_10046DB0(void)
{
    __asm {
        lea     ecx, [ebp - 0x34]
        jmp     FUN_100152b0
    }
}
