/*
 * FUN_00414970 — archive writer flush-on-demand.
 *
 * If param_1[0x28] is non-zero, invokes the writer FUN_00414260 (__fastcall,
 * ecx = *param_1) and clears param_1[0x28].
 *
 * Calling convention: __fastcall (ecx = param_1), 0 stack params, ret.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   FUN_00414260 — archive writer (__fastcall, 0 stack params)
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

extern void func_00414260(void);    /* FUN_00414260 */

__declspec(naked) void func_00414970(void)
{
    __asm {
        push    esi
        mov     esi, ecx            ; esi = param_1 (this)
        mov     al, [esi+0x28]      ; al = *(char*)(param_1+0x28)
        test    al, al
        jz      done
        mov     ecx, [esi]          ; ecx = *param_1
        call    func_00414260       ; writer(*param_1)
        mov     byte ptr [esi+0x28], 0
    done:
        pop     esi
        ret
    }
}
