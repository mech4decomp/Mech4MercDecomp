/*
 * FUN_004149a0 (31 B) — archive writer flush with stream-arg (variant).
 *
 * Calls FUN_00412780 (__thiscall, ecx = param_1+0xc, arg = [esp+4]) then the
 * writer FUN_00414260 (__fastcall, ecx = *param_1), and clears param_1[0x28].
 *
 * Calling convention: __thiscall (ecx = param_1), 1 stack param, ret 4.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   FUN_00412780 — stream/string helper (__thiscall, ret 4)
 *   FUN_00414260 — archive writer (__fastcall, 0 stack params)
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

extern void __cdecl FUN_00412780(void);    /* FUN_00412780 */
extern void __cdecl FUN_00414260(void);    /* FUN_00414260 */

__declspec(naked) void func_004149a0(void)
{
    __asm {
        mov     eax, [esp+4]        ; eax = arg
        push    esi
        mov     esi, ecx            ; esi = param_1 (this)
        push    eax
        lea     ecx, [esi+0xc]
        call    FUN_00412780        ; FUN_00412780(param_1+0xc, arg)
        mov     ecx, [esi]          ; ecx = *param_1
        call    FUN_00414260        ; writer(*param_1)
        mov     byte ptr [esi+0x28], 0
        pop     esi
        ret     4
    }
}
