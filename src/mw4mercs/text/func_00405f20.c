/*
 * FUN_00405f20 (8 B) -- calls FUN_00403eb0 and returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00403eb0(void);

__declspec(naked) void FUN_00405f20(void)
{
    __asm {
        call    FUN_00403eb0
        mov     al, 1
        ret
    }
}
