/*
 * FUN_1003837C (17 B) - __cdecl, 1 arg. Pushes (arg1, 0, 0), calls
 * FUN_100383bc (cdecl, 3 args), cleans up 3 stack args.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100383bc(void);   /* rel32 call, __cdecl */

__declspec(naked) void __cdecl FUN_1003837C(void)
{
    __asm {
        push    0
        push    0
        push    dword ptr [esp+0xc]
        call    FUN_100383bc
        add     esp, 0xc
        ret
    }
}
