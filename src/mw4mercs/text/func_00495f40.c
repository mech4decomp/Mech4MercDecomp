/*
 * FUN_00495F40 (50 B) — __fastcall (ECX = this).
 * Constructor: calls FUN_004a2430(0x530), sets vtable + defaults.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __fastcall FUN_004a2430(int size);

__declspec(naked) void __fastcall FUN_00495f40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0x530
        call    FUN_004a2430
        mov     eax, 0x40800000
        mov     dword ptr [esi + 0x1a4], eax
        mov     dword ptr [esi + 0x1a8], eax
        mov     dword ptr [esi], 0x00770198
        mov     dword ptr [esi + 0x1ac], 0x3e800000
        mov     eax, esi
        pop     esi
        ret
    }
}
