/*
 * FUN_100470DB (10 B) - __cdecl.  Thunk: loads data pointer 0x1004c7ec into
 * EAX, then jumps to FUN_100375ba (exception-record wrapper).  (Transcribed
 * from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004c7ec;              /* module data pointer */
extern void __cdecl FUN_100375ba(void);   /* rel32 jmp */

__declspec(naked) void __cdecl FUN_100470DB(void)
{
    __asm {
        mov     eax, offset g_1004c7ec
        jmp     FUN_100375ba
    }
}
