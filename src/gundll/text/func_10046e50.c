/*
 * FUN_10046E50 (8 B) - tail-call thunk.  Sets ecx = ebp-0x2c (a stack-local
 * object pointer) and tail-jumps to FUN_100102c0 (__fastcall, this in ecx).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100102c0(void);   /* rel32 call, ecx=this */

__declspec(naked) void __cdecl FUN_10046E50(void)
{
    __asm {
        lea     ecx, [ebp - 0x2c]
        jmp     FUN_100102c0
    }
}
