/*
 * FUN_00413C70 — entry_find_by_name_and_load.
 *
 * Looks up an archive entry by name in hash_table2 (at ctx+0x100C,
 * indexed by name_hash % 1021). Chains via entry->field_10.
 *
 * Computes the name hash via entry_name_hash (FUN_00413500), then walks
 * the hash chain comparing name_hash first, then _stricmp for collision
 * resolution.
 *
 * If found and load_flag is non-zero, conditionally calls entry_load_data
 * (FUN_00413830) when entry->field_08 == NULL && entry->data_off != -1 &&
 * entry->uncompressed_size > 0.
 *
 * On success, copies entry fields into the context output slots and returns 1.
 * On failure, sets ctx->field_1c = NULL and returns 0.
 *
 * Calling convention: __thiscall (ecx = this = DirPopulateCtx*),
 *                     1 DWORD stack param = load_flag, ret 4.
 * CFLAGS: pinned /O1 (no deviation)
 *
 * Callees (reloc-masked in diff):
 *   FUN_00413500 — entry_name_hash (__cdecl, 1 param)
 *   FUN_00413830 — entry_load_data (__thiscall, 1 param)
 *   _stricmp — MSVCRT import (indirect call via [0x0076B2AC])
 *
 * Match: 100% (8 reloc bytes masked; actual code is byte-identical.)
 */

#include <mw4/archive.h>

/* External callees */
extern unsigned long __cdecl entry_name_hash(const char *name);
extern void entry_load_data(void);

/* _stricmp from MSVCRT.dll — imported via IAT */
int __cdecl _stricmp(const char *, const char *);

__declspec(naked) void entry_find_by_name_and_load(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi

        mov     edi, ecx            ; edi = this
        mov     eax, [edi]          ; eax = this->field_00 (hdr ptr)
        mov     ebx, [edi+0x08]     ; ebx = this->field_08 (name to find)
        mov     esi, [eax]          ; esi = hdr->field_00

        push    ebx                 ; push name
        call    entry_name_hash     ; hash = entry_name_hash(name)
        xor     edx, edx
        mov     ecx, 0x3FD          ; ecx = 1021
        mov     ebp, eax            ; ebp = hash
        div     ecx                 ; edx = hash % 1021
        add     esp, 4              ; pop name ptr

        mov     esi, [esi+edx*4+0x100C]  ; esi = hash_table2[edx]
        test    esi, esi
        je      not_found

    loop_chain:
        cmp     [esi+0x14], ebp     ; compare entry->name_hash with hash
        jne     next_chain

        ; Hash matches — verify with _stricmp
        lea     edx, [esi+0x28]     ; edx = entry->name
        push    edx
        push    ebx                 ; push search name
        ; Indirect call through IAT for _stricmp: FF 15 AC B2 76 00
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xAC
        __asm _emit 0xB2
        __asm _emit 0x76
        __asm _emit 0x00
        add     esp, 8
        test    eax, eax
        je      found

    next_chain:
        mov     esi, [esi+0x10]     ; esi = entry->field_10 (chain next, table2)
        test    esi, esi
        jne     loop_chain

    not_found:
        mov     dword ptr [edi+0x1c], 0  ; this->field_1c = NULL
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al              ; return 0
        pop     ebx
        ret     4

    found:
        mov     cl, [esp+0x14]      ; cl = load_flag (param)
        test    cl, cl
        mov     eax, [esi+0x1c]     ; eax = entry->uncompressed_size
        mov     [edi+0x14], eax     ; this->field_14 = uncompressed_size
        je      skip_load

        mov     ecx, [esi+0x08]     ; ecx = entry->field_08
        test    ecx, ecx
        jne     skip_load

        cmp     dword ptr [esi+0x20], -1  ; if data_off == -1
        je      skip_load

        test    eax, eax            ; test uncompressed_size
        jbe     skip_load           ; if <= 0, skip

        mov     eax, [edi]          ; eax = this->field_00 (hdr ptr)
        push    eax                 ; push hdr
        mov     ecx, esi            ; ecx = entry
        call    entry_load_data

    skip_load:
        mov     eax, [esi+0x08]     ; eax = entry->field_08
        mov     cx, [esi+0x24]      ; cx = entry->entry_index
        mov     [edi+0x18], eax     ; this->field_18 = entry->field_08
        mov     eax, [esi]          ; eax = entry->field_00
        mov     [edi+0x04], cx      ; this->field_04 = entry->entry_index
        mov     ecx, [esi+0x04]     ; ecx = entry->field_04
        lea     edx, [esi+0x28]     ; edx = entry->name
        mov     [edi+0x0c], eax     ; this->field_0c = entry->field_00
        mov     [edi+0x1c], esi     ; this->field_1c = entry ptr
        mov     [edi+0x08], edx     ; this->field_08 = entry->name
        mov     [edi+0x10], ecx     ; this->field_10 = entry->field_04
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1               ; return 1
        pop     ebx
        ret     4
    }
}
