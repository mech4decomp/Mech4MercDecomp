/*
 * FUN_1003efb5 (23 B) — __stdcall.
 * Calls FUN_10038f20(0xa), FUN_10042ab6(0x16), then __exit(3) via
 * FUN_1003838d (does not return).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10038f20(void);
extern void __cdecl FUN_10042ab6(void);
extern void __cdecl FUN_1003838d(void);

__declspec(naked) void __stdcall FUN_1003efb5(void)
{
    __asm {
        push    0xa
        call    FUN_10038f20
        push    0x16
        call    FUN_10042ab6
        pop     ecx
        pop     ecx
        push    0x3
        call    FUN_1003838d
    }
}
