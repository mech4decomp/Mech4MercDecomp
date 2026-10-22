/*
 * FUN_0074FD00 (175 B) — Appends one of several command strings
 * ("DESTCOLORKEY ", "SRCCOLORKEY ", "WAIT ") into the global buffer
 * at 0x008b9f14 depending on flag bits in param_1, returns the buffer.
 *
 * __cdecl, RET 4 (one byte param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8b9f14[];             /* DAT_008b9f14 */
extern char s_7aca74[];             /* "DESTCOLORKEY " @ 0x7aca74 */
extern char s_7aca64[];             /* "SRCCOLORKEY " @ 0x7aca64 */
extern char s_7abec8[];             /* "WAIT " @ 0x7abec8 */

__declspec(naked) char *__cdecl FUN_0074fd00(char param)
{
    __asm {
        mov     dl, byte ptr [esp + 0x4]
        test    dl, 0x2
        push    ebx
        push    esi
        push    edi
        mov     byte ptr [g_8b9f14], 0x0
        jz      L_74fd40
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset s_7aca74
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b9f14
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_74fd40:
        test    dl, 0x1
        jz      L_74fd72
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset s_7aca64
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b9f14
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_74fd72:
        test    dl, 0x10
        jz      L_74fda4
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset s_7abec8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b9f14
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_74fda4:
        pop     edi
        pop     esi
        mov     eax, offset g_8b9f14
        pop     ebx
        ret     4
    }
}
