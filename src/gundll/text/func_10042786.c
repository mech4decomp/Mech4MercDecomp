/*
 * FUN_10042786 (9 B) - __stdcall. Returns FUN_10038512() + 0xc.
 *
 * CFLAGS: /O1
 */

extern void * __cdecl FUN_10038512(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10042786(void)
{
    __asm {
        call    FUN_10038512
        add     eax, 0xc
        ret
    }
}
