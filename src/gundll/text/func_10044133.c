/*
 * FUN_10044133 (9 B) - __cdecl.  Wrapper: FUN_1004413c(1).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1004413c(void);

__declspec(naked) void FUN_10044133(void)
{
    __asm {
        push    1
        call    FUN_1004413c
        pop     ecx
        ret
    }
}
