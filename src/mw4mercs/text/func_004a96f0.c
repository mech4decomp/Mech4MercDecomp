/*
 * FUN_004A96F0 (39 B) — __cdecl MLR sub-object registry teardown.
 *   If the global registry slot 0x007DA998 is non-null, calls
 *   FUN_00415200 (destructor) then frees it via FUN_004084E0, and clears
 *   the slot.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void *ptr);

extern unsigned long g_007da998;

__declspec(naked) void FUN_004a96f0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007da998]
        test    esi, esi
        jz      l_clear
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_clear:
        mov     dword ptr [g_007da998], 0
        pop     esi
        ret
    }
}
