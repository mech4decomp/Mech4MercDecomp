/*
 * FUN_00484720 (54 B) — MLR ctor (__thiscall, RET 8).
 *
 * Calls FUN_00486E50 with param2 and DAT_007DA6F0,
 * sets field_A0 = 0, field_20 = 0, vtable to 0x76FB7C,
 * sets field_9C = param1. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_00486e50(void *this, int param1, int param2);

extern int DAT_007da6f0;

__declspec(naked) void *FUN_00484720(void *this, int param1, int param2)
{
    __asm {
        mov     eax, dword ptr [DAT_007da6f0]   ; mov eax, [0x007da6f0]
        push    esi
        mov     esi, ecx
        mov     ecx, [esp + 0x0c]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00486e50
        mov     edx, [esp + 0x08]
        xor     eax, eax
        mov     dword ptr [esi + 0xa0], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi], 0x76fb7c
        mov     dword ptr [esi + 0x9c], edx
        mov     eax, esi
        pop     esi
        ret     0x08
    }
}
