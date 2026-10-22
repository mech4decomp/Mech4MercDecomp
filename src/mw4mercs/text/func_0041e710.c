/*
 * FUN_0041E710 — StreamReader base-class cleanup / re-vtable.
 *
 * Overwrites this->lpVtbl with the base-class vtable at 0x0076D3F0 and
 * returns. Called by stream_dtor (FUN_0041F090) before operator delete.
 *
 * Calling convention: __thiscall (ecx = this), no stack args, ret 0.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * NOTE: not in functions.csv (Ghidra under-detected); diff via --size 7.
 * The vtable address is a reloc-masked absolute reference.
 */

#include <mw4/archive.h>

extern const void *g_base_vtable;

__declspec(naked) void stream_base_cleanup(struct StreamReader *this)
{
    __asm {
        mov     dword ptr [ecx], 0x0076D3F0   /* base-class vtable */
        ret
    }
}