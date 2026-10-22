/*
 * FUN_006FA8F0 (117 B) — Integer-to-string append to a text buffer.
 *
 * This is a __thiscall method on a buffer structure (capacity at +0x00,
 * write-position at +0x04, buffer-base at +0x08). It converts the integer
 * argument to a decimal string via _itoa, then appends that string to the
 * buffer at the current write position, clamping to available capacity.
 * Returns `this` (EAX = ECX on entry).
 *
 * Called by FUN_006F91D0 (the large log/output function) to append integer
 * values to the accumulated output buffer.
 *
 * Companion to FUN_006FA880 (which appends raw strings).
 *
 * __thiscall (ECX = this), RET 0x04 (1 stack param: int value).
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

/* ---- external functions ---- */
/* _itoa(value, buffer, radix) — MSVCRT import at IAT 0x0076b2d4 */
/* extern void __cdecl _itoa(int, char *, int); */

__declspec(naked) void * __stdcall FUN_006fa8f0(int value)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        push    ebp
        push    esi
        push    edi

        /* _itoa(value, local_buffer, 10) */
        push    0xa                     ; radix = 10
        lea     eax, [esp + 0x14]       ; local buffer (after 4 pushes + 0x20 sub = 0x30, minus 4 for the push = 0x14)
        mov     ebx, ecx                ; save this in ebx
        mov     ecx, dword ptr [esp + 0x38]  ; param (value) — after 5 pushes + 0x20 sub
        push    eax                     ; buffer
        push    ecx                     ; value
        _emit 0xFF
        _emit 0x15
        _emit 0xD4
        _emit 0xB2
        _emit 0x76
        _emit 0x00

        /* strlen(local_buffer) via REPNE SCASB */
        mov     edx, dword ptr [ebx + 0x04]  ; edx = write_pos
        or      ecx, 0xffffffff         ; ecx = -1 (for REPNE SCASB)
        xor     eax, eax                ; al = 0
        add     esp, 0x0c               ; clean up _itoa args (3 * 4 = 12)
        lea     edi, [esp + 0x10]       ; local buffer (after cleanup: 0x20 sub + 4 pushes = 0x30, minus 0x0c cleanup = 0x24, local at 0x24-0x14 = 0x10)
        repne   scasb                   ; scan for null
        not     ecx                     ; ecx = strlen + 1
        dec     ecx                     ; ecx = strlen

        /* clamp copy length to available space */
        mov     eax, ecx                ; eax = strlen
        mov     ecx, dword ptr [ebx]    ; ecx = capacity
        inc     eax                     ; eax = strlen + 1 (include null)
        lea     esi, [edx + eax*1]      ; esi = write_pos + strlen + 1
        cmp     esi, ecx                ; if (write_pos + strlen + 1 <= capacity)
        jle     l_copy                  ;   jump to copy
        sub     ecx, edx                ; ecx = capacity - write_pos
        mov     eax, ecx                ; eax = clamped length

    l_copy:
        /* memcpy(buffer_base + write_pos, local_buffer, clamped_length) */
        mov     edx, dword ptr [ebx + 0x08]  ; edx = buffer_base
        mov     edi, dword ptr [ebx + 0x04]  ; edi = write_pos
        mov     ecx, eax                ; ecx = length
        mov     ebp, ecx                ; save length in ebp
        shr     ecx, 2                  ; ecx = length / 4 (dwords)
        add     edi, edx                ; edi = buffer_base + write_pos
        lea     esi, [esp + 0x10]       ; esi = local_buffer
        rep     movsd                   ; copy dwords
        mov     ecx, ebp                ; ecx = length
        and     ecx, 3                  ; ecx = length % 4 (remaining bytes)
        rep     movsb                   ; copy remaining bytes

        /* update write_pos and null-terminate */
        mov     ecx, dword ptr [ebx + 0x04]  ; ecx = old write_pos
        pop     edi
        lea     eax, [ecx + eax*1 - 1]  ; eax = write_pos + length - 1 (new write_pos)
        pop     esi
        mov     dword ptr [ebx + 0x04], eax  ; store new write_pos
        mov     byte ptr [eax + edx*1], 0x00  ; null-terminate at buffer_base + new_write_pos

        pop     ebp
        mov     eax, ebx                ; return this
        pop     ebx
        add     esp, 0x20
        ret     0x04
    }
}
