/*
 * FUN_004827E0 (41 B) — MLRAmbientLight ctor variant (__thiscall, RET 4).
 *
 * Calls FUN_0048FDD0 with g_ambientlight_singleton (0x007DA6AC) + 1 param,
 * sets vtable to 0x76FAF8, sets field_78 = 0x120. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_0048fdd0(void *this, int param1, int param2);

extern int DAT_007da6ac;

__declspec(naked) void *FUN_004827e0(void *this, int param1)
{
    __asm {
        mov     eax, [esp + 0x04]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [DAT_007da6ac]   ; mov ecx, [0x007da6ac]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_0048fdd0
        mov     dword ptr [esi], 0x76faf8
        mov     dword ptr [esi + 0x78], 0x120
        mov     eax, esi
        pop     esi
        ret     0x04
    }
}
