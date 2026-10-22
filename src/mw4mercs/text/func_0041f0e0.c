/*
 * FUN_0041F0E0 — StreamReader::set_cur_ptr (vtable index 4, offset +0x10).
 *
 * Sets this->cur_ptr to the given value; if it exceeds end_ptr, extends end_ptr.
 *
 * Calling convention: __thiscall (ecx = this), 1 stack arg, ret 4.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * NOTE: not in functions.csv (Ghidra under-detected); diff via --size 18.
 */

#include <mw4/archive.h>

__declspec(naked) void *stream_set_cur_ptr(struct StreamReader *this, void *ptr)
{
    __asm {
        mov     eax, [esp+4]         /* eax = ptr */
        cmp     eax, [ecx+0x18]     /* compare with end_ptr */
        mov     [ecx+0x14], eax     /* cur_ptr = ptr */
        jbe     skip
        mov     [ecx+0x18], eax     /* end_ptr = ptr (extend) */
skip:
        ret     4
    }
}