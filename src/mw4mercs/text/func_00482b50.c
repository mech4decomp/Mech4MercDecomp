/*
 * FUN_00482B50 (44 B) — MLR ctor (__thiscall, RET 4).
 *
 * Calls FUN_00486E50 with param1 and g_some_singleton (0x007DA6D0),
 * sets field_9C = 0, field_20 = 0, vtable to 0x76FB3C. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_00486e50(void *this, int param1, int param2);

extern int DAT_007da6d0;

__declspec(naked) void *FUN_00482b50(void *this, int param1)
{
    __asm {
        mov     eax, dword ptr [DAT_007da6d0]   ; mov eax, [0x007da6d0]
        push    esi
        mov     esi, ecx
        mov     ecx, [esp + 0x08]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00486e50
        xor     eax, eax
        mov     dword ptr [esi + 0x9c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi], 0x76fb3c
        mov     eax, esi
        pop     esi
        ret     0x04
    }
}
