/*
 * FUN_0074D9B0 (175 B) — Appends one of several command strings
 * ("CREATE", "JOIN", " RETURNSTATUS") into the global buffer at
 * 0x008ba494 depending on flag bits in param_1, returns the buffer.
 *
 * __cdecl, RET 4 (one byte param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8ba494[];             /* DAT_008ba494 */
extern char s_7abd1c[];             /* "CREATE" @ 0x7abd1c */
extern char s_7abd14[];             /* "JOIN" @ 0x7abd14 */
extern char s_7abd04[];             /* " RETURNSTATUS" @ 0x7abd04 */

__declspec(naked) char *__cdecl FUN_0074d9b0(char param)
{
    __asm {
        mov     dl, byte ptr [esp + 0x4]
        test    dl, 0x2
        push    ebx
        push    esi
        push    edi
        mov     byte ptr [g_8ba494], 0x0
        jz      L_74d9f0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset s_7abd1c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8ba494
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_74d9f0:
        test    dl, 0x1
        jz      L_74da22
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset s_7abd14
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8ba494
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_74da22:
        test    dl, 0x80
        jz      L_74da54
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset s_7abd04
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8ba494
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_74da54:
        pop     edi
        pop     esi
        mov     eax, offset g_8ba494
        pop     ebx
        ret     4
    }
}
