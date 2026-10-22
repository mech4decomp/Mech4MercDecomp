/*
 * FUN_00525c40 (43 B) — Read field at offset 0x40EB4, decrement or set 5.
 *
 * If this->field_40EB4 == -1, sets *out = 5.
 * Otherwise sets *out = this->field_40EB4 - 1.
 * Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void FUN_00525c40(void)
{
    __asm {
        mov     eax, [esp + 4]
        mov     edx, [eax + 4]
        mov     eax, [ecx + 0x040EB4]
        cmp     eax, -1
        jnz     l_dec
        mov     dword ptr [edx], 5
        mov     eax, 1
        ret     8
    l_dec:
        dec     eax
        mov     [edx], eax
        mov     eax, 1
        ret     8
    }
}
