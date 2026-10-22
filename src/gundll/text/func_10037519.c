/*
 * FUN_10037519 (9 B) - __cdecl. Thin wrapper: push 0x19, call
 * FUN_100374e6, pop ecx, ret.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100374e6(void);   /* rel32 call, __cdecl */

__declspec(naked) void __cdecl FUN_10037519(void)
{
    __asm {
        push    0x19
        call    FUN_100374e6
        pop     ecx
        ret
    }
}
