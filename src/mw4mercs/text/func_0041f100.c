/*
 * FUN_0041F100 — StreamReader::seek_from_base (vtable index 3, offset +0x0c).
 *
 * Sets this->cur_ptr = this->base (+0x10) + delta; clamps end_ptr if exceeded.
 *
 * Calling convention: __thiscall (ecx = this), 1 stack arg, ret 4.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * NOTE: not in functions.csv (Ghidra under-detected); diff via --size 22.
 */

#include <mw4/archive.h>

__declspec(naked) void *stream_seek_from_base(struct StreamReader *this, unsigned int delta)
{
    __asm {
        mov     edx, [esp+4]        /* edx = delta */
        mov     eax, [ecx+0x10]    /* eax = base */
        add     eax, edx            /* eax = base + delta */
        cmp     eax, [ecx+0x18]    /* compare with end_ptr */
        mov     [ecx+0x14], eax    /* cur_ptr = base + delta */
        jbe     skip
        mov     [ecx+0x18], eax    /* end_ptr = new_ptr (extend) */
skip:
        ret     4
    }
}