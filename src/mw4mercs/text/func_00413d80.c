/*
 * FUN_00413d80 — entry iterator advance (load current entry data).
 *
 * Calls FUN_00413970 (__thiscall, ecx = param_1[7]) to load the current
 * entry's data, then copies entry->field_08 into param_1[6].
 *
 * Calling convention: __fastcall (ecx = param_1), 0 stack params, ret.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   FUN_00413970 — entry_load (__thiscall, 0 stack params)
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

extern void func_00413970(void);    /* FUN_00413970 */

__declspec(naked) void func_00413d80(void)
{
    __asm {
        push    esi
        mov     esi, ecx            ; esi = param_1 (this)
        push    edi
        mov     edi, [esi+0x1c]     ; edi = param_1[7] (current entry)
        mov     ecx, edi
        call    func_00413970       ; entry_load(edi)
        mov     eax, [edi+8]        ; eax = entry->field_08
        pop     edi
        mov     [esi+0x18], eax     ; param_1[6] = entry->field_08
        pop     esi
        ret
    }
}
