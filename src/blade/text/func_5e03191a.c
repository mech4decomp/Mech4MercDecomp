/*
 * FUN_5e03191a (381 B) - locale/string-table setup. Lazily resolves the
 * locale-info function pointer (DAT_5e77aaf8), parses the "american" /
 * "america" string tables, and fills the output buffers with codepage
 * and locale data.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_5e03204b(void);
extern void __cdecl FUN_5e031a97(void *, int, void *);
extern void __cdecl FUN_5e031aef(void);
extern void __cdecl FUN_5e031d7a(void);
extern void __cdecl FUN_5e031e8d(void);
extern void __cdecl FUN_5e031f4a(void);
extern int __cdecl FUN_5e031f64(int);
extern void __cdecl FUN_5e033368(int, int, int);

extern int g_5e77aaf8;   /* DAT_5e77aaf8 (locale-info fn ptr) */
extern int g_5e0350ec;   /* IAT: GetLocaleInfoA */
extern int g_5e77aae8;   /* DAT_5e77aae8 */
extern int g_5e77aaec;   /* DAT_5e77aaec */
extern int g_5e77aaf0;   /* DAT_5e77aaf0 */
extern int g_5e0350e8;   /* IAT: IsValidCodePage */
extern int g_5e77aad8;   /* DAT_5e77aad8 */
extern int g_5e0350e4;   /* IAT: IsValidLocale */
extern int g_5e77aaf4;   /* DAT_5e77aaf4 */

__declspec(naked) void FUN_5e03191a(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        cmp     dword ptr [g_5e77aaf8], ebx
        push    esi
        push    edi
        jnz     L1946
        call    FUN_5e03204b
        test    eax, eax
        jz      L193c
        mov     eax, dword ptr [g_5e0350ec]
        mov     dword ptr [g_5e77aaf8], eax
        jmp     L1946
    L193c:
        mov     dword ptr [g_5e77aaf8], 0x5e032081
    L1946:
        mov     esi, dword ptr [esp+0x10]
        cmp     esi, ebx
        jz      L19d2
        mov     dword ptr [g_5e77aae8], esi
        cmp     byte ptr [esi], bl
        jz      L1970
        push    0x5e77aae8
        push    0x40
        push    0x5e039dc0
        call    FUN_5e031a97
        add     esp, 0xc
    L1970:
        lea     eax, [esi+0x40]
        cmp     eax, ebx
        mov     dword ptr [g_5e77aaec], eax
        jz      L1999
        cmp     byte ptr [eax], bl
        jz      L1999
        push    0x5e77aaec
        push    0x16
        push    0x5e039d08
        call    FUN_5e031a97
        mov     eax, dword ptr [g_5e77aaec]
        add     esp, 0xc
    L1999:
        mov     ecx, dword ptr [g_5e77aae8]
        mov     dword ptr [g_5e77aaf0], ebx
        cmp     ecx, ebx
        jz      L19c3
        cmp     byte ptr [ecx], bl
        jz      L19c3
        cmp     eax, ebx
        jz      L19bc
        cmp     byte ptr [eax], bl
        jz      L19bc
        call    FUN_5e031aef
        jmp     L19d7
    L19bc:
        call    FUN_5e031d7a
        jmp     L19d7
    L19c3:
        cmp     eax, ebx
        jz      L19d2
        cmp     byte ptr [eax], bl
        jz      L19d2
        call    FUN_5e031e8d
        jmp     L19d7
    L19d2:
        call    FUN_5e031f4a
    L19d7:
        cmp     dword ptr [g_5e77aaf0], ebx
        jz      L1a91
        add     esi, 0x80
        push    esi
        call    FUN_5e031f64
        mov     edi, eax
        pop     ecx
        cmp     edi, ebx
        jz      L1a91
        movzx   eax, di
        push    eax
        call    dword ptr [g_5e0350e8]
        test    eax, eax
        jz      L1a91
        push    1
        push    dword ptr [g_5e77aad8]
        call    dword ptr [g_5e0350e4]
        test    eax, eax
        jz      L1a91
        mov     eax, dword ptr [esp+0x14]
        cmp     eax, ebx
        jz      L1a3f
        mov     cx, word ptr [g_5e77aad8]
        mov     word ptr [eax], cx
        mov     cx, word ptr [g_5e77aaf4]
        mov     word ptr [eax+2], cx
        mov     word ptr [eax+4], di
    L1a3f:
        mov     esi, dword ptr [esp+0x18]
        cmp     esi, ebx
        jz      L1a8c
        push    0x40
        push    esi
        push    0x1001
        push    dword ptr [g_5e77aad8]
        call    dword ptr [g_5e77aaf8]
        test    eax, eax
        jz      L1a91
        lea     eax, [esi+0x40]
        push    0x40
        push    eax
        push    0x1002
        push    dword ptr [g_5e77aaf4]
        call    dword ptr [g_5e77aaf8]
        test    eax, eax
        jz      L1a91
        add     esi, 0x80
        push    0xa
        push    esi
        push    edi
        call    FUN_5e033368
        add     esp, 0xc
    L1a8c:
        push    1
        pop     eax
        jmp     L1a93
    L1a91:
        xor     eax, eax
    L1a93:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
