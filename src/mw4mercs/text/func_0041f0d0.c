/*
 * FUN_0041F0D0 — StreamReader::get_cur_ptr (vtable index 1, offset +0x04).
 *
 * Returns this->cur_ptr (the field at offset +0x14).
 *
 * Calling convention: __thiscall (ecx = this), no stack args, ret 0.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * NOTE: not in functions.csv (Ghidra under-detected); diff via --size 4.
 */

#include <mw4/archive.h>

__declspec(naked) void *stream_get_cur_ptr(struct StreamReader *this)
{
    __asm {
        mov     eax, [ecx+0x14]     /* return this->cur_ptr */
        ret
    }
}