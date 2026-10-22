/*
 * FUN_004AA470 (11 B) — __fastcall vtable setter + tail call.
 *   Sets *ecx = 0x770464, then jumps to FUN_004AB750.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_004ab750(void);

__declspec(naked) void __fastcall FUN_004aa470(void)
{
    __asm {
        mov     dword ptr [ecx], 0x770464
        jmp     FUN_004ab750
    }
}
