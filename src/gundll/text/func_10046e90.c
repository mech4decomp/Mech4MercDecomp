/*
 * FUN_10046E90 (8 B) - tail-call thunk.  Sets ecx = ebp-0x30 (a stack-local
 * object pointer) and tail-jumps to FUN_10010710 (__fastcall, this in ecx).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10010710(void);   /* rel32 call, ecx=this */

__declspec(naked) void __cdecl FUN_10046E90(void)
{
    __asm {
        lea     ecx, [ebp - 0x30]
        jmp     FUN_10010710
    }
}
