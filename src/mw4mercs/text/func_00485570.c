/*
 * FUN_00485570 (11 B) — MLR vtable init (__fastcall, ECX=this).
 *
 * Sets vtable to 0x76FBC0, then tail-calls FUN_00486F40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00486f40(void);

__declspec(naked) void __fastcall FUN_00485570(void *this)
{
    __asm {
        mov     dword ptr [ecx], 0x76fbc0
        jmp     FUN_00486f40
    }
}
