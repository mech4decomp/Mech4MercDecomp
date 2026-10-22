/*
 * FUN_00752890 (1436 B) — build a DSBCAPS flag string into the global buffer
 * at 0x008b9050.
 *
 * For each of 14 DSBCAPS flag bits set in param_1, appends "| " (if the
 * buffer is already non-empty) followed by the flag's name string. Returns
 * the buffer pointer (EAX = 0x008b9050).
 *
 * Each append is a strcat implemented with repne scasb (strlen) + rep movsd/
 * movsb (copy). The string literals live in .rdata and are loaded as
 * immediates (mov edi, imm32).
 *
 * __stdcall, RET 4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_8b9050;      /* DAT_008b9050 - output buffer */

__declspec(naked) void *__stdcall FUN_00752890(unsigned int param_1)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        test    dl, 0x10
        push    ebx
        push    esi
        push    edi
        mov     byte ptr [g_8b9050], 0x0
        jz      L_528d0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad8a8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_528d0:
        test    dl, 0x20
        jz      L_52938
        mov     al, byte ptr [g_8b9050]
        test    al, al
        jz      L_5290b
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_5290b:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad890
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52938:
        test    dl, 0x40
        jz      L_529a0
        mov     al, byte ptr [g_8b9050]
        test    al, al
        jz      L_52973
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52973:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad87c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_529a0:
        test    dh, 0x1
        jz      L_52a08
        mov     al, byte ptr [g_8b9050]
        test    al, al
        jz      L_529db
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_529db:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad860
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52a08:
        test    dl, 0x80
        jz      L_52a70
        mov     al, byte ptr [g_8b9050]
        test    al, al
        jz      L_52a43
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52a43:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad84c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52a70:
        test    edx, 0x10000
        jz      L_52adb
        mov     al, byte ptr [g_8b9050]
        test    al, al
        jz      L_52aae
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52aae:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad82c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52adb:
        test    dh, 0x80
        jz      L_52b43
        mov     al, byte ptr [g_8b9050]
        test    al, al
        jz      L_52b16
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52b16:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad814
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52b43:
        test    edx, 0x40000
        jz      L_52bae
        mov     al, byte ptr [g_8b9050]
        test    al, al
        jz      L_52b81
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52b81:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad800
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52bae:
        test    dl, 0x4
        jz      L_52c16
        mov     al, byte ptr [g_8b9050]
        test    al, al
        jz      L_52be9
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52be9:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad7e8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52c16:
        test    dl, 0x8
        jz      L_52c7e
        mov     al, byte ptr [g_8b9050]
        test    al, al
        jz      L_52c51
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52c51:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad7d0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52c7e:
        test    edx, 0x20000
        jz      L_52ce9
        mov     al, byte ptr [g_8b9050]
        test    al, al
        jz      L_52cbc
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52cbc:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad7b0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52ce9:
        test    dl, 0x1
        jz      L_52d51
        mov     al, byte ptr [g_8b9050]
        test    al, al
        jz      L_52d24
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52d24:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad798
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52d51:
        test    dl, 0x2
        jz      L_52db9
        mov     al, byte ptr [g_8b9050]
        test    al, al
        jz      L_52d8c
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52d8c:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad788
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_52db9:
        test    dh, 0x40
        jz      L_52e21
        mov     al, byte ptr [g_8b9050]
        test    al, al
        jz      L_52df4
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
    L_52df4:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad770
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9050
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
    L_52e21:
        pop     edi
        pop     esi
        mov     eax, 0x8b9050
        pop     ebx
        ret     0x4
    }
}
