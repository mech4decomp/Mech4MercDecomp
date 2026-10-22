/*
 * FUN_1004882B (10 B) - __cdecl.  Thunk: loads data pointer 0x1004df38 into
 * EAX, then jumps to FUN_100375ba (exception-record wrapper).  (Transcribed
 * from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004df38;              /* module data pointer */
extern void __cdecl FUN_100375ba(void);   /* rel32 jmp */

__declspec(naked) void __cdecl FUN_1004882B(void)
{
    __asm {
        mov     eax, offset g_1004df38
        jmp     FUN_100375ba
    }
}
