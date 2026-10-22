/*
 * FUN_004819D0 (34 B) — Constructor (__fastcall, ECX = this).
 *
 * Calls FUN_00481FF0 with DAT_007da6a0, sets vtable to 0x76F9C8,
 * zeroes field at +0x8C, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_00481ff0(void *this, int param);

extern int DAT_007da6a0;   /* g_pointlight_singleton */

__declspec(naked) void * __fastcall FUN_004819d0(void *this)
{
    __asm {
        mov     eax, dword ptr [DAT_007da6a0]   ; mov eax, [0x007da6a0]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00481ff0
        mov     dword ptr [esi], 0x76f9c8
        mov     dword ptr [esi + 0x8c], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
