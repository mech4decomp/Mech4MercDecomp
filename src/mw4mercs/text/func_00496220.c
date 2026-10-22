/*
 * FUN_00496220 (11 B) — __fastcall (ECX = this).
 * Sets vtable, then tail-calls FUN_004a2aa0.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __fastcall FUN_004a2aa0(void);

__declspec(naked) void __fastcall FUN_00496220(void)
{
    __asm {
        mov     dword ptr [ecx], 0x007701ac
        jmp     FUN_004a2aa0
    }
}
