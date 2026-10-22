/*
 * FUN_00527970 (37 B) — Check global field_2C against -1, write boolean.
 *
 * Reads g_someGlobal->field_2C, compares to -1, stores boolean to *out.
 * Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007d2d30;   /* 0x007D2D30 — global flag pointer */

__declspec(naked) void FUN_00527970(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007d2d30]
        mov     ecx, [eax + 0x2C]
        mov     edx, [esp + 4]
        mov     eax, [edx + 4]
        cmp     ecx, -1
        setnz   cl
        and     ecx, 0xFF
        mov     [eax], ecx
        mov     eax, 1
        ret     8
    }
}
