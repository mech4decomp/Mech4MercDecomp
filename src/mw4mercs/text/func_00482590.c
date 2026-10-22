/*
 * FUN_00482590 (11 B) — MLRInfiniteLight vtable init (__fastcall, ECX=this).
 *
 * Sets vtable to 0x76FAB4, then tail-calls FUN_0048FEF0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_0048fef0(void);

__declspec(naked) void __fastcall FUN_00482590(void *this)
{
    __asm {
        mov     dword ptr [ecx], 0x76fab4
        jmp     FUN_0048fef0
    }
}
