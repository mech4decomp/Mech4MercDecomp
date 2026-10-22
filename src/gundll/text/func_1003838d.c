/*
 * FUN_1003838D (17 B) - __cdecl, 1 arg. Pushes (arg1, 1, 0), calls
 * FUN_100383bc (cdecl, 3 args), cleans up 3 stack args.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100383bc(void);   /* rel32 call, __cdecl */

__declspec(naked) void __cdecl FUN_1003838D(void)
{
    __asm {
        push    0
        push    1
        push    dword ptr [esp+0xc]
        call    FUN_100383bc
        add     esp, 0xc
        ret
    }
}
