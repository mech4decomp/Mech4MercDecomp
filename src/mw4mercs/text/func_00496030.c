/*
 * FUN_00496030 (37 B) — __fastcall (ECX = this).
 * Constructor helper: calls FUN_004a2640(), sets defaults at +0x1a4/+0x1a8/+0x1ac.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __fastcall FUN_004a2640(void);

__declspec(naked) void __fastcall FUN_00496030(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004a2640
        mov     eax, 0x40800000
        mov     dword ptr [esi + 0x1a4], eax
        mov     dword ptr [esi + 0x1a8], eax
        mov     dword ptr [esi + 0x1ac], 0x3e800000
        pop     esi
        ret
    }
}
