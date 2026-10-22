/*
 * FUN_004A3FF0 (11 B) — __fastcall vtable setter + tail call.
 *   Sets *ecx = 0x770318, then jumps to FUN_004A93F0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_004a93f0(void);

__declspec(naked) void __fastcall FUN_004a3ff0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x770318
        jmp     FUN_004a93f0
    }
}
