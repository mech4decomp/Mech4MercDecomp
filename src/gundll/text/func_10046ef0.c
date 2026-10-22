/*
 * FUN_10046EF0 (8 B) - tail-call thunk.  Sets ecx = ebp-0x30 (a stack-local
 * object pointer) and tail-jumps to FUN_10010d20 (__fastcall, this in ecx).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10010d20(void);   /* rel32 call, ecx=this */

__declspec(naked) void __cdecl FUN_10046EF0(void)
{
    __asm {
        lea     ecx, [ebp - 0x30]
        jmp     FUN_10010d20
    }
}
