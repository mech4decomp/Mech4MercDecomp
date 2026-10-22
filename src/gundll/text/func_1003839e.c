/*
 * FUN_1003839e (15 B) — __stdcall.
 * Pushes (1,0,0), calls FUN_100383bc, cleans up 3 stack args.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100383bc(void);

__declspec(naked) void __stdcall FUN_1003839e(void)
{
    __asm {
        push    0x1
        push    0x0
        push    0x0
        call    FUN_100383bc
        add     esp, 0xc
        ret
    }
}
