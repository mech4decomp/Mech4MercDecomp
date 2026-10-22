/*
 * FUN_0071e160 (705 B) — file path resolution.
 *
 * Builds a full path to a file by trying the exe directory (via
 * __p__pgmptr/_splitpath), then the current directory, system directory,
 * and windows directory, appending the given filename. Returns the resolved
 * path buffer (DAT_0087d690) or NULL. RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b368;   /* IAT: __p__pgmptr */
extern void *g_76b370;   /* IAT: _splitpath */
extern char g_87d690[];
extern void *g_76b0e8;   /* IAT: CreateFileA */
extern void *g_76b0ec;   /* IAT: CloseHandle */
extern void *g_76b258;   /* IAT: GetCurrentDirectoryA */
extern void *g_76b248;   /* IAT: GetSystemDirectoryA */
extern void *g_76b088;   /* IAT: GetWindowsDirectoryA */

__declspec(naked) void FUN_0071e160(void)
{
    __asm {
        sub     esp, 0x404
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     eax, [esp + 0x214]
        push    eax
        lea     ecx, [esp + 0x318]
        push    ecx
        lea     edx, [esp + 0x11c]
        push    edx
        lea     eax, [esp + 0x1c]
        push    eax
        call    dword ptr [g_76b368]
        mov     ecx, dword ptr [eax]
        push    ecx
        call    dword ptr [g_76b370]
        or      ecx, 0xffffffff
        add     esp, 0x14
        xor     eax, eax
        lea     edi, [esp + 0x10]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, 0x87d690
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        lea     edi, [esp + 0x114]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x87d690
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ebx, dword ptr [esp + 0x418]
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     ebp, dword ptr [g_76b0e8]
        mov     esi, edi
        mov     edi, 0x87d690
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        push    eax
        dec     edi
        rep     movsd
        push    eax
        push    0x3
        push    eax
        push    0x1
        mov     ecx, edx
        push    0x80000000
        and     ecx, 0x3
        push    0x87d690
        rep     movsb
        call    ebp
        cmp     eax, -0x1
        jz      L_71e250
        push    eax
        call    dword ptr [g_76b0ec]
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x87d690
        pop     ebx
        add     esp, 0x404
        ret     0x4
L_71e250:
        push    0x87d690
        push    0x104
        call    dword ptr [g_76b258]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76c5a8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x87d690
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x87d690
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        push    eax
        dec     edi
        rep     movsd
        push    eax
        push    0x3
        push    eax
        push    0x1
        mov     ecx, edx
        push    0x80000000
        and     ecx, 0x3
        push    0x87d690
        rep     movsb
        call    ebp
        cmp     eax, -0x1
        jz      L_71e2e6
        push    eax
        call    dword ptr [g_76b0ec]
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x87d690
        pop     ebx
        add     esp, 0x404
        ret     0x4
L_71e2e6:
        push    0x104
        push    0x87d690
        call    dword ptr [g_76b248]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76c5a8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x87d690
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x87d690
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        push    eax
        dec     edi
        rep     movsd
        push    eax
        push    0x3
        push    eax
        push    0x1
        mov     ecx, edx
        push    0x80000000
        and     ecx, 0x3
        push    0x87d690
        rep     movsb
        call    ebp
        cmp     eax, -0x1
        jz      L_71e37c
        push    eax
        call    dword ptr [g_76b0ec]
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x87d690
        pop     ebx
        add     esp, 0x404
        ret     0x4
L_71e37c:
        push    0x104
        push    0x87d690
        call    dword ptr [g_76b088]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76c5a8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x87d690
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x87d690
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        push    eax
        dec     edi
        rep     movsd
        push    eax
        push    0x3
        push    eax
        push    0x1
        mov     ecx, edx
        push    0x80000000
        and     ecx, 0x3
        push    0x87d690
        rep     movsb
        call    ebp
        cmp     eax, -0x1
        jz      L_71e412
        push    eax
        call    dword ptr [g_76b0ec]
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x87d690
        pop     ebx
        add     esp, 0x404
        ret     0x4
L_71e412:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x404
        ret     0x4
    }
}
