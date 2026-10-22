/*
 * FUN_00414990 (16 B) — archive writer flush (variant).
 *
 * Calls the writer FUN_004143d0 (__fastcall, ecx = *param_1) and clears
 * param_1[0x28].
 *
 * Calling convention: __fastcall (ecx = param_1), 0 stack params, ret.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   FUN_004143d0 — archive writer (__fastcall, 0 stack params)
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

extern void __cdecl FUN_004143d0(void);    /* FUN_004143d0 */

__declspec(naked) void func_00414990(void)
{
    __asm {
        push    esi
        mov     esi, ecx            ; esi = param_1 (this)
        mov     ecx, [esi]          ; ecx = *param_1
        call    FUN_004143d0        ; writer(*param_1)
        mov     byte ptr [esi+0x28], 0
        pop     esi
        ret
    }
}
