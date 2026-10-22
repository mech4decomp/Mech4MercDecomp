/*
 * FUN_00414590 — archive_free_all_entries.
 *
 * Walks hash_table1 (at ctx+0x18, 1021 buckets) and for each entry in the
 * chain, frees the entry's data buffer (field_08) if the loaded flag
 * (field_26) is set and the buffer is non-null, then frees the entry itself.
 * Only one hash table is walked (entries are linked in both tables, so one
 * walk frees all).
 *
 * Calling convention: __thiscall (ecx = this = DirPopulateCtx*), ret 0.
 * CFLAGS: pinned /O1 (no deviation)
 *
 * Callees (all reloc-masked in diff):
 *   FUN_004084E0 — archive_free (__cdecl, 1 param)
 *
 * Match: 100% (8 reloc bytes masked; actual code is byte-identical.)
 */

#include <mw4/archive.h>

/* External callee: archive_free (FUN_004084E0) — __cdecl, 1 param. */
extern void __cdecl archive_free(void *p);

__declspec(naked) void archive_free_all_entries(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi

        lea     ebx, [ecx + 0x18]       ; ebx = &hash_table1[0]
        mov     ebp, HASH_TABLE_SIZE    ; ebp = 1021 (bucket count)

    outer_loop:
        mov     esi, [ebx]              ; esi = hash_table1[bucket]
        test    esi, esi
        je      next_bucket             ; if empty, skip

    inner_loop:
        test    esi, esi                ; loop condition (redundant on first iter)
        mov     edi, [esi + 0x0C]       ; edi = entry->field_0c (chain next)
        je      next_entry_check        ; if entry is NULL, exit loop (never taken here)

        mov     al, [esi + 0x26]        ; al = entry->field_26 (loaded flag)
        test    al, al
        je      free_entry              ; if not loaded, skip data buffer free

        mov     eax, [esi + 8]          ; eax = entry->field_08 (data buffer)
        test    eax, eax
        je      free_entry              ; if NULL, skip

        push    eax
        call    archive_free            ; free data buffer
        add     esp, 4

    free_entry:
        push    esi
        call    archive_free            ; free entry itself
        add     esp, 4

    next_entry_check:
        test    edi, edi
        mov     esi, edi
        jne     inner_loop              ; continue chain

    next_bucket:
        add     ebx, 4
        dec     ebp
        jne     outer_loop

        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
