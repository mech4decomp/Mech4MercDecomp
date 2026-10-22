/*
 * FUN_0074D020 (247 B) — __stdcall, RET 0xC (3 dword params). Builds a debug
 * string into the global buffer DAT_008ba7d4 describing a memory access:
 * "PEEK " prefix (param_1&8), "TO 0x%x " (param_1&6==2), "FROM 0x%x "
 * (param_1&6==4). Returns &DAT_007abb00 if param_1==1, else &DAT_008ba7d4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_str_7abb00[];     /* DAT_007abb00 */
extern char g_buf_8ba7d4[];     /* DAT_008ba7d4 */
extern char g_str_7abaf8[];     /* "PEEK " */
extern char g_str_7abaec[];     /* "TO 0x%x " */
extern char g_str_7abae0[];     /* "FROM 0x%x " */
extern int (__cdecl *g_sprintf)(char *, const char *, ...); /* IAT 0x76b420 */

__declspec(naked) char * __stdcall FUN_0074D020(unsigned int param_1, int param_2, int param_3)
{
    __asm {
        sub     esp, 0x40
        push    ebx
        mov     ebx, dword ptr [esp + 0x48]
        cmp     ebx, 0x1
        jnz     L_d039
        mov     eax, offset g_str_7abb00
        pop     ebx
        add     esp, 0x40
        ret     0xc
L_d039:
        test    bl, 0x8
        push    ebp
        push    esi
        push    edi
        mov     byte ptr [g_buf_8ba7d4], 0
        jz      L_d075
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_7abaf8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_buf_8ba7d4
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_d075:
        mov     ebp, dword ptr [g_sprintf]
        and     ebx, 0x6
        cmp     ebx, 0x2
        jnz     L_d0c3
        mov     eax, dword ptr [esp + 0x5c]
        push    eax
        lea     ecx, [esp + 0x14]
        push    offset g_str_7abaec
        push    ecx
        call    ebp
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [esp + 0x10]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_buf_8ba7d4
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_d0c3:
        cmp     ebx, 0x4
        jnz     L_d108
        mov     eax, dword ptr [esp + 0x58]
        push    eax
        lea     ecx, [esp + 0x14]
        push    offset g_str_7abae0
        push    ecx
        call    ebp
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [esp + 0x10]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_buf_8ba7d4
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_d108:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_buf_8ba7d4
        pop     ebx
        add     esp, 0x40
        ret     0xc
    }
}
