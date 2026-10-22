/*
 * FUN_004861F0 (60 B) — MLR ctor (__thiscall, RET 8).
 *
 * Calls FUN_00486E50 with param1 and DAT_007DA714,
 * sets field_9C = param2, vtable to 0x76FC00,
 * field_A0 = 0, field_20 = 2. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_00486e50(void *this, int param1, int param2);

extern int DAT_007da714;

__declspec(naked) void *FUN_004861f0(void *this, int param1, int param2)
{
    __asm {
        mov     eax, dword ptr [DAT_007da714]   ; mov eax, [0x007da714]
        push    esi
        mov     esi, ecx
        mov     ecx, [esp + 0x08]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00486e50
        mov     edx, [esp + 0x0c]
        mov     dword ptr [esi + 0x9c], edx
        mov     dword ptr [esi], 0x76fc00
        mov     dword ptr [esi + 0xa0], 0
        mov     dword ptr [esi + 0x20], 2
        mov     eax, esi
        pop     esi
        ret     0x08
    }
}
