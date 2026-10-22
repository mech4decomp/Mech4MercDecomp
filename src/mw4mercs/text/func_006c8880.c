/*
 * FUN_006C8880 — scalar deleting destructor.
 *   Calls FUN_006C8A20() (texture name init helper).
 *   If (flags & 1), frees this via FUN_004084E0.
 *   Returns this.
 *
 * __thiscall (ECX = this), RET 0x4.
 *   [ESP+4] = flags
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

/* FUN_006C8A20 — texture name init helper: __fastcall (ECX = this). */
extern void __fastcall texture_name_init_helper(void);

/* FUN_004084E0 — gos_Free wrapper: __cdecl, RET 4. */
extern void __cdecl gos_free_wrapper(void *ptr);

__declspec(naked) int __stdcall func_006c8880(int flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    texture_name_init_helper
        test    byte ptr [esp + 8], 1
        jz      L_done
        push    esi
        call    gos_free_wrapper
        add     esp, 4
    L_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
