/*
 * FUN_006FA880 (98 B) — String append to a custom string builder buffer.
 *
 * __thiscall (ECX = StringBuffer *this), RET 4 (1 stack param: const char *src).
 *
 * Appends the source string to the buffer, up to the remaining capacity.
 * The StringBuffer struct (at ECX) has layout:
 *   +0x00: capacity (total allocated size)
 *   +0x04: cursor (current write offset from buffer base)
 *   +0x08: buffer (char *base pointer)
 *
 * If src is NULL, returns this unchanged.
 * Otherwise: computes strlen(src), clamps to remaining space, copies via
 * rep movsd + rep movsb, null-terminates, updates cursor, returns this.
 *
 * Called by FUN_006F91D0 (log/output dispatcher) to build formatted strings.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

__declspec(naked) void *__stdcall FUN_006fa880(void *this, const char *src)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]   ; ESI = src
        test    esi, esi
        mov     edx, ecx                     ; EDX = this
        jz      l_null_src

        push    ebx
        or      ecx, 0xffffffff              ; ECX = -1 (for strlen)
        xor     eax, eax                     ; EAX = 0 (search char)
        push    ebp
        push    edi
        mov     edi, esi                     ; EDI = src
        repne scasb                          ; strlen(src) -> ECX = ~strlen
        mov     edi, dword ptr [edx + 0x4]   ; EDI = this->cursor
        not     ecx                          ; ECX = strlen + 1
        dec     ecx                          ; ECX = strlen
        mov     eax, ecx                     ; EAX = strlen
        mov     ecx, dword ptr [edx]         ; ECX = this->capacity
        inc     eax                          ; EAX = strlen + 1
        lea     ebx, [edi + eax*1]           ; EBX = cursor + strlen + 1
        cmp     ebx, ecx                     ; if (cursor + strlen + 1 <= capacity)
        jle     l_copy                       ;   goto copy
        sub     ecx, edi                     ; ECX = capacity - cursor
        mov     eax, ecx                     ; EAX = clamped length

    l_copy:
        mov     ebx, dword ptr [edx + 0x8]   ; EBX = this->buffer
        mov     edi, dword ptr [edx + 0x4]   ; EDI = this->cursor
        mov     ecx, eax                     ; ECX = copy_len
        mov     ebp, ecx                     ; EBP = copy_len
        add     edi, ebx                     ; EDI = buffer + cursor
        shr     ecx, 0x2                     ; ECX = copy_len / 4
        rep movsd                            ; copy dwords
        mov     ecx, ebp                     ; ECX = copy_len
        and     ecx, 0x3                     ; ECX = copy_len % 4
        rep movsb                            ; copy remaining bytes
        mov     ecx, dword ptr [edx + 0x4]   ; ECX = this->cursor
        pop     edi
        lea     eax, [ecx + eax*1 - 0x1]     ; EAX = cursor + copy_len - 1
        pop     ebp
        mov     byte ptr [eax + ebx*1], 0x0  ; buffer[cursor + copy_len - 1] = '\0'
        pop     ebx
        mov     dword ptr [edx + 0x4], eax   ; this->cursor = cursor + copy_len - 1
        mov     eax, edx                     ; return this
        pop     esi
        ret     0x4

    l_null_src:
        mov     eax, edx                     ; return this
        pop     esi
        ret     0x4
    }
}
