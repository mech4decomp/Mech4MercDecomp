/*
 * FUN_5e03157c (581 B) - codepage table builder. Initializes the
 * byte/wide translation tables (DAT_5e77aaac / DAT_5e77aab0) used by
 * the string conversion layer. Queries the installed codepage via
 * GetCPInfo, builds a 0x100-entry byte table and a 0x100-entry wide
 * table, and records lead-byte ranges in DAT_5e0391b4.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_5e033065(int, int, int, void *);
extern void *__cdecl FUN_5e02b6e4(int);
extern void __cdecl FUN_5e02b69c(void *);
extern int __cdecl FUN_5e02f5b3(int, void *, int, void *, int, int, int);
extern int __cdecl FUN_5e0331a3(int, void *, int, void *, int, int);

extern int g_5e77aa7c;   /* DAT_5e77aa7c */
extern int g_5e77aa8c;   /* DAT_5e77aa8c */
extern unsigned short g_5e77aac0; /* DAT_5e77aac0 */
extern int *g_5e0350b8;  /* IAT: GetCPInfo */
extern int g_5e0391b4;   /* DAT_5e0391b4 */
extern int g_5e0391c0;   /* PTR_DAT_5e0391c0 */
extern int g_5e0391c4;   /* PTR_DAT_5e0391c4 */
extern int g_5e77aaac;   /* DAT_5e77aaac */
extern int g_5e77aab0;   /* DAT_5e77aab0 */

__declspec(naked) void FUN_5e03157c(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x24
        push    ebx
        xor     ebx, ebx
        cmp     dword ptr [g_5e77aa7c], ebx
        mov     dword ptr [ebp-4], ebx
        mov     dword ptr [ebp-8], ebx
        jz      L1789
        cmp     dword ptr [g_5e77aa8c], ebx
        push    esi
        push    edi
        jnz     L15c4
        movzx   eax, word ptr [g_5e77aac0]
        push    0x5e77aa8c
        push    0x1004
        push    eax
        push    ebx
        call    FUN_5e033065
        add     esp, 0x10
        test    eax, eax
        jnz     L1772
    L15c4:
        mov     esi, 0x202
        push    esi
        call    FUN_5e02b6e4
        mov     edi, eax
        push    esi
        mov     dword ptr [ebp-0x10], edi
        call    FUN_5e02b6e4
        push    0x101
        mov     dword ptr [ebp-0xc], eax
        call    FUN_5e02b6e4
        push    esi
        mov     dword ptr [ebp-4], eax
        call    FUN_5e02b6e4
        add     esp, 0x10
        cmp     edi, ebx
        mov     dword ptr [ebp-8], eax
        jz      L1772
        cmp     dword ptr [ebp-0xc], ebx
        jz      L1772
        cmp     dword ptr [ebp-4], ebx
        jz      L1772
        cmp     eax, ebx
        jz      L1772
        xor     eax, eax
        mov     esi, 0x100
    L161f:
        mov     ecx, dword ptr [ebp-4]
        mov     byte ptr [eax+ecx], al
        inc     eax
        cmp     eax, esi
        jl      L161f
        lea     eax, [ebp-0x24]
        push    eax
        push    dword ptr [g_5e77aa8c]
        call    dword ptr [g_5e0350b8]
        test    eax, eax
        jz      L1772
        cmp     dword ptr [ebp-0x24], 2
        ja      L1772
        movzx   eax, word ptr [ebp-0x24]
        cmp     eax, 1
        mov     dword ptr [g_5e0391b4], eax
        jle     L1686
        cmp     byte ptr [ebp-0x1e], bl
        jz      L1686
        lea     eax, [ebp-0x1d]
    L1662:
        mov     dl, byte ptr [eax]
        cmp     dl, bl
        jz      L1686
        movzx   ecx, byte ptr [eax-1]
        movzx   edx, dl
    L166f:
        cmp     ecx, edx
        jg      L167f
        mov     edx, dword ptr [ebp-4]
        mov     byte ptr [ecx+edx], bl
        inc     ecx
        movzx   edx, byte ptr [eax]
        jmp     L166f
    L167f:
        inc     eax
        inc     eax
        cmp     byte ptr [eax-1], bl
        jnz     L1662
    L1686:
        push    ebx
        lea     eax, [edi+2]
        push    ebx
        push    ebx
        push    eax
        push    esi
        push    dword ptr [ebp-4]
        push    1
        call    FUN_5e02f5b3
        add     esp, 0x1c
        test    eax, eax
        jz      L1772
        mov     ecx, dword ptr [ebp-8]
        mov     word ptr [edi], bx
        xor     eax, eax
    L16ab:
        mov     word ptr [ecx], ax
        inc     ecx
        inc     ecx
        inc     eax
        cmp     eax, esi
        jl      L16ab
        mov     eax, dword ptr [ebp-0xc]
        push    ebx
        push    ebx
        lea     edi, [eax+2]
        push    edi
        push    esi
        push    dword ptr [ebp-8]
        push    1
        call    FUN_5e0331a3
        add     esp, 0x18
        test    eax, eax
        jz      L1772
        mov     eax, dword ptr [ebp-0xc]
        mov     word ptr [eax], bx
        cmp     dword ptr [g_5e0391b4], 1
        jle     L1719
        cmp     byte ptr [ebp-0x1e], bl
        jz      L1719
        lea     eax, [ebp-0x1d]
    L16eb:
        mov     cl, byte ptr [eax]
        cmp     cl, bl
        jz      L1719
        movzx   esi, byte ptr [eax-1]
        movzx   ecx, cl
        cmp     esi, ecx
        jg      L1712
        mov     ecx, dword ptr [ebp-0x10]
        lea     ecx, [ecx+esi*2+2]
    L1703:
        mov     word ptr [ecx], 0x8000
        inc     esi
        movzx   edx, byte ptr [eax]
        inc     ecx
        inc     ecx
        cmp     esi, edx
        jle     L1703
    L1712:
        inc     eax
        inc     eax
        cmp     byte ptr [eax-1], bl
        jnz     L16eb
    L1719:
        mov     eax, dword ptr [ebp-0x10]
        mov     dword ptr [g_5e0391c4], edi
        add     eax, 2
        mov     dword ptr [g_5e0391c0], eax
        mov     eax, dword ptr [g_5e77aaac]
        cmp     eax, ebx
        jz      L173a
        push    eax
        call    FUN_5e02b69c
        pop     ecx
    L173a:
        mov     eax, dword ptr [ebp-0x10]
        mov     dword ptr [g_5e77aaac], eax
        mov     eax, dword ptr [g_5e77aab0]
        cmp     eax, ebx
        jz      L1752
        push    eax
        call    FUN_5e02b69c
        pop     ecx
    L1752:
        mov     eax, dword ptr [ebp-0xc]
        mov     dword ptr [g_5e77aab0], eax
    L175a:
        push    dword ptr [ebp-4]
        call    FUN_5e02b69c
        push    dword ptr [ebp-8]
        call    FUN_5e02b69c
        pop     ecx
        mov     eax, ebx
        pop     ecx
        pop     edi
        pop     esi
        jmp     L17be
    L1772:
        push    dword ptr [ebp-0x10]
        call    FUN_5e02b69c
        push    dword ptr [ebp-0xc]
        call    FUN_5e02b69c
        pop     ecx
        pop     ecx
        push    1
        pop     ebx
        jmp     L175a
    L1789:
        push    dword ptr [g_5e77aaac]
        mov     eax, 0x5e0391ca
        mov     dword ptr [g_5e0391c0], eax
        mov     dword ptr [g_5e0391c4], eax
        call    FUN_5e02b69c
        push    dword ptr [g_5e77aab0]
        call    FUN_5e02b69c
        pop     ecx
        mov     dword ptr [g_5e77aaac], ebx
        pop     ecx
        mov     dword ptr [g_5e77aab0], ebx
        xor     eax, eax
    L17be:
        pop     ebx
        leave
        ret
    }
}
