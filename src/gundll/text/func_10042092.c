/*
 * FUN_10042092 (9 B) - __cdecl.
 * Calls FUN_100374e6(2) (__amsg_exit).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100374e6(unsigned long);   /* rel32 call (__amsg_exit) */

__declspec(naked) void __cdecl FUN_10042092(void)
{
    __asm {
        push    2
        call    FUN_100374e6
        pop     ecx
        ret
    }
}
