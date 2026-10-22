/*
 * FUN_1000b210 (563 B) - __cdecl. Registry read helper with SEH frame.
 * Builds a registry subkey path from up to three wide-string components
 * (static Software\Microsoft\... path, static Titles\..., and param_1),
 * opens the key, queries a value named by param_2, and formats the
 * result into param_3 via swprintf. Returns 0 on success or 0x80040250.
 *
 * __cdecl, 3 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210f4;   /* wcslen IAT @ 0x100210f4 */
extern void *g_1002106c;   /* WideCharToMultiByte IAT @ 0x1002106c */
extern void *g_10021008;   /* RegOpenKeyExA IAT @ 0x10021008 */
extern void *g_1002100c;   /* RegQueryValueExA IAT @ 0x1002100c */
extern void *g_100210ec;   /* free IAT @ 0x100210ec */
extern void *g_10021138;   /* swprintf IAT @ 0x10021138 */
extern void *g_10021010;   /* RegCloseKey IAT @ 0x10021010 */
extern unsigned short g_100261f4;   /* wide string @ 0x100261f4 */
extern unsigned short g_100261e4;   /* wide string @ 0x100261e4 */
extern void __cdecl FUN_100016b0(void *, void *, int);
extern void __cdecl FUN_1000b1d0(void);
extern void __cdecl FUN_1000a0d0(void);

__declspec(naked) int __cdecl FUN_1000b210(void)
{
    __asm {
        push    -0x1
        push    0x1001f95b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x6a4
        push    ebx
        xor     ebx, ebx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x2c], 0x400
        mov     edi, dword ptr [g_100210f4]
        mov     eax, 0x100261f4
        test    eax, eax
        mov     dword ptr [esp + 0x6b8], ebx
        jz      L_after1
        cmp     word ptr [g_100261f4], bx
        jz      L_after1
        push    eax
        call    edi
        add     esp, 0x4
        lea     ecx, [esp + 0x18]
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
        lea     ecx, [esp + 0x18]
        shl     eax, 0x1
        push    eax
        push    0x100261e4
        call    FUN_100016b0
L_after2:
        mov     esi, dword ptr [esp + 0x6c0]
        cmp     esi, ebx
        jz      L_after3
        cmp     word ptr [esi], bx
        jz      L_after3
        push    esi
        call    edi
        add     esp, 0x4
        lea     ecx, [esp + 0x18]
        shl     eax, 0x1
        push    eax
        push    esi
        call    FUN_100016b0
L_after3:
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, ebx
        mov     eax, dword ptr [esp + 0x18]
        ja      L_use
        mov     eax, 0x100274ec
L_use:
        mov     esi, dword ptr [g_1002106c]
        push    ebx
        push    ebx
        lea     edx, [esp + 0xb8]
        push    0x200
        push    edx
        push    -0x1
        push    eax
        push    ebx
        push    ebx
        call    esi
        lea     eax, [esp + 0x10]
        lea     ecx, [esp + 0xb0]
        push    eax
        push    0x20019
        push    ebx
        push    ecx
        push    0x80000002
        call    dword ptr [g_10021008]
        test    eax, eax
        jz      L_regok
        push    0x100261c8
        call    FUN_1000b1d0
        add     esp, 0x4
        jmp     L_cleanup
L_regok:
        mov     eax, dword ptr [esp + 0x6c4]
        push    ebx
        push    ebx
        lea     edx, [esp + 0xb8]
        push    0x200
        push    edx
        push    -0x1
        push    eax
        push    ebx
        push    ebx
        mov     dword ptr [esp + 0x2c], 0xfffffeb3
        mov     byte ptr [esp + 0x2d0], bl
        mov     dword ptr [esp + 0x34], 0x400
        call    esi
        lea     ecx, [esp + 0x14]
        lea     edx, [esp + 0x2b0]
        push    ecx
        lea     eax, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0xbc]
        push    ebx
        push    ecx
        push    edx
        call    dword ptr [g_1002100c]
        test    eax, eax
        jz      L_queryok
        push    0x100261a8
        call    FUN_1000b1d0
        add     esp, 0x4
        jmp     L_cleanup
L_queryok:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, 0x1
        jz      L_type1
        cmp     eax, 0xfffffeb3
        jz      L_type2
        push    eax
        push    0x1002615c
        call    FUN_1000a0d0
        add     esp, 0x8
L_cleanup:
        cmp     dword ptr [esp + 0x24], ebx
        jbe     L_nofree
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        jz      L_nofree
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
L_nofree:
        mov     eax, 0x80040250
        jmp     L_ret
L_type2:
        push    0x10026104
        call    FUN_1000a0d0
        add     esp, 0x4
        jmp     L_cleanup
L_type1:
        mov     ecx, dword ptr [esp + 0x6c8]
        lea     eax, [esp + 0x2b0]
        push    eax
        push    0x100260fc
        push    ecx
        call    dword ptr [g_10021138]
        mov     edx, dword ptr [esp + 0x1c]
        add     esp, 0xc
        push    edx
        call    dword ptr [g_10021010]
        cmp     dword ptr [esp + 0x24], ebx
        jbe     L_nofree2
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        jz      L_nofree2
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
L_nofree2:
        xor     eax, eax
L_ret:
        mov     ecx, dword ptr [esp + 0x6b0]
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x6b0
        ret
    }
}
