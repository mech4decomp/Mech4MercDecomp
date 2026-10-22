/*
 * FUN_0041E690 — StreamReader initializer (constructor).
 *
 * Initializes a StreamReader to wrap a memory buffer. Sets the vtable
 * pointer, stores the buffer base, length, and initial position, and
 * writes a sentinel value at +0x08.
 *
 * Calling convention: __thiscall (ecx = this), 3 DWORD stack args,
 * ret 0x0C (callee cleans 12 bytes).
 *
 * Stack args:
 *   [esp+4] = buffer (void*) — start of the memory region
 *   [esp+8] = length (unsigned int) — size of the buffer
 *   [esp+0xC] = base_offset (int) — initial offset within buffer for cur_ptr
 *
 * Fields written:
 *   +0x00: lpVtbl = &StreamReader_vtable (0x0076D7B0)
 *   +0x08: sentinel = 0xFFFFFFEC (-20)
 *   +0x10: base = buffer
 *   +0x14: cur_ptr = buffer + base_offset
 *   +0x18: end_ptr = buffer (initially same as base)
 *   +0x1C: length = length arg
 *
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   FUN_00415080 — unknown helper (__cdecl, 1 param); called with
 *   the value of a global DWORD at 0x007B9304 (BSS, zero at runtime).
 */

#include <mw4/archive.h>

/* External callee (reloc-masked). */
extern void __cdecl unknown_helper(unsigned long val);

__declspec(naked) void stream_init(struct StreamReader *this,
                                   void *buffer,
                                   unsigned int length,
                                   int base_offset)
{
    __asm {
        _emit 0xA1
        _emit 0x04
        _emit 0x93
        _emit 0x7B
        _emit 0x00                           ; mov eax, [0x007B9304]
        push    esi
        mov     esi, ecx                     ; esi = this
        push    eax                          ; push global value (0)
        call    unknown_helper               ; FUN_00415080
        mov     eax, [esp+8]                 ; eax = buffer
        mov     edx, [esp+0x10]              ; edx = base_offset
        mov     ecx, [esp+0x0C]              ; ecx = length
        mov     [esi+0x10], eax              ; this->base = buffer
        mov     [esi+0x18], eax              ; this->end_ptr = buffer
        add     eax, edx                     ; eax = buffer + base_offset
        mov     [esi+0x14], eax              ; this->cur_ptr = buffer + base_offset
        mov     dword ptr [esi], 0x0076D7B0  ; this->lpVtbl = StreamReader_vtable
        mov     [esi+0x1C], ecx              ; this->length = length
        mov     dword ptr [esi+8], 0xFFFFFFEC ; this->sentinel = -20
        mov     eax, esi                     ; return this
        pop     esi
        ret     0x0C
    }
}
