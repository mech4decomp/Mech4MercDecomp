/*
 * FUN_00482560 (39 B) — MLRInfiniteLight ctor variant (__thiscall, RET 8).
 *
 * Calls FUN_0048FDD0 with 2 params, sets vtable to 0x76FAB4,
 * sets field_78 = 0x120. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_0048fdd0(void *this, int param1, int param2);

__declspec(naked) void *FUN_00482560(void *this, int param1, int param2)
{
    __asm {
        mov     eax, [esp + 0x08]
        push    esi
        mov     esi, ecx
        mov     ecx, [esp + 0x08]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_0048fdd0
        mov     dword ptr [esi], 0x76fab4
        mov     dword ptr [esi + 0x78], 0x120
        mov     eax, esi
        pop     esi
        ret     0x08
    }
}
