/*
 * FUN_0074d190 (412 B) — Builds a "Game=..." command-line string with
 * optional GROUP/LOCAL/REMOTE/SERVER/SESSION/SPECTATOR flag suffixes.
 *
 * __stdcall, RET 8 (2 stack params: game-id ptr + flag mask).
 * Walks a linked list of game entries (DAT_008aab04), sprintf's the
 * game name into DAT_008ba6d4, then appends flag strings via
 * repne-scasb strlen + rep movsd/movsb strcat.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_8aab04;   /* linked list head */
extern void *g_76b420;   /* IAT: sprintf */

__declspec(naked) void FUN_0074d190(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        test    edx, edx
        push    ebx
        push    esi
        push    edi
        jz      L_d1de
        mov     eax, dword ptr [g_8aab04]
        test    eax, eax
        jz      L_d1ba
L_d1a4:
        mov     ecx, 4
        mov     edi, edx
        lea     esi, [eax + 0xc]
        xor     ebx, ebx
        repe    cmpsd
        jz      L_d1c1
        mov     eax, dword ptr [eax]
        test    eax, eax
        jnz     L_d1a4
L_d1ba:
        push    0x7abb70
        jmp     L_d1e3
L_d1c1:
        test    eax, eax
        jz      L_d1ba
        add     eax, 0x59
        push    eax
        push    0x7abb64
        push    0x8ba6d4
        call    dword ptr [g_76b420]
        add     esp, 0xc
        jmp     L_d1f1
L_d1de:
        push    0x7abb54
L_d1e3:
        push    0x8ba6d4
        call    dword ptr [g_76b420]
        add     esp, 8
L_d1f1:
        mov     edx, dword ptr [esp + 0x14]
        test    dl, 0x20
        jz      L_d227
        or      ecx, -1
        xor     eax, eax
        mov     edi, 0x7abb4c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, -1
        mov     esi, edi
        mov     edi, 0x8ba6d4
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_d227:
        test    dl, 8
        jz      L_d259
        or      ecx, -1
        xor     eax, eax
        mov     edi, 0x7abb44
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, -1
        mov     esi, edi
        mov     edi, 0x8ba6d4
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_d259:
        test    dl, 0x10
        jz      L_d28b
        or      ecx, -1
        xor     eax, eax
        mov     edi, 0x7abb3c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, -1
        mov     esi, edi
        mov     edi, 0x8ba6d4
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_d28b:
        test    dh, 1
        jz      L_d2bd
        or      ecx, -1
        xor     eax, eax
        mov     edi, 0x7abb34
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, -1
        mov     esi, edi
        mov     edi, 0x8ba6d4
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_d2bd:
        test    dl, 0x80
        jz      L_d2ef
        or      ecx, -1
        xor     eax, eax
        mov     edi, 0x7abb28
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, -1
        mov     esi, edi
        mov     edi, 0x8ba6d4
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_d2ef:
        test    dh, 2
        jz      L_d321
        or      ecx, -1
        xor     eax, eax
        mov     edi, 0x7abb1c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, -1
        mov     esi, edi
        mov     edi, 0x8ba6d4
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_d321:
        pop     edi
        pop     esi
        mov     eax, 0x8ba6d4
        pop     ebx
        ret     8
    }
}
