/*
 * FUN_004AC970 (31 B) — __thiscall setter.
 *   Sets a float field at computed offset to 1.0f.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_004ac970(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        mov     edx, dword ptr [eax + 0x270]
        imul    edx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx + 0xa8]
        mov     dword ptr [edx + eax + 0x1c], 0x3F800000
        ret     4
    }
}
