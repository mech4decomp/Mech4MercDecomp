/*
 * FUN_004DD770 (38 B) — Constructor.
 *
 * Calls FUN_00415180 with global value at 0x007DC6AC, zeroes
 * fields 0x08, 0x0C, 0x10, 0x14, sets vtable to 0x007738AC.
 *
 * __thiscall (ECX = this), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_00415180(int param);
extern int DAT_007DC6AC;

__declspec(naked) void * __stdcall FUN_004dd770(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007DC6AC]    ; mov eax, [0x007DC6AC]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     eax, eax
        mov     [esi + 0x10], eax
        mov     [esi + 0x08], eax
        mov     [esi + 0x0C], eax
        mov     [esi + 0x14], eax
        mov     dword ptr [esi], 0x007738AC
        mov     eax, esi
        pop     esi
        ret
    }
}
