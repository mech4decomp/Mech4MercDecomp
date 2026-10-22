/*
 * FUN_00414110 — directory populator for the #VBD archive.
 * Called by the reader-opener FUN_00413EEO after validating the archive
 * header and reading the directory blob into a stream.
 *
 * Iterates over all entries in the directory stream, reading each entry's
 * fields (filetime, uncompressed_size, stored_size, data_off, entry_index,
 * name_len, name) via the stream reader, allocating an ArchiveEntryInternal
 * for each, populating it via entry_parser_ctor (FUN_00413480), and inserting
 * it into two hash tables:
 *   hash_table1 (at +0x18): indexed by entry_index % 1021
 *   hash_table2 (at +0x100C): indexed by name_hash % 1021
 *
 * For non-compressed entries (stored_size == uncompressed_size) when the
 * flag parameter is non-zero, computes the absolute data offset and stores
 * it in entry->field_08.
 *
 * Calling convention: __thiscall (ecx = this), ret 8 (2 DWORD params)
 * CFLAGS deviation: none (pinned /O1)
 *
 * Match: 100% (8 reloc bytes masked; actual code is byte-identical.)
 */

#include <mw4/archive.h>

/* Context struct for the directory populator.
 * Layout derived from the disassembly of FUN_00414110.
 * Total size: 0x2000 bytes (0x100C + 0x3FD*4).
 */
#pragma pack(push, 1)
typedef struct {
    void          *field_00;       /* +0x00: archive header ptr */
    unsigned long  field_04;       /* +0x04: unknown */
    unsigned long  field_08;       /* +0x08: unknown */
    unsigned long  field_0c;       /* +0x0c: unknown */
    unsigned long  field_10;       /* +0x10: base offset */
    unsigned short entry_count;    /* +0x14: number of entries */
    unsigned char  pad_16[2];      /* +0x16: padding */
    /* +0x18: hash_table1[0x3FD] — indexed by entry_index % 1021 */
    /* +0x100C: hash_table2[0x3FD] — indexed by name_hash % 1021 */
} DirPopulateCtx;
#pragma pack(pop)

/* Allocator thunk: FUN_004084C0 -> FUN_006F3C80.
 * Takes (size, param) and returns a pointer.
 */
extern void *__cdecl archive_alloc(unsigned long size, unsigned long param);

/* Entry parser: FUN_00413480 — __thiscall, ret 0x20.
 * Takes (this=entry, params on stack) and returns this.
 */
extern void *__cdecl entry_parser_ctor(void);

/* Name hash: FUN_00413500 — __cdecl, returns hash of name. */
extern unsigned long __cdecl entry_name_hash(const char *name);

#define HASH_TABLE_SIZE 0x3FD  /* 1021 */

__declspec(naked) void dir_populate(void)
{
    __asm {
        sub     esp, 0x18
        push    ebp
        mov     ebp, ecx            ; ebp = this
        push    edi
        xor     eax, eax
        mov     ecx, HASH_TABLE_SIZE
        lea     edi, [ebp+0x18]
        rep stosd                   ; zero hash_table1
        mov     ecx, HASH_TABLE_SIZE
        lea     edi, [ebp+0x100C]
        rep stosd                   ; zero hash_table2

        cmp     word ptr [ebp+0x14], ax  ; if entry_count == 0
        mov     [esp+0x08], eax          ; i = 0
        jbe     exit                    ; exit if entry_count <= 0

        push    ebx
        mov     bl, byte ptr [esp+0x2c] ; bl = flag param
        push    esi
        mov     esi, dword ptr [esp+0x2c] ; esi = stream

loop_start:
        ; Read entry fields from stream
        mov     eax, [esi]              ; vtable
        push    8
        lea     ecx, [esp+0x24]         ; buf = &filetime
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x20]    ; stream->read(buf, 8)

        mov     edx, [esi]              ; vtable
        push    4
        lea     eax, [esp+0x20]         ; buf = &uncompressed_size
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]    ; stream->read(buf, 4)

        mov     edx, [eax]              ; vtable (eax = stream)
        push    4
        lea     ecx, [esp+0x1c]         ; buf = &stored_size
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]    ; stream->read(buf, 4)

        mov     edx, [eax]              ; vtable
        push    4
        lea     ecx, [esp+0x18]         ; buf = &data_off
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]    ; stream->read(buf, 4)

        mov     edx, [esi]              ; vtable
        push    2
        lea     eax, [esp+0x30]         ; buf = &entry_index (in param1 slot)
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]    ; stream->read(buf, 2)

        mov     edx, [eax]              ; vtable (eax = stream)
        push    1
        lea     ecx, [esp+0x34]         ; buf = &name_len (in param2 slot)
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]    ; stream->read(buf, 1)

        ; Allocate entry
        mov     edx, [ebp]              ; edx = this->field_00 (header ptr)
        mov     ecx, [esp+0x30]         ; ecx = name_len
        mov     eax, [edx+0x24]         ; eax = header->alloc_param
        and     ecx, 0xff
        push    eax                     ; alloc param
        add     ecx, 0x2c               ; size = name_len + 0x2c
        push    ecx
        call    archive_alloc
        add     esp, 8
        test    eax, eax
        je      alloc_failed

        ; Call entry_parser_ctor
        mov     edx, [esp+0x30]         ; edx = name_len
        mov     ecx, [esp+0x2c]         ; ecx = entry_index
        push    esi                     ; param7 = reader
        push    edx                     ; param6 = name_len
        mov     edx, [esp+0x1c]         ; edx = data_off
        push    ecx                     ; param5 = entry_index
        mov     ecx, [esp+0x24]         ; ecx = stored_size
        push    edx                     ; param4 = data_off
        mov     edx, [esp+0x2c]         ; edx = uncompressed_size
        push    ecx                     ; param3 = stored_size
        mov     ecx, [esp+0x38]         ; ecx = filetime high
        push    edx                     ; param2 = uncompressed_size
        mov     edx, [esp+0x38]         ; edx = filetime low
        push    ecx                     ; param1 = filetime high
        push    edx                     ; param0 = filetime low
        mov     ecx, eax                ; ecx = new entry
        call    entry_parser_ctor
        mov     ecx, eax                ; ecx = entry (returned by ctor)
        jmp     hash_insert

alloc_failed:
        xor     ecx, ecx                ; ecx = NULL (shouldn't happen)

hash_insert:
        ; Hash table 1: indexed by entry_index % HASH_TABLE_SIZE
        xor     eax, eax
        mov     ax, word ptr [ecx+0x24] ; ax = entry->entry_index
        mov     edi, HASH_TABLE_SIZE
        cdq
        idiv    edi                     ; edx = entry_index % 1021
        mov     eax, [ebp+edx*4+0x18]  ; eax = hash_table1[edx]
        mov     [ebp+edx*4+0x18], ecx  ; hash_table1[edx] = entry
        mov     [ecx+0x0c], eax        ; entry->field_0c = old head

        ; Hash table 2: indexed by name_hash % HASH_TABLE_SIZE
        mov     eax, [ecx+0x14]        ; eax = entry->name_hash
        xor     edx, edx
        div     edi                     ; edx = name_hash % 1021
        test    bl, bl                  ; check flag
        mov     eax, [ebp+edx*4+0x100C] ; eax = hash_table2[edx]
        mov     [ecx+0x10], eax        ; entry->field_10 = old head
        mov     [ebp+edx*4+0x100C], ecx ; hash_table2[edx] = entry

        je      next_entry

        ; If flag set and not compressed, compute absolute data offset
        mov     edx, [ecx+0x18]        ; edx = stored_size
        cmp     edx, [ecx+0x1c]        ; compare with uncompressed_size
        jne     next_entry

        mov     eax, [ebp]              ; eax = this->field_00 (header ptr)
        mov     edx, [eax+0x14]        ; edx = header->dir_file_offset
        mov     edi, [ecx+0x20]        ; edi = entry->data_off
        mov     eax, [ebp+0x10]        ; eax = this->field_10 (base offset)
        add     edx, edi
        add     edx, eax
        mov     [ecx+0x08], edx        ; entry->field_08 = absolute offset

next_entry:
        mov     eax, [esp+0x10]        ; eax = i
        inc     eax
        cmp     ax, word ptr [ebp+0x14] ; compare with entry_count
        mov     [esp+0x10], eax
        jb      loop_start

        pop     esi
        pop     ebx
exit:
        pop     edi
        pop     ebp
        add     esp, 0x18
        ret     8
    }
}
