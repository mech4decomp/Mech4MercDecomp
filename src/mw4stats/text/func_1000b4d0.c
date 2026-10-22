/*
 * FUN_1000b4d0 (515 B) - __cdecl. Registry write helper with SEH frame.
 * Builds a registry subkey path from up to three wide-string components,
 * creates/opens the key (RegCreateKeyExA), converts param_2/param_3 to
 * ANSI, and writes param_3's value via RegSetValueExA. Returns the
 * LSTATUS (0 on success).
 *
 * __cdecl, 3 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210f4;   /* wcslen IAT @ 0x100210f4 */
extern void *g_1002106c;   /* WideCharToMultiByte IAT @ 0x1002106c */
extern void *g_10021004;   /* RegCreateKeyExA IAT @ 0x10021004 */
extern void *g_10021000;   /* RegSetValueExA IAT @ 0x10021000 */
extern void *g_10021010;   /* RegCloseKey IAT @ 0x10021010 */
extern void *g_100210ec;   /* free IAT @ 0x100210ec */
extern unsigned short g_100261f4;   /* wide string @ 0x100261f4 */
extern unsigned short g_100261e4;   /* wide string @ 0x100261e4 */
extern void __cdecl FUN_100016b0(void *, void *, int);
extern void __cdecl FUN_1000b1d0(void);

__declspec(naked) int __cdecl FUN_1000b4d0(void)
{
    __asm {
        push    -0x1
        push    0x1001f97b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x4a0
        push    ebx
        xor     ebx, ebx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x28], 0x400
        mov     edi, dword ptr [g_100210f4]
        mov     eax, 0x100261f4
        test    eax, eax
        mov     dword ptr [esp + 0x4b4], ebx
        jz      L_after1
        cmp     word ptr [g_100261f4], bx
        jz      L_after1
        push    eax
        call    edi
        add     esp, 0x4
        lea     ecx, [esp + 0x14]
        shl     eax, 0x1
        push    eax
        push    0x100261f4
        call    FUN_100016b0
L_after1:
        mov     ecx, 0x100261e4
        test    ecx, ecx
        jz      L_after2
        cmp     word ptr [g_100261e4], bx
        jz      L_after2
        push    ecx
        call    edi
        add     esp, 0x4
        lea     ecx, [esp + 0x14]
        shl     eax, 0x1
        push    eax
        push    0x100261e4
        call    FUN_100016b0
L_after2:
        mov     esi, dword ptr [esp + 0x4bc]
        cmp     esi, ebx
        jz      L_after3
        cmp     word ptr [esi], bx
        jz      L_after3
        push    esi
        call    edi
        add     esp, 0x4
        lea     ecx, [esp + 0x14]
        shl     eax, 0x1
        push    eax
        push    esi
        call    FUN_100016b0
L_after3:
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, ebx
        mov     eax, dword ptr [esp + 0x14]
        ja      L_use
        mov     eax, 0x100274ec
L_use:
        mov     edi, dword ptr [g_1002106c]
        push    ebx
        push    ebx
        lea     edx, [esp + 0xb4]
        push    0x200
        push    edx
        push    -0x1
        push    eax
        push    ebx
        push    ebx
        call    edi
        lea     eax, [esp + 0x10]
        lea     ecx, [esp + 0xc]
        push    eax
        push    ecx
        push    ebx
        push    0x20006
        push    ebx
        push    ebx
        lea     edx, [esp + 0xc4]
        push    ebx
        push    edx
        push    0x80000002
        call    dword ptr [g_10021004]
        mov     esi, eax
        cmp     esi, ebx
        jz      L_regok
        push    0x10026280
        call    FUN_1000b1d0
        add     esp, 0x4
        jmp     L_cleanup
L_regok:
        mov     ecx, dword ptr [esp + 0x4c0]
        push    ebx
        push    ebx
        lea     eax, [esp + 0xb4]
        push    0x200
        push    eax
        push    -0x1
        push    ecx
        push    ebx
        push    ebx
        call    edi
        mov     eax, dword ptr [esp + 0x4c4]
        push    ebx
        push    ebx
        lea     edx, [esp + 0x2b4]
        push    0x200
        push    edx
        push    -0x1
        push    eax
        push    ebx
        push    ebx
        call    edi
        lea     edi, [esp + 0x2ac]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edx, [esp + 0xac]
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, dword ptr [esp + 0xc]
        shl     ecx, 0x1
        push    ecx
        lea     ecx, [esp + 0x2b0]
        push    ecx
        push    0x1
        push    ebx
        push    edx
        push    eax
        call    dword ptr [g_10021000]
        mov     esi, eax
        cmp     esi, ebx
        jz      L_setok
        push    0x10026264
        call    FUN_1000b1d0
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x4
        cmp     eax, ebx
        jbe     L_nofree1
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      L_nofree1
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
L_nofree1:
        xor     eax, eax
        jmp     L_ret
L_setok:
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        call    dword ptr [g_10021010]
L_cleanup:
        cmp     dword ptr [esp + 0x20], ebx
        jbe     L_nofree2
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      L_nofree2
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
L_nofree2:
        mov     eax, esi
L_ret:
        mov     ecx, dword ptr [esp + 0x4ac]
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x4ac
        ret
    }
}
