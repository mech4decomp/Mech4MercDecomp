/*
 * FUN_00482810 (11 B) — MLRAmbientLight vtable init (__fastcall, ECX=this).
 *
 * Sets vtable to 0x76FAF8, then tail-calls FUN_0048FEF0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_0048fef0(void);

__declspec(naked) void __fastcall FUN_00482810(void *this)
{
    __asm {
        mov     dword ptr [ecx], 0x76faf8
        jmp     FUN_0048fef0
    }
}
