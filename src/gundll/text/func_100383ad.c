/*
 * FUN_100383AD (15 B) - __cdecl. Pushes (0, 1, 1), calls FUN_100383bc
 * (cdecl, 3 args), cleans up 3 stack args.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100383bc(void);   /* rel32 call, __cdecl */

__declspec(naked) void __cdecl FUN_100383AD(void)
{
    __asm {
        push    1
        push    1
        push    0
        call    FUN_100383bc
        add     esp, 0xc
        ret
    }
}
