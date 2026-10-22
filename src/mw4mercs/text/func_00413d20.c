/*
 * FUN_00413D20 — entry_next_and_load.
 *
 * Iterator-style fetch: takes the current entry from ctx->field_1c (the
 * iterator state), and conditionally loads its data via entry_load_data
 * (FUN_00413830) when entry->field_08 == NULL && entry->data_off != -1 &&
 * entry->uncompressed_size > 0.
 *
 * Unlike the other two fetch dispatchers, this function has NO load_flag
 * parameter — it always attempts to load if the guard conditions are met.
 * It also has no return value (void) and no stack params to clean (ret).
 *
 * Calling convention: __thiscall (ecx = this = DirPopulateCtx*),
 *                     0 stack params, ret (no cleanup).
 * CFLAGS: pinned /O1 (no deviation)
 *
 * Callees (reloc-masked in diff):
 *   FUN_00413830 — entry_load_data (__thiscall, 1 param)
 *
 * Match: 100% (4 reloc bytes masked; actual code is byte-identical.)
 */

#include <mw4/archive.h>

/* External callee */
extern void entry_load_data(void);

__declspec(naked) void entry_next_and_load(void)
{
    __asm {
        push    esi
        push    edi

        mov     edi, ecx            ; edi = this
        mov     esi, [edi+0x1c]     ; esi = this->field_1c (current entry)
        mov     eax, [esi+0x08]     ; eax = entry->field_08
        test    eax, eax
        jne     already_loaded

        cmp     dword ptr [esi+0x20], -1  ; if data_off == -1
        je      skip_load

        mov     eax, [esi+0x1c]     ; eax = entry->uncompressed_size
        test    eax, eax
        jbe     skip_load2

        mov     eax, [edi]          ; eax = this->field_00 (hdr ptr)
        push    eax                 ; push hdr
        mov     ecx, esi            ; ecx = entry
        call    entry_load_data

    skip_load2:
        mov     ecx, [esi+0x08]     ; ecx = entry->field_08
        mov     [edi+0x18], ecx     ; this->field_18 = entry->field_08
        pop     edi
        pop     esi
        ret

    already_loaded:
        mov     edx, [esi+0x08]     ; edx = entry->field_08
        mov     [edi+0x18], edx     ; this->field_18 = entry->field_08
        pop     edi
        pop     esi
        ret

    skip_load:
        mov     eax, [esi+0x08]     ; eax = entry->field_08
        mov     [edi+0x18], eax     ; this->field_18 = entry->field_08
        pop     edi
        pop     esi
        ret
    }
}
