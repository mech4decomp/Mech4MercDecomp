/*
 * FUN_10046C38 (10 B) - __cdecl tail-call thunk.  mov eax,0x1004c2a0;
 * jmp FUN_100375ba (passes constant in EAX).  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100375ba(void);   /* rel32 jmp */

__declspec(naked) void __cdecl FUN_10046C38(void)
{
    __asm {
        mov     eax, 0x1004c2a0
        jmp     FUN_100375ba
    }
}
