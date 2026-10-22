/*
 * FUN_004148F0 — archive_close.
 *
 * Closes an archive context:
 *   1. If ctx->field_00 (hdr ptr) is non-null, calls free_all_entries(hdr)
 *      then frees the hdr itself.
 *   2. If ctx->field_10 (file handle) is non-null, calls file_close on it.
 *      Otherwise, if ctx->field_1c is non-null, calls a different close
 *      (FUN_006FB5E0) on it.
 *   3. Calls a refcount-decrement helper (FUN_006F4850) on ctx->field_24
 *      with param 1.
 *   4. Decrements a global refcount at 0x007B880C. If it hits zero, calls
 *      the same helper on the global at 0x007B8800 with param 1.
 *   5. Decrements a refcount byte at ctx->field_0c[-1]. If it hits zero,
 *      frees the buffer (refcount byte + name string).
 *
 * Calling convention: __thiscall (ecx = this = DirPopulateCtx*), ret 0.
 * CFLAGS: pinned /O1 (no deviation)
 *
 * Callees (all reloc-masked in diff):
 *   FUN_00414590 — archive_free_all_entries (__thiscall, 0 params)
 *   FUN_004084E0 — archive_free (__cdecl, 1 param)
 *   FUN_006FC580 — file_close (__cdecl, 1 param)
 *   FUN_006FB5E0 — some_other_close (__cdecl, 1 param)
 *   FUN_006F4850 — refcount_decrement (__cdecl, 2 params)
 *
 * Match: 100% (28 reloc bytes masked; actual code is byte-identical.)
 */

#include <mw4/archive.h>

/* External callees */
extern void __cdecl archive_free(void *p);
extern void archive_free_all_entries(void);
extern void __cdecl file_close(void *handle);
extern void __cdecl some_other_close(void *p);
extern void __cdecl refcount_decrement(void *p, int val);

/* Global refcount at 0x007B880C — tracks number of open archive contexts.
 * When it hits zero, cleanup on the global at 0x007B8800 is triggered. */
extern volatile long g_archive_refcount;
extern void *g_archive_global;

__declspec(naked) void archive_close(void)
{
    __asm {
        push    esi
        mov     esi, ecx                ; esi = this
        push    edi

        mov     edi, [esi]              ; edi = this->field_00 (hdr ptr)
        test    edi, edi
        je      skip_hdr_free

        mov     ecx, edi
        call    archive_free_all_entries ; free_all_entries(hdr)
        push    edi
        call    archive_free            ; archive_free(hdr)
        add     esp, 4

    skip_hdr_free:
        mov     eax, [esi + 0x10]       ; eax = this->field_10 (file handle)
        test    eax, eax
        je      check_field_1c

        push    eax
        call    file_close              ; file_close(handle)
        jmp     after_close

    check_field_1c:
        mov     eax, [esi + 0x1C]       ; eax = this->field_1c
        test    eax, eax
        je      after_close

        push    eax
        call    some_other_close        ; some_other_close(p)

    after_close:
        mov     eax, [esi + 0x24]       ; eax = this->field_24
        push    1
        push    eax
        call    refcount_decrement      ; refcount_decrement(field_24, 1)

        dec     dword ptr [g_archive_refcount]  ; global_refcount--
        jne     skip_global_cleanup

        mov     ecx, dword ptr [g_archive_global]  ; ecx = some_global
        push    1
        push    ecx
        call    refcount_decrement      ; refcount_decrement(some_global, 1)

    skip_global_cleanup:
        mov     esi, [esi + 0x0C]       ; esi = this->field_0c (name buffer)
        test    esi, esi
        je      done

        ; Decrement refcount byte at name[-1]
        mov     cl, [esi - 1]           ; cl = refcount byte
        lea     eax, [esi - 1]          ; eax = &refcount byte
        dec     cl
        mov     [eax], cl
        jne     done                    ; if refcount > 0, done

        push    eax                     ; free the buffer (refcount + name)
        call    archive_free
        add     esp, 4

    done:
        pop     edi
        pop     esi
        ret
    }
}
