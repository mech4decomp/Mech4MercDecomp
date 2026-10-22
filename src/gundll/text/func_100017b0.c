/*
 * thunk_FUN_10008920 (5 B) - E9 rel32 jump thunk to FUN_10008920.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10008920(void);

__declspec(naked) void __fastcall FUN_100017b0(void)
{
    __asm {
        jmp     FUN_10008920
    }
}
