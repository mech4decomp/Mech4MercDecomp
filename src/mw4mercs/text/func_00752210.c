/*
 * FUN_00752210 (179 B) — Builds a flags string into the global buffer at
 * 0x008b93d0 based on the incoming flag bits (param & 1 -> "DIEDFL_ATTACHEDONLY ",
 * param & 0x100 -> "| " + "DIEDFL_FORCEFEEDBACK "). Returns the buffer.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_buf_8b93d0[];
extern char g_str_7ad548[];   /* "DIEDFL_ATTACHEDONLY " */
extern char g_str_7ad544[];   /* "| " */
extern char g_str_7ad52c[];   /* "DIEDFL_FORCEFEEDBACK " */

__declspec(naked) char *__stdcall FUN_00752210(unsigned int param)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        test    dl, 1
        push    esi
        push    edi
        mov     byte ptr [g_buf_8b93d0], 0
        jz      L1
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_7ad548
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        push    ebx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     edi, offset g_buf_8b93d0
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        pop     ebx
L1:
        test    dh, 1
        jz      L2
        mov     al, byte ptr [g_buf_8b93d0]
        test    al, al
        jz      L3
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_buf_8b93d0
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L3:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_7ad52c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_buf_8b93d0
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L2:
        pop     edi
        mov     eax, offset g_buf_8b93d0
        pop     esi
        ret     4
    }
}
