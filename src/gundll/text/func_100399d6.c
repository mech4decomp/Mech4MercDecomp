/*
 * FUN_100399D6 (5 B) - tail-call thunk: jmp FUN_1003990C.
 * (Transcribed from reference bytes; gaptext tail.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003990C(void);

__declspec(naked) void FUN_100399D6(void)
{
    __asm {
        jmp     FUN_1003990C
    }
}
