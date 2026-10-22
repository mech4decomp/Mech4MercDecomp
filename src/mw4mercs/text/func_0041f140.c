/*
 * FUN_0041F140 — StreamReader::retreat (vtable index 7, offset +0x1c).
 *
 * Subtracts delta from this->cur_ptr; clamps end_ptr if exceeded.
 *
 * Calling convention: __thiscall (ecx = this), 1 stack arg, ret 4.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * NOTE: not in functions.csv (Ghidra under-detected); diff via --size 26.
 */

#include <mw4/archive.h>

__declspec(naked) void *stream_retreat(struct StreamReader *this, unsigned int delta)
{
    __asm {
        mov     eax, ecx            /* eax = this */
        mov     ecx, [esp+4]        /* ecx = delta */
        mov     edx, [eax+0x14]    /* edx = cur_ptr */
        sub     edx, ecx            /* edx = cur_ptr - delta */
        mov     ecx, edx            /* ecx = new_ptr */
        mov     [eax+0x14], edx    /* cur_ptr = new_ptr */
        cmp     ecx, [eax+0x18]    /* compare with end_ptr */
        jbe     skip
        mov     [eax+0x18], ecx    /* end_ptr = new_ptr (extend) */
skip:
        ret     4
    }
}