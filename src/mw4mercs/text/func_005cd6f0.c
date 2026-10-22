/*
 * FUN_005CD6F0 (21 B) — __fastcall (ECX = this).
 * Returns 1 if this[0x204] == 0x3f800000 (1.0f), else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) int __fastcall FUN_005cd6f0(void *this)
{
    __asm {
        cmp     dword ptr [ecx + 0x204], 0x3f800000
        jnz     l_zero
        mov     eax, 0x1
        ret
    l_zero:
        xor     eax, eax
        ret
    }
}
