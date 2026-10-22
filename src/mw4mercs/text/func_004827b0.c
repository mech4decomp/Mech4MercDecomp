/*
 * FUN_004827B0 (46 B) — MLRAmbientLight ctor (__thiscall, RET 8).
 *
 * Calls FUN_0048FD20 with g_ambientlight_singleton (0x007DA6AC) + 2 params,
 * sets vtable to 0x76FAF8, sets field_78 = 0x120. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_0048fd20(void *this, int param1, int param2, int param3);

extern int DAT_007da6ac;

__declspec(naked) void *FUN_004827b0(void *this, int param1, int param2)
{
    __asm {
        mov     eax, [esp + 0x08]
        mov     edx, dword ptr [DAT_007da6ac]   ; mov edx, [0x007da6ac]
        push    esi
        mov     esi, ecx
        mov     ecx, [esp + 0x08]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_0048fd20
        mov     dword ptr [esi], 0x76faf8
        mov     dword ptr [esi + 0x78], 0x120
        mov     eax, esi
        pop     esi
        ret     0x08
    }
}
