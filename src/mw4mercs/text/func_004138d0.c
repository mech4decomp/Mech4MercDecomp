/*
 * FUN_004138D0 — entry_read_raw.
 *
 * Raw member-bytes reader twin of entry_load_data (FUN_00413830).
 * Used by the writer serializer path to stream raw member bytes
 * (no decompression — always reads stored_size bytes as-is).
 *
 * If the archive has a file handle (hdr->field_10 != NULL):
 *   1. Seeks the file to hdr->field_10 + entry->data_off.
 *   2. Allocates a buffer of entry->stored_size bytes.
 *   3. Reads the stored data into the buffer.
 *   4. Sets entry->field_08 = buf, entry->field_26 = 1.
 * If no file handle (in-memory archive):
 *   1. Computes entry->field_08 = hdr->field_10 + hdr->dir_file_offset + entry->data_off.
 *
 * Calling convention: __thiscall (ecx = this = ArchiveEntryInternal*),
 *                     1 DWORD stack param = HdrStruct*, ret 4.
 * CFLAGS: pinned /O1 (no deviation)
 *
 * Callees (all reloc-masked in diff):
 *   FUN_006FC640 — file_seek (__stdcall, 3 params)
 *   FUN_006FC600 — file_read (__stdcall, 3 params)
 *   FUN_004084C0 — archive_alloc (__cdecl, 2 params)
 *
 * Match: 100%
 */

#include <mw4/archive.h>

/* Hdr struct — same layout as entry_load_data.c */
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
extern void *__cdecl archive_alloc(unsigned long size, unsigned long param);

__declspec(naked) void entry_read_raw(void)
{
    __asm {
        push    ebp
        mov     ebp, [esp+8]        ; ebp = hdr (HdrStruct*)
        mov     eax, [ebp]          ; eax = hdr->field_00
        push    esi
        push    edi
        mov     edi, [ebp+0x10]     ; edi = hdr->field_10 (file handle)
        test    edi, edi
        mov     esi, ecx            ; esi = entry
        je      in_memory_path

        ; File-backed path: seek, alloc, read
        mov     eax, [eax+0x10]     ; eax = hdr->field_10
        mov     edx, [esi+0x20]     ; edx = entry->data_off
        push    ebx
        add     eax, edx
        push    eax                 ; origin (offset)
        push    0                   ; mode (SEEK_SET)
        push    edi                 ; handle
        call    file_seek           ; file_seek(handle, SEEK_SET, offset)

        mov     ecx, [ebp+0x24]     ; ecx = hdr->alloc_param
        mov     ebx, [esi+0x18]     ; ebx = entry->stored_size
        push    ecx                 ; alloc_param
        push    ebx                 ; stored_size
        call    archive_alloc       ; buf = archive_alloc(stored_size, alloc_param)
        add     esp, 8

        push    ebx                 ; stored_size
        push    eax                 ; buf
        push    edi                 ; handle
        mov     [esi+8], eax        ; entry->field_08 = buf
        mov     byte ptr [esi+0x26], 1  ; entry->field_26 = 1
        call    file_read           ; file_read(handle, buf, stored_size)

        pop     ebx
        pop     edi
        pop     esi
        pop     ebp
        ret     4

    in_memory_path:
        mov     edx, [eax+0x10]     ; edx = hdr->field_10
        mov     ecx, [ebp+0x14]     ; ecx = hdr->dir_file_offset
        mov     eax, [esi+0x20]     ; eax = entry->data_off
        add     edx, ecx
        add     edx, eax
        pop     edi
        mov     [esi+8], edx        ; entry->field_08 = absolute offset
        pop     esi
        pop     ebp
        ret     4
    }
}
