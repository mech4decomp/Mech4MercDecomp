/*
 * FUN_00491150 (118 B) — __cdecl, no params, void return.
 * Initializes 13 sound/audio parameters via FUN_00713cc0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00713cc0(void);

__declspec(naked) void __cdecl FUN_00491150(void)
{
    __asm {
        push    0x0
        push    0x1
        call    FUN_00713cc0
        push    0x1
        push    0xd
        call    FUN_00713cc0
        push    0x0
        push    0xb
        call    FUN_00713cc0
        push    0x1
        push    0x6
        call    FUN_00713cc0
        push    0x3
        push    0x4
        call    FUN_00713cc0
        push    0x1
        push    0x5
        call    FUN_00713cc0
        push    0x0
        push    0xc
        call    FUN_00713cc0
        push    0x0
        push    0x9
        call    FUN_00713cc0
        push    0x0
        push    0xa
        call    FUN_00713cc0
        push    0x2
        push    0xf
        call    FUN_00713cc0
        push    0x3
        push    0x10
        call    FUN_00713cc0
        push    0x0
        push    0x7
        call    FUN_00713cc0
        push    0x0
        push    0x12
        call    FUN_00713cc0
        ret
    }
}
