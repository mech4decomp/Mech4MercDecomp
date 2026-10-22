/*
 * FUN_0052b3a0 (30 B) — IUnknown-style AddRef/Release thunk.
 *
 * Calls FUN_00416C60 (vtable init), then if flag & 1, calls FUN_004084E0 (free).
 * Returns this pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00416c60(void *this);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void FUN_0052b3a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00416c60
        test    byte ptr [esp + 8], 1
        jz      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip_free:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
