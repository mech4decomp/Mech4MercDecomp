/*
 * FUN_00527900 (33 B) — Check global flag, write boolean to output.
 *
 * Reads byte at g_someGlobal->field_15, sets *out = (byte == 0) ? 1 : 0.
 * Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007d2d30;   /* 0x007D2D30 — global flag pointer */

__declspec(naked) void FUN_00527900(void)
{
    __asm {
        mov     ecx, dword ptr [DAT_007d2d30]
        mov     dl, byte ptr [ecx + 0x15]
        xor     eax, eax
        test    dl, dl
        mov     edx, [esp + 4]
        mov     ecx, [edx + 4]
        setz    al
        mov     [ecx], eax
        mov     eax, 1
        ret     8
    }
}
