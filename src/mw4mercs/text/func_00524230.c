/*
 * FUN_00524230 (37 B) — Check this->field_40EE8, write boolean.
 *
 * Reads this->field_40EE8, if non-zero sets *out = 1, else *out = 0.
 * __fastcall (ECX = this).
 * Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_00524230(void)
{
    __asm {
        mov     eax, [esp + 4]
        mov     edx, [ecx + 0x040EE8]
        test    edx, edx
        mov     eax, [eax + 4]
        mov     dword ptr [eax], 0
        jz      l_done
        mov     dword ptr [eax], 1
    l_done:
        mov     eax, 1
        ret     8
    }
}
