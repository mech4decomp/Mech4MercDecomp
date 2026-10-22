/*
 * FUN_00495F80 (11 B) — __fastcall (ECX = this).
 * Sets vtable, then tail-calls FUN_004a24d0.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __fastcall FUN_004a24d0(void);

__declspec(naked) void __fastcall FUN_00495f80(void)
{
    __asm {
        mov     dword ptr [ecx], 0x00770198
        jmp     FUN_004a24d0
    }
}
