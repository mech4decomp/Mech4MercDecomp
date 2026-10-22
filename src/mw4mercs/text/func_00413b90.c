/*
 * FUN_00413b90 — directory-entry removal + free for the #VBD archive.
 *
 * Removes the current entry (param_1[7]) from the hash chains via
 * FUN_00413990, frees it (and its name buffer) via archive_free
 * (FUN_004084E0), then clears param_1[7] to NULL.
 *
 * Calling convention: __fastcall (ecx = param_1), 0 stack params, ret.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   FUN_00413990 — entry_remove (__thiscall, 1 stack param)
 *   FUN_004084E0 — archive_free (__cdecl, 1 param)
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

extern void func_00413990(void);        /* FUN_00413990 */
extern void __cdecl archive_free(void); /* FUN_004084E0 */

__declspec(naked) void func_00413b90(void)
{
    __asm {
        push    esi
        mov     esi, ecx            ; esi = param_1 (this)
        mov     eax, [esi]          ; eax = *param_1
        mov     ecx, [esi+0x1c]     ; ecx = param_1[7] (current entry)
        push    edi
        push    esi                 ; stack arg = param_1
        mov     byte ptr [eax+0x28], 1
        call    func_00413990       ; entry_remove(param_1[7], param_1)
        mov     edi, [esi+0x1c]     ; edi = param_1[7] (iVar1)
        test    edi, edi
        jz      free_done
        mov     al, [edi+0x26]      ; al = *(char*)(iVar1+0x26)
        test    al, al
        jz      free_self
        mov     eax, [edi+8]        ; eax = *(int*)(iVar1+8)
        test    eax, eax
        jz      free_self
        push    eax
        call    archive_free        ; archive_free(*(int*)(iVar1+8))
        add     esp, 4
    free_self:
        push    edi
        call    archive_free        ; archive_free(iVar1)
        add     esp, 4
    free_done:
        pop     edi
        mov     dword ptr [esi+0x1c], 0  ; param_1[7] = 0
        pop     esi
        ret
    }
}
