/*
 * FUN_00482530 (44 B) — MLRInfiniteLight ctor (__thiscall, RET 0xC).
 *
 * Calls FUN_0048FD20 with 3 params, sets vtable to 0x76FAB4,
 * sets field_78 = 0x120. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_0048fd20(void *this, int param1, int param2, int param3);

__declspec(naked) void *FUN_00482530(void *this, int param1, int param2, int param3)
{
    __asm {
        mov     eax, [esp + 0x0c]
        mov     edx, [esp + 0x04]
        push    esi
        mov     esi, ecx
        mov     ecx, [esp + 0x0c]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_0048fd20
        mov     dword ptr [esi], 0x76fab4
        mov     dword ptr [esi + 0x78], 0x120
        mov     eax, esi
        pop     esi
        ret     0x0c
    }
}
