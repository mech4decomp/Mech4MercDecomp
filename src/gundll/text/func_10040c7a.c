/*
 * FUN_10040C7A (20 B) - __cdecl.
 * Calls FUN_10044133; if g_100754ec is nonzero, tail-jumps to FUN_10043ff9.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10044133(void);   /* rel32 call */
extern void __cdecl FUN_10043ff9(void);   /* rel32 tail jmp */
extern char g_100754ec;

__declspec(naked) void __cdecl FUN_10040C7A(void)
{
    __asm {
        call    FUN_10044133
        cmp     byte ptr [g_100754ec], 0
        je      L_c8d
        jmp     FUN_10043ff9
    L_c8d:
        ret
    }
}
