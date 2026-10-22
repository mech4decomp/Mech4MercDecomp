/*
 * FUN_0074DA5F (226 B) — in-.text data block function (block 0x74DA5F).
 * Concatenates up to four strings (0x7abd5c/0x7abd4c/0x7abd38/0x7abd24)
 * into buffer 0x8ba414 based on flag bits in dl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_008ba414[]; /* buffer @ 0x8ba414 */
extern char g_7abd5c[];   /* string @ 0x7abd5c */
extern char g_7abd4c[];   /* string @ 0x7abd4c */
extern char g_7abd38[];   /* string @ 0x7abd38 */
extern char g_7abd24[];   /* string @ 0x7abd24 */

__declspec(naked) void FUN_0074DA5F(void)
{
    __asm {
        nop
        mov     dl, byte ptr [esp + 4]
        test    dl, 1
        push    ebx
        push    esi
        push    edi
        mov     byte ptr [g_008ba414], 0
        je      L0AA0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7abd5c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_008ba414
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
L0AA0:
        test    dl, 2
        je      L0AD2
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7abd4c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_008ba414
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
L0AD2:
        test    dl, 8
        je      L0B04
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7abd38
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_008ba414
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
L0B04:
        test    dl, 4
        je      L0B36
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7abd24
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_008ba414
        repne scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
L0B36:
        pop     edi
        pop     esi
        mov     eax, offset g_008ba414
        pop     ebx
        ret     4
    }
}
