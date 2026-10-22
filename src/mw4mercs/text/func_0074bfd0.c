/*
 * FUN_0074BFD0 (327 B) — LZW decompressor core. Reads codes via
 * FUN_0074bf60, expands dictionary entries into the output buffer,
 * maintaining the dictionary tables at DAT_008b8e32/36/38/3c/40.
 *
 * __stdcall, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_8b8e32;       /* DAT_008b8e32 bit count */
extern unsigned short g_8b8e36;       /* DAT_008b8e36 dict index */
extern char *g_8b8e38;                /* DAT_008b8e38 dict */
extern char *g_8b8e3c;                /* DAT_008b8e3c */
extern unsigned short *g_8b8e40;      /* DAT_008b8e40 */

extern void __cdecl FUN_0074bda0(void);
extern void __cdecl FUN_0074bd70(void);
extern int __cdecl FUN_0074bf60(void *p, int n);
extern int __cdecl FUN_0074be60(int a, int b);
extern void __cdecl FUN_0074be30(void);

__declspec(naked) int __stdcall FUN_0074BFD0(void *param_1, char *param_2)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], 0x0
        call    FUN_0074bda0
        call    FUN_0074bd70
        movsx   eax, word ptr [g_8b8e32]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        call    FUN_0074bf60
        cmp     ax, 0x100
        mov     dword ptr [esp + 0x14], eax
        jz      L_c104
        mov     ebp, dword ptr [esp + 0x20]
        jmp     L_c013
L_c00f:
        mov     eax, dword ptr [esp + 0x14]
L_c013:
        mov     byte ptr [ebp], al
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x10]
        inc     ebp
        inc     eax
        mov     dword ptr [esp + 0x10], eax
L_c022:
        movsx   edx, word ptr [g_8b8e32]
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_0074bf60
        mov     edi, eax
        cmp     di, 0x100
        jz      L_c104
        cmp     di, 0x102
        jz      L_c0df
        cmp     di, 0x101
        jnz     L_c05c
        inc     word ptr [g_8b8e32]
        jmp     L_c022
L_c05c:
        cmp     di, word ptr [g_8b8e36]
        jc      L_c076
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [g_8b8e38]
        push    edx
        mov     byte ptr [ecx], bl
        push    0x1
        jmp     L_c079
L_c076:
        push    edi
        push    0x0
L_c079:
        call    FUN_0074be60
        mov     edx, dword ptr [g_8b8e38]
        mov     ecx, eax
        and     ecx, 0xffff
        test    ax, ax
        movsx   bx, byte ptr [ecx + edx - 1]
        lea     esi, [ecx + edx]
        jbe     L_c0a9
        add     dword ptr [esp + 0x10], ecx
L_c09e:
        mov     al, byte ptr [esi - 1]
        dec     esi
        mov     byte ptr [ebp], al
        inc     ebp
        dec     ecx
        jnz     L_c09e
L_c0a9:
        mov     cx, word ptr [g_8b8e36]
        mov     edx, dword ptr [g_8b8e40]
        mov     si, word ptr [esp + 0x14]
        xor     eax, eax
        mov     ax, cx
        inc     cx
        mov     word ptr [g_8b8e36], cx
        mov     dword ptr [esp + 0x14], edi
        mov     word ptr [edx + eax*2], si
        mov     edx, dword ptr [g_8b8e3c]
        mov     byte ptr [eax + edx], bl
        jmp     L_c022
L_c0df:
        call    FUN_0074bd70
        movsx   eax, word ptr [g_8b8e32]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        call    FUN_0074bf60
        cmp     ax, 0x100
        mov     dword ptr [esp + 0x14], eax
        jnz     L_c00f
L_c104:
        call    FUN_0074be30
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x8
    }
}
