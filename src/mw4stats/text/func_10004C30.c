/*
 * FUN_10004c30 (15 B) - __fastcall. Calls FUN_100016b0(this, &arg, 2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100016b0(void);

__declspec(naked) void __cdecl FUN_10004c30(void)
{
    __asm {
        push    2
        lea     eax, [esp + 0x8]
        push    eax
        call    FUN_100016b0
        ret     4
    }
}
