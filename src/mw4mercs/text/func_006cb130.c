/*
 * FUN_006CB130 — scalar deleting destructor.
 *   Calls FUN_006CB150() (vtable set + tail call).
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

/* FUN_006CB150 — vtable setter: __fastcall (ECX = this). */
extern void __fastcall texture_vtable_setter_79e29c(void);

/* FUN_004084E0 — gos_Free wrapper: __cdecl, RET 4. */
extern void __cdecl gos_free_wrapper(void *ptr);

__declspec(naked) int __stdcall func_006cb130(int flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    texture_vtable_setter_79e29c
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
