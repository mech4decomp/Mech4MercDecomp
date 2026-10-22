/*
 * FUN_0041E950 — StreamReader::write (vtable index 9, offset +0x24).
 *
 * Copies up to `len` bytes from the caller-supplied `src` buffer into
 * the stream's internal buffer (at this->lpVtbl->get_cur_ptr(this)),
 * then advances the internal position by `len` via
 * this->lpVtbl->method6(this, len).
 *
 * This is the reverse direction of stream_read: write copies FROM the
 * caller's buffer INTO the stream's internal buffer (esi = caller's src,
 * edi = internal cur_ptr).
 *
 * Returns `this` (the StreamReader pointer).
 *
 * Calling convention: __thiscall (ecx = this), ret 8 (callee cleans
 * two DWORD args: src, len).
 *
 * CFLAGS: pinned /O1 (no deviation).
 */

#include <mw4/archive.h>

__declspec(naked) void *stream_write(struct StreamReader *this, const void *src, unsigned int len)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, [esp+0x0C]     ; esi = src (arg1)
        mov     ebx, ecx            ; ebx = this
        mov     eax, [ebx]          ; eax = this->lpVtbl
        push    edi
        call    [eax+0x04]          ; get_cur_ptr(this) -> eax = dest ptr
        mov     edi, eax            ; edi = dest ptr (internal cur_ptr)
        mov     eax, [esp+0x14]     ; eax = len (arg2)
        mov     ecx, eax            ; ecx = len
        mov     edx, ecx            ; edx = len (save)
        shr     ecx, 2              ; ecx = len / 4
        rep movsd                   ; copy DWORDs from [esi] to [edi]
        mov     ecx, edx            ; ecx = len (original)
        and     ecx, 3              ; ecx = len % 4
        rep movsb                   ; copy remaining bytes
        mov     edx, [ebx]          ; edx = this->lpVtbl
        push    eax                 ; push len
        mov     ecx, ebx            ; ecx = this
        call    [edx+0x18]          ; method6(this, len) — advance position
        pop     edi
        pop     esi
        mov     eax, ebx            ; return this
        pop     ebx
        ret     8
    }
}
