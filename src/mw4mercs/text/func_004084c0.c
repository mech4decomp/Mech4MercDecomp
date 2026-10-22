/*
 * FUN_004084C0 — archive_alloc thunk.
 *
 * __cdecl wrapper that forwards (size, param) to the real allocator
 * FUN_006F3C80 (1208 B, out of scope — static-lib/CRT-region).
 *
 * Calling convention: __cdecl, 2 DWORD args (size, param), caller cleans.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * NOTE: in functions.csv. The tail call to FUN_006F3C80 is reloc-masked.
 */

extern void *archive_alloc_impl(unsigned int size, void *param);

__declspec(naked) void *archive_alloc(unsigned int size, void *param)
{
    __asm {
        mov     eax, [esp+8]         /* size (arg2) */
        mov     ecx, [esp+4]        /* param (arg1) */
        push    eax                  /* push size */
        push    ecx                  /* push param */
        call    archive_alloc_impl   /* FUN_006F3C80 */
        ret
    }
}