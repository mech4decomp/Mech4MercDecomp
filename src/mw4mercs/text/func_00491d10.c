/*
 * FUN_00491d10 (34 B) — __fastcall (ECX=ptr).
 * Disables flag bit 2 and calls FUN_00717ac0 if set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00717ac0(int);

__declspec(naked) void __fastcall FUN_00491d10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x18]
        test    al, 0x2
        jz      l_done
        and     eax, 0xfffffffd
        mov     dword ptr [esi + 0x18], eax
        mov     eax, dword ptr [esi + 0x1c]
        push    eax
        call    FUN_00717ac0
        mov     dword ptr [esi + 0x20], 0x0
    l_done:
        pop     esi
        ret
    }
}
