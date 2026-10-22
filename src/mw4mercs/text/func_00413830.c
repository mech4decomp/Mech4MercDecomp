/*
 * FUN_00413830 — member-fetch (lazy-load) routine for the #VBD archive.
 *
 * This is the function that invokes the LZW decompressor (FUN_006FC220),
 * resolving the Phase 4 open codec question.
 *
 * If the archive has a file handle (ctx->field_10 != NULL):
 *   1. Seeks the file to hdr->field_10 + entry->data_off.
 *   2. Allocates a buffer of entry->stored_size bytes.
 *   3. Reads the compressed/stored data into the buffer.
 *   4. Sets entry->field_08 to the buffer, entry->field_26 = 1.
 * If no file handle (in-memory archive):
 *   1. Computes entry->field_08 = hdr->field_10 + ctx->dir_file_offset + entry->data_off.
 *
 * Then, if entry->stored_size < entry->uncompressed_size (unsigned <):
 *   1. Allocates a decompression buffer of entry->uncompressed_size bytes.
 *   2. Calls lzw_decompress(decomp_buf, entry->field_08, entry->stored_size).
 *   3. Frees the old compressed buffer (if any — i.e. file-backed path).
 *   4. Sets entry->field_08 = decomp_buf.
 *
 * Calling convention: __thiscall (ecx = this = ArchiveEntryInternal*),
 *                     1 DWORD stack param = DirPopulateCtx*, ret 4.
 * CFLAGS: pinned /O1 (no deviation)
 *
 * Callees (all reloc-masked in diff):
 *   FUN_006FC640 — file_seek (__stdcall, 3 params)
 *   FUN_006FC600 — file_read (__stdcall, 3 params)
 *   FUN_006FC220 — lzw_decompress (__stdcall, 3 params)
 *   FUN_004084C0 — archive_alloc (__cdecl, 2 params)
 *   FUN_004084E0 — archive_free (__cdecl, 1 param)
 *
 * Match: 100% (24 reloc bytes masked; actual code is byte-identical.)
 */

#include <mw4/archive.h>

/* NOTE: This file uses its own local struct definitions because the hdr struct
 * accessed here is DIFFERENT from DirPopulateCtx in archive.h. The hdr struct
 * is the header/context struct pointed to by DirPopulateCtx->field_00.
 * Layout (from disassembly of FUN_00413830):
 *   +0x00: field_00 (some pointer)
 *   +0x10: file handle (NULL if in-memory)
 *   +0x14: dir_file_offset
 *   +0x18: field_18
 *   +0x24: alloc_param
 */

/* Hdr struct — the header/context struct pointed to by DirPopulateCtx->field_00.
 * This is NOT the same as DirPopulateCtx. It is the "hdr" parameter passed to
 * entry_load_data by the fetch dispatchers.
 */
#pragma pack(push, 1)
typedef struct {
    void          *field_00;       /* +0x00: some pointer */
    unsigned char  pad_04[0x0c];   /* +0x04: unknown/padding */
    void          *field_10;       /* +0x10: file handle (NULL if in-memory) */
    unsigned long  field_14;       /* +0x14: dir_file_offset */
    unsigned long  field_18;       /* +0x18: unknown */
    unsigned char  pad_1c[8];      /* +0x1c: padding to +0x24 */
    unsigned long  field_24;       /* +0x24: alloc_param */
} HdrStruct;
#pragma pack(pop)

/* External callees */
extern void __stdcall file_seek(void *handle, int mode, int origin);
extern void __stdcall file_read(void *handle, void *buf, unsigned int len);
extern void __stdcall lzw_decompress(void *dst, void *src, int src_len);
extern void *__cdecl archive_alloc(unsigned long size, unsigned long param);
extern void __cdecl archive_free(void *p);

__declspec(naked) void entry_load_data(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi

        mov     edi, [esp+0x14]     ; edi = hdr (HdrStruct*)
        mov     ebp, [edi+0x10]     ; ebp = hdr->file_handle
        mov     eax, [edi]          ; eax = hdr->field_00
        xor     ebx, ebx            ; ebx = 0 (old_buf = NULL)
        test    ebp, ebp            ; if file_handle == NULL
        mov     esi, ecx            ; esi = entry
        je      in_memory_path

        ; File-backed path: seek, alloc, read
        mov     eax, [eax+0x10]     ; eax = hdr->field_10
        add     eax, [esi+0x20]     ; eax += entry->data_off
        push    eax                 ; origin (offset)
        push    ebx                 ; mode (0 = SEEK_SET)
        push    ebp                 ; handle
        call    file_seek           ; file_seek(handle, SEEK_SET, offset)

        mov     ecx, [edi+0x24]     ; ecx = hdr->alloc_param
        mov     ebx, [esi+0x18]     ; ebx = entry->stored_size
        push    ecx                 ; alloc_param
        push    ebx                 ; stored_size
        call    archive_alloc       ; buf = archive_alloc(stored_size, alloc_param)
        add     esp, 8

        push    ebx                 ; stored_size
        push    eax                 ; buf
        push    ebp                 ; handle
        mov     [esi+8], eax        ; entry->field_08 = buf
        mov     [esp+0x20], eax     ; save buf in param1 slot (reuse)
        mov     byte ptr [esi+0x26], 1  ; entry->field_26 = 1
        call    file_read           ; file_read(handle, buf, stored_size)

        mov     ebx, [esp+0x14]     ; ebx = buf (from param1 slot)
        jmp     common_path

    in_memory_path:
        mov     edx, [eax+0x10]     ; edx = hdr->field_10
        mov     ecx, [edi+0x14]     ; ecx = hdr->dir_file_offset
        mov     eax, [esi+0x20]     ; eax = entry->data_off
        add     edx, ecx
        add     edx, eax
        mov     [esi+8], edx        ; entry->field_08 = absolute offset

    common_path:
        mov     ebp, [esi+0x18]     ; ebp = entry->stored_size
        mov     eax, [esi+0x1c]     ; eax = entry->uncompressed_size
        cmp     ebp, eax
        jae     done                ; if stored_size >= uncompressed_size, skip

        ; Compressed path: alloc decompression buffer, decompress, free old
        mov     ecx, [edi+0x24]     ; ecx = hdr->alloc_param
        push    ecx                 ; alloc_param
        push    eax                 ; uncompressed_size
        mov     byte ptr [esi+0x26], 1  ; entry->field_26 = 1
        call    archive_alloc       ; decomp_buf = archive_alloc(uncompressed_size, alloc_param)
        mov     edx, [esi+8]        ; edx = entry->field_08 (compressed data)
        add     esp, 8
        push    ebp                 ; stored_size (src_len)
        mov     edi, eax            ; edi = decomp_buf
        push    edx                 ; src (compressed data)
        push    edi                 ; dst (decomp_buf)
        call    lzw_decompress      ; lzw_decompress(decomp_buf, compressed_data, stored_size)
        test    ebx, ebx            ; if old_buf != NULL
        je      skip_free
        push    ebx                 ; old_buf
        call    archive_free
        add     esp, 4
    skip_free:
        mov     [esi+8], edi        ; entry->field_08 = decomp_buf

    done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
