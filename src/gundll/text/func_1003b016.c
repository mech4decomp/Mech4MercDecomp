/*
 * FUN_1003b016 (18 B) - __fastcall.
 * Calls FUN_100418e4(0x10000, 0x30000), then pops both args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100418e4(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1003b016(void)
{
    __asm {
        push    0x30000
        push    0x10000
        call    FUN_100418e4
        pop     ecx
        pop     ecx
        ret
    }
}
