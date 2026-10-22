/*
 * FUN_00414040 — writer-opener for the #VBD archive.
 *
 * Twin of reader_open (FUN_00413EE0). Reads and validates the archive
 * header (sig == "#VBD", version <= 4, entry_count >= max_entries) from
 * a pre-initialized stream (no file I/O). Shows warnings on validation
 * failure but always continues to read all header fields (dir_file_offset,
 * key1, key2) and calls dir_populate(this, stream, 1) to build the entry
 * hash tables with absolute-offset computation enabled (flag=1).
 *
 * Unlike reader_open, this function does NOT allocate a directory buffer,
 * initialize a stream, or perform file I/O — the stream is already set up
 * by the caller. It also has no create_empty path; it always reads all
 * fields and calls dir_populate.
 *
 * Calling convention: __thiscall (ecx = this), ret 0x0C (3 DWORD params)
 * CFLAGS: pinned /O1 (no deviation)
 *
 * Callees (all reloc-masked in diff):
 *   FUN_006FAB90 — error message display (__cdecl, 1 param)
 *   FUN_00414110 — dir_populate (__thiscall, 2 params) [ALREADY MATCHED]
 */

#include <mw4/archive.h>

/* External callees */
extern int  __cdecl show_error(const char *msg);
extern void __cdecl dir_populate(void);

__declspec(naked) void writer_open(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, [ebp+8]        ; eax = hdr (param1)
        push    ebx
        push    esi
        mov     esi, [ebp+0x10]     ; esi = stream (param3)
        mov     edx, [esi]          ; edx = stream->lpVtbl
        push    edi
        mov     edi, ecx            ; edi = this

        ; Read sig: stream->read(&this->field_04, 4)
        push    4
        lea     ebx, [edi+4]
        push    ebx
        mov     ecx, esi
        mov     [edi], eax          ; this->field_00 = hdr
        call    dword ptr [edx+0x20] ; stream->read (vtable[8])

        ; Check sig == 0x44425623 ("#VBD")
        cmp     dword ptr [ebx], 0x44425623
        je      sig_ok

        ; Error: "This is isn't a database"
        push    0x0076D264
        call    show_error
        add     esp, 4
        test    eax, eax
        je      sig_ok
        int     3

sig_ok:
        ; Read version: stream->read(&this->field_08, 4)
        mov     eax, [esi]          ; eax = stream->lpVtbl
        push    4
        lea     ebx, [edi+8]
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax+0x20] ; stream->read (vtable[8])

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
        ; Read entry_count: stream->read(&this->field_0C, 4)
        mov     edx, [esi]          ; edx = stream->lpVtbl
        lea     eax, [edi+0x0C]
        push    4
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20] ; stream->read (vtable[8])

        ; If version < 4 or entry_count < max_entries, warn "Obsolete database"
        cmp     dword ptr [ebx], 4  ; ebx still = &this->field_08 (version)
        jb      warn_obsolete

        mov     eax, [edi+0x0C]     ; eax = entry_count
        cmp     eax, [ebp+0x0C]     ; compare with max_entries (param2)
        jnb     continue            ; if entry_count >= max_entries, skip warning

warn_obsolete:
        ; Warning: "Obsolete database"
        push    0x0076D280
        call    show_error
        add     esp, 4
        test    eax, eax
        je      continue
        int     3

continue:
        ; Read dir_file_offset: stream->read(&this->field_10, 4)
        mov     edx, [esi]          ; edx = stream->lpVtbl
        push    4
        lea     eax, [edi+0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20] ; stream->read (vtable[8])

        ; Read key1: stream->read(&this->field_14, 2)
        mov     edx, [esi]          ; edx = stream->lpVtbl
        push    2
        lea     eax, [edi+0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20] ; stream->read (vtable[8])

        ; Read key2: stream->read(&this->field_16, 2)
        mov     edx, [eax]          ; edx = stream->lpVtbl (eax = stream from ret)
        push    2
        lea     ecx, [edi+0x16]
        push    ecx
        mov     ecx, eax            ; ecx = stream
        call    dword ptr [edx+0x20] ; stream->read (vtable[8])

        ; Call dir_populate(this, stream, 1)
        push    1                   ; flag = 1 (compute absolute offsets)
        push    esi                 ; stream
        mov     ecx, edi            ; ecx = this
        call    dir_populate

        mov     eax, edi            ; return this
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x0C
    }
}
