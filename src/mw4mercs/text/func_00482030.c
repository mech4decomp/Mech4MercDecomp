/*
 * FUN_00482030 (30 B) — Destructor (__thiscall, RET 4).
 *
 * Calls FUN_00482150, then optionally frees this if param & 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00482150(void *this);
extern void __stdcall FUN_004084e0(int ptr);

__declspec(naked) void __fastcall FUN_00482030(void *this, int param)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00482150
        test    byte ptr [esp + 8], 1
        jz      l_return
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_return:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
