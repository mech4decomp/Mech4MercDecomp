/*
 * FUN_10046D90 (8 B) - tail-call thunk.  Sets ecx = ebp-0x30 (a stack-local
 * object pointer) and tail-jumps to FUN_10015080 (__fastcall, this in ecx).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10015080(void);   /* rel32 call, ecx=this */

__declspec(naked) void __cdecl FUN_10046D90(void)
{
    __asm {
        lea     ecx, [ebp - 0x30]
        jmp     FUN_10015080
    }
}
