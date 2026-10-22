/*
 * FUN_00482150 (11 B) — Thunk: set vtable + tail-call to FUN_0048FEF0.
 *
 * __fastcall (ECX = this). Sets vtable at [this] to 0x76FA18,
 * then jumps to FUN_0048FEF0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_0048fef0(void *this);

__declspec(naked) void __fastcall FUN_00482150(void *this)
{
    __asm {
        mov     dword ptr [ecx], 0x76fa18
        jmp     FUN_0048fef0
    }
}
