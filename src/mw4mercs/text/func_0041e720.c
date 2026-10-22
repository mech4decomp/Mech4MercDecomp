/*
 * FUN_0041E720 — StreamReader::read (vtable index 8, offset +0x20).
 *
 * Copies up to `len` bytes from the stream's internal buffer (at
 * this->lpVtbl->get_cur_ptr(this)) into the caller-supplied `buf`,
 * then advances the internal position by `len` via
 * this->lpVtbl->method6(this, len).
 *
 * Returns `this` (the StreamReader pointer).
 *
 * Calling convention: __thiscall (ecx = this), ret 8 (callee cleans
 * two DWORD args: buf, len).
 *
 * CFLAGS: pinned /O1 (no deviation).
 */

#include <mw4/archive.h>

__declspec(naked) void *stream_read(struct StreamReader *this, void *buf, unsigned int len)
{
    __asm {
        push    ebx
        push    esi
        mov     ebx, ecx            ; ebx = this
        mov     eax, [ebx]          ; eax = this->lpVtbl
        push    edi
        call    [eax+0x04]          ; get_cur_ptr(this) -> eax = source ptr
        mov     edi, [esp+0x10]     ; edi = buf (arg1)
        mov     esi, eax            ; esi = source ptr
        mov     eax, [esp+0x14]     ; eax = len (arg2)
        mov     ecx, eax            ; ecx = len
        mov     edx, ecx            ; edx = len (save)
        shr     ecx, 2              ; ecx = len / 4
        rep movsd                   ; copy DWORDs from [esi] to [edi]
        mov     ecx, edx            ; ecx = len (original)
        mov     edx, [ebx]          ; edx = this->lpVtbl
        and     ecx, 3              ; ecx = len % 4
        rep movsb                   ; copy remaining bytes
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
