/*
 * FUN_00482740 (39 B) — MLRAmbientLight singleton destructor.
 *
 * Loads g_ambientlight_singleton (0x007DA6AC), if non-null calls
 * FUN_00415200 (dtor) then FUN_004084E0 (free), then sets to NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_00415200(void *this);
extern void FUN_004084e0(void *ptr);

extern int DAT_007da6ac;

__declspec(naked) void FUN_00482740(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007da6ac]   ; mov esi, [0x007da6ac]
        test    esi, esi
        jz      l_skip
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip:
        mov     dword ptr [DAT_007da6ac], 0     ; mov dword ptr [0x007da6ac], 0
        pop     esi
        ret
    }
}
