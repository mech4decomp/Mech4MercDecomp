/*
 * FUN_0041F120 — StreamReader::advance (vtable index 6, offset +0x18).
 *
 * Advances this->cur_ptr by delta; if cur_ptr exceeds end_ptr, extends end_ptr.
 * Called by stream_read (FUN_0041E720) and stream_write (FUN_0041E950).
 *
 * Calling convention: __thiscall (ecx = this), 1 stack arg, ret 4.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * NOTE: not in functions.csv (Ghidra under-detected); diff via --size 26.
 */

#include <mw4/archive.h>

__declspec(naked) void *stream_advance(struct StreamReader *this, unsigned int delta)
{
    __asm {
        mov     eax, ecx            /* eax = this */
        mov     ecx, [esp+4]        /* ecx = delta */
        mov     edx, [eax+0x14]    /* edx = cur_ptr */
        add     edx, ecx            /* edx = cur_ptr + delta */
        mov     ecx, edx            /* ecx = new_ptr */
        mov     [eax+0x14], edx    /* cur_ptr = new_ptr */
        cmp     ecx, [eax+0x18]    /* compare with end_ptr */
        jbe     skip
        mov     [eax+0x18], ecx    /* end_ptr = new_ptr (extend) */
skip:
        ret     4
    }
}