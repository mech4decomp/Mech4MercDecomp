/*
 * FUN_004D9030 (30 B) — Scalar deleting destructor (__thiscall, RET 4).
 *
 * Calls FUN_00416C60 (dtor), then optionally frees via FUN_004084E0
 * if param_2 & 1. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00416c60(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void *__fastcall FUN_004d9030(void *this, int param2)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00416c60
        test    byte ptr [esp + 0x08], 1
        jz      l_done
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
