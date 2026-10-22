/*
 * FUN_005d7220 (76 B) — registers five mission-name strings via
 * FUN_00412570 (__thiscall, ECX = this). No return value.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_00412570(void *);

__declspec(naked) void __fastcall FUN_005d7220(int param1)
{
    __asm {
        push    0x788200
        mov     ecx, 0x7f23e0
        call    FUN_00412570
        push    0x7881e8
        mov     ecx, 0x7f23e4
        call    FUN_00412570
        push    0x7881d4
        mov     ecx, 0x7f23e8
        call    FUN_00412570
        push    0x7881bc
        mov     ecx, 0x7f23ec
        call    FUN_00412570
        push    0x7881a4
        mov     ecx, 0x7f23f0
        call    FUN_00412570
        ret
    }
}
