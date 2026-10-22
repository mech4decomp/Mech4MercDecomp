/*
 * FUN_00414820 — archive_open_from_stream.
 *
 * Stream-based opener twin of archive_open (FUN_004145E0).
 * Opens an archive from an existing stream (no file I/O for header).
 *
 * Flow:
 *   1. Clears this->field_0c, calls archive_set_name(this+0x0c, name)
 *      to store the archive name with refcounting.
 *   2. Increments global refcount at 0x007B880C. If it was 0 (first open),
 *      initializes the global object at 0x007B8800 via refcount_helper
 *      with the string "Database" and a seed value from 0x007B8814.
 *   3. Extracts filename from path via _mbsrchr(name, '\\').
 *   4. Calls refcount_helper(adjusted_name, 0, g_archive_global) to
 *      register the archive name with the global object.
 *   5. Stores the result in this->field_24.
 *   6. Sets up context fields: field_28=0, field_20=hdr, field_29=0,
 *      field_10=0, field_1c=0.
 *   7. Gets stream->cur_ptr via vtable[1], stores in this->field_14.
 *   8. Gets stream->length, stores in this->field_18.
 *   9. Allocates a 0x2000-byte buffer via archive_alloc(0x2000, result).
 *  10. If alloc fails: this->field_00 = NULL, return this.
 *  11. Calls writer_open(buf, this, hdr, stream) to populate the buffer
 *      as a DirPopulateCtx from the stream data.
 *  12. Stores writer_open result in this->field_00, returns this.
 *
 * Calling convention: __thiscall (ecx = this = DirPopulateCtx*),
 *                     3 DWORD params (name, stream, hdr), ret 0x0C.
 * CFLAGS: pinned /O1 (no deviation)
 *
 * Callees (all reloc-masked in diff):
 *   FUN_00412780 — archive_set_name (__thiscall, 1 param)
 *   FUN_006F4710 — refcount_helper (__stdcall, 3 params)
 *   _mbsrchr     — MSVCRT IAT call (__cdecl, 2 params)
 *   FUN_004084C0 — archive_alloc (__cdecl, 2 params)
 *   FUN_00414040 — writer_open (__thiscall, 3 params) [ALREADY MATCHED]
 *
 * Match: 100%
 */

#include <mw4/archive.h>

/* External callees */
extern void archive_set_name(void);
extern void refcount_helper(void);
extern void *__cdecl archive_alloc(unsigned long size, unsigned long param);
extern void writer_open(void);

/* Global variables at fixed addresses in .data */
extern volatile long g_archive_refcount;   /* 0x007B880C */
extern void *g_archive_global;             /* 0x007B8800 */
extern void *g_archive_seed;               /* 0x007B8814 */

/* IAT entry for _mbsrchr */
extern unsigned long __imp___mbsrchr;

__declspec(naked) void archive_open_from_stream(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, [esp+0x10]     ; edi = name (param1)
        mov     esi, ecx            ; esi = this
        lea     ecx, [esi+0x0c]     ; ecx = &this->field_0c (name slot)
        xor     ebx, ebx            ; ebx = 0
        push    edi                 ; name
        mov     [ecx], ebx          ; this->field_0c = 0 (clear old name)
        call    archive_set_name    ; archive_set_name(&this->field_0c, name)

        ; Global refcount logic
        mov     eax, dword ptr [g_archive_refcount]
        mov     ecx, eax
        inc     eax
        test    ecx, ecx            ; was refcount 0?
        mov     dword ptr [g_archive_refcount], eax
        jne     skip_global_init

        ; First open: init global object
        mov     edx, dword ptr [g_archive_seed]
        push    edx                 ; seed value
        push    ebx                 ; 0
        push    0x0076D2A4          ; "Database"
        call    refcount_helper     ; refcount_helper("Database", 0, seed)
        mov     dword ptr [g_archive_global], eax

skip_global_init:
        ; Extract filename from path: _mbsrchr(name, '\\')
        push    0x5C                ; '\\'
        push    edi                 ; name
        call    dword ptr [__imp___mbsrchr]
        add     esp, 8
        cmp     eax, ebx
        jne     found_slash
        mov     eax, edi            ; no slash, use original name
        jmp     after_slash
found_slash:
        inc     eax                 ; advance past backslash
after_slash:

        ; Register name with global object
        mov     ecx, dword ptr [g_archive_global]
        push    ebp                 ; save ebp
        push    ecx                 ; param3 = global
        push    ebx                 ; param2 = 0
        push    eax                 ; param1 = adjusted name
        call    refcount_helper     ; refcount_helper(name, 0, global)
        mov     edi, [esp+0x18]     ; edi = stream (param2)
        mov     edx, [esp+0x1c]     ; edx = hdr (param3)
        mov     ebp, eax            ; ebp = result

        ; Set up context fields
        mov     eax, [edi]          ; eax = stream->lpVtbl
        mov     ecx, edi            ; ecx = stream
        mov     [esi+0x24], ebp     ; this->field_24 = result
        mov     [esi+0x28], bl      ; this->field_28 = 0
        mov     [esi+0x20], edx     ; this->field_20 = hdr
        mov     [esi+0x29], bl      ; this->field_29 = 0
        mov     [esi+0x10], ebx     ; this->field_10 = 0
        mov     [esi+0x1c], ebx     ; this->field_1c = 0
        call    dword ptr [eax+4]   ; stream->vtable[1] (get_cur_ptr)
        mov     ecx, [edi+0x1c]     ; ecx = stream->length
        push    ebp                 ; alloc_param
        push    0x2000              ; size
        mov     [esi+0x14], eax     ; this->field_14 = cur_ptr
        mov     [esi+0x18], ecx     ; this->field_18 = length
        call    archive_alloc       ; buf = archive_alloc(0x2000, result)
        add     esp, 8
        cmp     eax, ebx
        pop     ebp                 ; restore saved ebp
        je      fail

        ; Success: call writer_open(buf, this, hdr, stream)
        mov     edx, [esp+0x18]     ; edx = hdr (param3)
        push    edi                 ; stream
        push    edx                 ; hdr
        push    esi                 ; this
        mov     ecx, eax            ; ecx = buf
        call    writer_open         ; writer_open(buf, this, hdr, stream)
        mov     [esi], eax          ; this->field_00 = result
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x0C

fail:
        pop     edi
        mov     [esi], ebx          ; this->field_00 = NULL
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x0C
    }
}
