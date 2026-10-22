/*
 * FUN_00413EE0 — reader-opener for the #VBD archive.
 *
 * Validates the archive header (sig == "#VBD", version <= 4), reads the
 * directory blob, initializes a stream reader over it, and calls the
 * directory populator (FUN_00414110) to build the entry hash tables.
 *
 * If validation fails or the archive has fewer entries than requested,
 * creates an empty archive context (zeroed hash tables, default sig/version).
 *
 * Calling convention: __thiscall (ecx = this), ret 0x0C (3 DWORD params)
 * CFLAGS: pinned /O1 (no deviation)
 *
 * Callees (all reloc-masked in diff):
 *   FUN_006FC600 — file read helper (__cdecl, 3 params)
 *   FUN_006FC640 — file seek helper (__cdecl, 3 params)
 *   FUN_006FC580 — file close helper (__cdecl, 1 param)
 *   FUN_006FAB90 — error message display (__cdecl, 1 param)
 *   FUN_004084C0 — archive_alloc (__cdecl, 2 params)
 *   FUN_004084E0 — archive_free (__cdecl, 1 param)
 *   FUN_0041E690 — stream reader initializer (__thiscall, 3 params)
 *   FUN_00414110 — dir_populate (__thiscall, 2 params) [ALREADY MATCHED]
 *   FUN_0041E710 — stream base cleanup (__thiscall, 0 params)
 */

#include <mw4/archive.h>

/* External callees */
extern void __cdecl file_read(void *handle, void *buf, unsigned int len);
extern void __cdecl file_seek(void *handle, int mode, int origin);
extern void __cdecl file_close(void *handle);
extern int  __cdecl show_error(const char *msg);
extern void *__cdecl archive_alloc(unsigned long size, unsigned long param);
extern void __cdecl archive_free(void *p);
extern void __cdecl stream_init(void *buf, unsigned long size, int zero);
extern void __cdecl dir_populate(void);
extern void __cdecl stream_base_cleanup(void *stream);

/* Internal struct layout for the archive context (DirPopulateCtx).
 * Total size: 0x2000 bytes.
 *   +0x00: field_00 — pointer to header/context struct
 *   +0x04: field_04 — sig (4 bytes)
 *   +0x08: field_08 — version (4 bytes)
 *   +0x0C: field_0C — entry_count (4 bytes)
 *   +0x10: field_10 — dir_file_offset (4 bytes)
 *   +0x14: field_14 — key1 (2 bytes)
 *   +0x16: field_16 — key2 (2 bytes)
 *   +0x18: hash_table1[0x3FD] — indexed by entry_index % 1021
 *   +0x100C: hash_table2[0x3FD] — indexed by name_hash % 1021
 */

/* The hdr struct (param1) has at least these known fields:
 *   +0x10: field_10 (zeroed in create_empty path)
 *   +0x14: dir_file_offset (used by dir_populate)
 *   +0x18: field_18 (written with seek result)
 *   +0x24: alloc_param (used by dir_populate)
 */

#define HASH_TABLE_SIZE 0x3FD  /* 1021 */

__declspec(naked) void reader_open(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        mov     eax, [ebp+8]        ; eax = hdr (param1)
        push    ebx
        push    esi
        push    edi
        mov     edi, [ebp+0x10]     ; edi = file_handle (param3)
        mov     esi, ecx            ; esi = this

        ; Read sig: file_read(file_handle, &this->field_04, 4)
        push    4
        lea     ebx, [esi+4]
        push    ebx
        push    edi

        ; this->field_00 = hdr (after pushes, before call)
        mov     [esi], eax
        call    file_read

        ; Check sig == 0x44425623 ("#VBD")
        cmp     dword ptr [ebx], 0x44425623
        je      sig_ok

        ; Error: "This is isn't a database"
        push    0x0076D264
        call    show_error
        add     esp, 4
        test    eax, eax
        je      sig_ok
        int     3                   ; debug break

sig_ok:
        ; Read version: file_read(file_handle, &this->field_08, 4)
        push    4
        lea     ebx, [esi+8]
        push    ebx
        push    edi
        call    file_read

        ; Check version <= 4
        cmp     dword ptr [ebx], 4
        jbe     version_ok

        ; Error: "Application must be recompiled to use this database"
        push    0x0076D230
        call    show_error
        add     esp, 4
        test    eax, eax
        je      version_ok
        int     3

version_ok:
        ; Read entry_count: file_read(file_handle, &this->field_0C, 4)
        push    4
        lea     eax, [esi+0x0C]
        push    eax
        push    edi
        call    file_read

        ; If version < 4, create empty
        cmp     dword ptr [ebx], 4  ; ebx still = &this->field_08 (version)
        jb      create_empty

        ; If entry_count < max_entries (param2), create empty
        mov     ecx, [ebp+0x0C]     ; ecx = max_entries
        cmp     [esi+0x0C], ecx
        jb      create_empty

        ; Read dir_file_offset: file_read(file_handle, &this->field_10, 4)
        push    4
        lea     ebx, [esi+0x10]
        push    ebx
        push    edi
        call    file_read

        ; Read key1: file_read(file_handle, &this->field_14, 2)
        push    2
        lea     edx, [esi+0x14]
        push    edx
        push    edi
        call    file_read

        ; Read key2: file_read(file_handle, &this->field_16, 2)
        push    2
        lea     eax, [esi+0x16]
        push    eax
        push    edi
        call    file_read

        ; dir_size = this->field_10 - 0x14
        mov     ecx, [ebp+8]        ; ecx = hdr
        mov     edx, [ecx+0x24]     ; edx = hdr->alloc_param
        mov     ebx, [ebx]          ; ebx = this->field_10 (dir_file_offset)
        push    edx                 ; alloc_param
        sub     ebx, 0x14           ; ebx = dir_size
        push    ebx                 ; size
        call    archive_alloc
        add     esp, 8
        ; eax = buf

        ; Read directory blob into buf
        push    ebx                 ; dir_size
        push    eax                 ; buf
        push    edi                 ; file_handle
        mov     [ebp+0x0C], eax     ; save buf in param2 slot (reused)
        call    file_read

        ; Initialize stream reader over buf
        push    0                   ; zero flag
        push    ebx                 ; dir_size
        mov     ebx, [ebp+0x0C]     ; ebx = buf
        push    ebx                 ; buf
        lea     ecx, [ebp-0x20]     ; ecx = &stream (local var at ebp-0x20)
        call    stream_init

        ; Call dir_populate(this, &stream, 0)
        push    0                   ; flag = 0
        lea     eax, [ebp-0x20]     ; eax = &stream
        push    eax
        mov     ecx, esi            ; ecx = this
        call    dir_populate

        ; Seek file: file_seek(file_handle, 2, 0)
        push    0
        push    2
        push    edi
        call    file_seek

        ; hdr->field_18 = seek_result
        mov     ecx, [ebp+8]        ; ecx = hdr
        push    ebx                 ; buf (for free)
        mov     [ecx+0x18], eax     ; hdr->field_18 = seek result

        ; Free buffer
        call    archive_free
        add     esp, 4

        ; Clean up stream
        lea     ecx, [ebp-0x20]
        call    stream_base_cleanup

        pop     edi
        mov     eax, esi            ; return this
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x0C

create_empty:
        ; Close file
        push    edi
        call    file_close

        ; Zero out fields
        mov     ecx, [ebp+8]        ; ecx = hdr
        mov     edx, [ebp+0x0C]     ; edx = max_entries
        xor     eax, eax

        mov     [ecx+0x10], eax     ; hdr->field_10 = 0
        mov     [esi], ecx          ; this->field_00 = hdr
        mov     word ptr [esi+0x16], ax  ; this->field_16 = 0
        mov     word ptr [esi+0x14], ax  ; this->field_14 = 0
        mov     [esi+0x10], eax     ; this->field_10 = 0
        mov     dword ptr [esi+4], 0x44425623  ; this->field_04 = sig
        mov     dword ptr [ebx], 4  ; this->field_08 = 4 (version)
        mov     [esi+0x0C], edx     ; this->field_0C = max_entries

        ; Zero hash_table1 (0x3FD DWORDs at this+0x18)
        lea     edi, [esi+0x18]
        mov     ecx, HASH_TABLE_SIZE
        rep     stosd

        ; Zero hash_table2 (0x3FD DWORDs at this+0x100C)
        lea     edi, [esi+0x100C]
        mov     ecx, HASH_TABLE_SIZE
        rep     stosd

        pop     edi
        mov     eax, esi            ; return this
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x0C
    }
}
