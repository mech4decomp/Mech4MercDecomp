/*
 * FUN_0041F090 — StreamReader::~StreamReader (vtable index 0, offset +0x00).
 *
 * Scalar-deleting destructor: calls base cleanup (FUN_0041E710), then if
 * bit 0 of flags is set, calls operator delete (FUN_004083E0) on this.
 * Returns this in eax.
 *
 * Calling convention: __thiscall (ecx = this), 1 stack arg (flags), ret 4.
 * CFLAGS: pinned /O1 (no deviation).
 */

#include <mw4/archive.h>

/* External callees (reloc-masked in diff). */
extern void __cdecl stream_base_cleanup(struct StreamReader *this);
extern void __cdecl operator_delete(void *p);

__declspec(naked) void *stream_dtor(struct StreamReader *this, int flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    stream_base_cleanup    /* FUN_0041E710 */
        test    byte ptr [esp+8], 1   /* flags & 1 ? */
        jz      skip_delete
        push    esi
        call    operator_delete       /* FUN_004083E0 */
        add     esp, 4
skip_delete:
        mov     eax, esi
        pop     esi
        ret     4
    }
}