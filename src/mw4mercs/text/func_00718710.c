/*
 * FUN_00718710 (575 B) — build a flag string into the global buffer at
 * 0x0087db4c from a bitmask. Each set bit appends a fixed string constant
 * (e.g. "ZERO ", "ONE ", "SRCCOLOR ", ...) to the buffer.
 *
 * __stdcall, RET 4 (one param). Returns pointer to the buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_87db4c[];   /* destination string buffer */
extern char g_7a34e8[];   /* "ZERO " */
extern char g_7a34e0[];   /* "ONE " */
extern char g_7a34d4[];   /* "SRCCOLOR " */
extern char g_7a34c4[];
extern char g_7a34b8[];
extern char g_7a34a8[];
extern char g_7a349c[];
extern char g_7a348c[];
extern char g_7a3480[];
extern char g_7a3470[];
extern char g_7a3460[];

__declspec(naked) char *__stdcall FUN_00718710(unsigned int param_1)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        test    dl, 0x1
        push    ebx
        push    esi
        push    edi
        mov     byte ptr [g_87db4c], 0
        jz      L1
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a34e8
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87db4c
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb
    L1:
        test    dl, 0x2
        jz      L2
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a34e0
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87db4c
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb
    L2:
        test    dl, 0x4
        jz      L3
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a34d4
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87db4c
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb
    L3:
        test    dl, 0x8
        jz      L4
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a34c4
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87db4c
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb
    L4:
        test    dl, 0x10
        jz      L5
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a34b8
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87db4c
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb
    L5:
        test    dl, 0x20
        jz      L6
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a34a8
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87db4c
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb
    L6:
        test    dl, 0x40
        jz      L7
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a349c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87db4c
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb
    L7:
        test    dl, 0x80
        jz      L8
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a348c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87db4c
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb
    L8:
        test    dh, 0x1
        jz      L9
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a3480
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87db4c
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb
    L9:
        test    dh, 0x2
        jz      L10
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a3470
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87db4c
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb
    L10:
        test    dh, 0x4
        jz      L11
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a3460
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87db4c
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
    L11:
        pop     edi
        pop     esi
        mov     eax, offset g_87db4c
        pop     ebx
        ret     0x4
    }
}
