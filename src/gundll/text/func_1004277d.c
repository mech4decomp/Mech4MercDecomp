/*
 * FUN_1004277d (9 B) - __stdcall. Returns FUN_10038512() + 8.
 *
 * CFLAGS: /O1
 */

extern void * __cdecl FUN_10038512(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1004277d(void)
{
    __asm {
        call    FUN_10038512
        add     eax, 8
        ret
    }
}
