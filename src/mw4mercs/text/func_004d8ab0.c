/*
 * FUN_004d8ab0 (560 B) — builds a game-server info string by repeatedly
 * sprintf'ing into a 200-byte local buffer and strncat'ing onto param_2.
 * __stdcall RET 0x10 (3 args: param_1, param_2, param_3).
 * sprintf loaded into EDI via IAT 0x0076b420; strncat via IAT 0x0076b2f8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_76b420)(void);   /* IAT: sprintf */
extern int (__cdecl *g_76b2f8)(void);   /* IAT: strncat */

__declspec(naked) void FUN_004d8ab0(void)
{
    __asm {
        sub     esp, 0xc8
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp+0xd8]   /* param_1 */
        push    edi
        mov     edi, dword ptr [g_76b420]   /* sprintf */
        lea     eax, [esi+0x15d8]
        push    eax
        push    0x771c90                    /* "hostname" */
        lea     ecx, [esp+0x18]
        push    0x773098                    /* "\\%s\\%s" */
        push    ecx
        call    edi                         /* sprintf */
        mov     ebx, dword ptr [esp+0xf4]   /* param_3 */
        mov     ebp, dword ptr [esp+0xf0]   /* param_2 */
        push    ebx
        lea     edx, [esp+0x24]
        push    edx
        push    ebp
        call    dword ptr [g_76b2f8]        /* strncat */
        mov     eax, dword ptr [esi+0x17c4]
        push    eax
        push    0x771c9c                    /* "hostport" */
        lea     ecx, [esp+0x34]
        push    0x773090                    /* "\\%s\\%d" */
        push    ecx
        call    edi
        push    ebx
        lea     edx, [esp+0x40]
        push    edx
        push    ebp
        call    dword ptr [g_76b2f8]
        lea     eax, [esi+0x1678]
        push    eax
        push    0x771c50                    /* "mapname" */
        lea     ecx, [esp+0x50]
        push    0x773098
        push    ecx
        call    edi
        add     esp, 0x48
        push    ebx
        lea     edx, [esp+0x14]
        push    edx
        push    ebp
        call    dword ptr [g_76b2f8]
        lea     eax, [esi+0x16c8]
        push    eax
        push    0x771c2c                    /* "gametype" */
        lea     ecx, [esp+0x24]
        push    0x773098
        push    ecx
        call    edi
        push    ebx
        lea     edx, [esp+0x30]
        push    edx
        push    ebp
        call    dword ptr [g_76b2f8]
        mov     eax, dword ptr [esi+0x17bc]
        push    eax
        push    0x771c38                    /* "numplayers" */
        lea     ecx, [esp+0x40]
        push    0x773090
        push    ecx
        call    edi
        push    ebx
        lea     edx, [esp+0x4c]
        push    edx
        push    ebp
        call    dword ptr [g_76b2f8]
        mov     eax, dword ptr [esi+0x17c0]
        add     esp, 0x44
        push    eax
        push    0x771c44                    /* "maxplayers" */
        lea     ecx, [esp+0x18]
        push    0x773090
        push    ecx
        call    edi
        push    ebx
        lea     edx, [esp+0x24]
        push    edx
        push    ebp
        call    dword ptr [g_76b2f8]
        push    0x76b768                    /* &DAT_0076b768 */
        push    0x771ca8                    /* "gamemode" */
        lea     eax, [esp+0x34]
        push    0x773098
        push    eax
        call    edi
        push    ebx
        lea     ecx, [esp+0x40]
        push    ecx
        push    ebp
        call    dword ptr [g_76b2f8]
        push    0x76b768
        push    0x771ce8                    /* "flags" */
        lea     edx, [esp+0x50]
        push    0x773090
        push    edx
        call    edi
        add     esp, 0x48
        push    ebx
        lea     eax, [esp+0x14]
        push    eax
        push    ebp
        call    dword ptr [g_76b2f8]
        lea     ecx, [esi+0x1628]
        push    ecx
        push    0x771cf0                    /* "passworded" */
        lea     edx, [esp+0x24]
        push    0x773098
        push    edx
        call    edi
        push    ebx
        lea     eax, [esp+0x30]
        push    eax
        push    ebp
        call    dword ptr [g_76b2f8]
        mov     ecx, dword ptr [esi+0x17f0]
        push    ecx
        push    0x771ce8                    /* "flags" */
        lea     edx, [esp+0x40]
        push    0x773088                    /* "\\%s\\%u" */
        push    edx
        call    edi
        push    ebx
        lea     eax, [esp+0x4c]
        push    eax
        push    ebp
        call    dword ptr [g_76b2f8]
        xor     ecx, ecx
        mov     cl, byte ptr [esi+0x17d7]
        add     esp, 0x44
        xor     edx, edx
        mov     dl, byte ptr [esi+0x17d6]
        xor     eax, eax
        mov     al, byte ptr [esi+0x17d5]
        push    ecx
        xor     ecx, ecx
        mov     cl, byte ptr [esi+0x17d4]
        push    edx
        xor     edx, edx
        mov     dl, byte ptr [esi+0x17d3]
        push    eax
        xor     eax, eax
        mov     al, byte ptr [esi+0x17d2]
        push    ecx
        xor     ecx, ecx
        mov     cl, byte ptr [esi+0x17d1]
        push    edx
        xor     edx, edx
        mov     dl, byte ptr [esi+0x17d0]
        push    eax
        xor     eax, eax
        mov     ax, word ptr [esi+0x17ce]
        push    ecx
        xor     ecx, ecx
        mov     cx, word ptr [esi+0x17cc]
        push    edx
        mov     edx, dword ptr [esi+0x17c8]
        push    eax
        push    ecx
        push    edx
        push    0x771c6c                    /* "\\%s\\{...}" */
        lea     eax, [esp+0x40]
        push    0x773050                    /* "guid" */
        push    eax
        call    edi
        push    ebx
        lea     ecx, [esp+0x4c]
        push    ecx
        push    ebp
        call    dword ptr [g_76b2f8]
        add     esp, 0x44
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc8
        ret     0x10
    }
}
