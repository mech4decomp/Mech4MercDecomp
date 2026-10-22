/*
 * FUN_0074DEA0 (175 B) — Appends one of several command strings
 * ("WAIT ", "EVEN ", "ODD ") into the global buffer at 0x008ba314
 * depending on flag bits in param_1, returns the buffer.
 *
 * __cdecl, RET 4 (one byte param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8ba314[];             /* DAT_008ba314 */
extern char s_7abec8[];             /* "WAIT " @ 0x7abec8 */
extern char s_7abec0[];             /* "EVEN " @ 0x7abec0 */
extern char s_7abeb8[];             /* "ODD " @ 0x7abeb8 */

__declspec(naked) char *__cdecl FUN_0074dea0(char param)
{
    __asm {
        mov     dl, byte ptr [esp + 0x4]
        test    dl, 0x1
        push    ebx
        push    esi
        push    edi
        mov     byte ptr [g_8ba314], 0x0
        jz      L_74dee0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset s_7abec8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8ba314
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_74dee0:
        test    dl, 0x2
        jz      L_74df12
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset s_7abec0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8ba314
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_74df12:
        test    dl, 0x4
        jz      L_74df44
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset s_7abeb8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8ba314
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_74df44:
        pop     edi
        pop     esi
        mov     eax, offset g_8ba314
        pop     ebx
        ret     4
    }
}
