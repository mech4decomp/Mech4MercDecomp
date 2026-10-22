/*
 * FUN_005DBB00 (8 B) - Set byte flag at this+0x178 to 1.
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_005dbb00(void *this)
{
    __asm {
        mov     byte ptr [ecx + 0x178], 1
        ret
    }
}
