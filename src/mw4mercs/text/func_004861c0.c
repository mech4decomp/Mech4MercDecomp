/*
 * FUN_004861C0 (39 B) — MLR singleton cleanup.
 *
 * If DAT_007DA714 is non-null, calls FUN_00415200 (dtor) then
 * FUN_004084E0 (free). Sets DAT_007DA714 = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00415200(void *this);
extern void __stdcall FUN_004084e0(void *ptr);

extern int DAT_007da714;

__declspec(naked) void FUN_004861c0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007da714]   ; mov esi, [0x007da714]
        test    esi, esi
        jz      l_clear
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_clear:
        mov     dword ptr [DAT_007da714], 0     ; mov dword ptr [0x007da714], 0
        pop     esi
        ret
    }
}
