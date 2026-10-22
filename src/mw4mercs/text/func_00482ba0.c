/*
 * FUN_00482BA0 (11 B) — MLR vtable init (__fastcall, ECX=this).
 *
 * Sets vtable to 0x76FB3C, then tail-calls FUN_00486F40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00486f40(void);

__declspec(naked) void __fastcall FUN_00482ba0(void *this)
{
    __asm {
        mov     dword ptr [ecx], 0x76fb3c
        jmp     FUN_00486f40
    }
}
