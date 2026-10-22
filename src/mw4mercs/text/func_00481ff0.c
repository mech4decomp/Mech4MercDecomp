/*
 * FUN_00481FF0 (56 B) — Constructor (__thiscall, RET 4).
 *
 * Calls FUN_0048FCA0(param), zeroes fields at +0x80 and +0x84,
 * sets vtable to 0x76FA18, sets +0x78 = 0x120, +0x88 = 100.0f.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_0048fca0(void *this, int param);

__declspec(naked) void * __fastcall FUN_00481ff0(void *this, int param)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_0048fca0
        xor     eax, eax
        mov     dword ptr [esi + 0x80], eax
        mov     dword ptr [esi + 0x84], eax
        mov     dword ptr [esi], 0x76fa18
        mov     dword ptr [esi + 0x78], 0x120
        mov     dword ptr [esi + 0x88], 0x42c80000    ; 100.0f
        mov     eax, esi
        pop     esi
        ret     4
    }
}
