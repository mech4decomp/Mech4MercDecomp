/*
 * FUN_00534630 (32 B) — 16-byte struct setter (4 dwords from stack args).
 *
 * Copies four dword arguments into the object at offsets 0, 4, 8, 12.
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void FUN_00534630(void)
{
    __asm {
        mov     edx, [esp + 4]
        mov     eax, ecx
        mov     ecx, [esp + 8]
        mov     [eax], ecx
        mov     ecx, [esp + 12]
        mov     [eax + 4], edx
        mov     edx, [esp + 16]
        mov     [eax + 8], ecx
        mov     [eax + 12], edx
        ret     16
    }
}
