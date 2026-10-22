/*
 * FUN_007218F0 (496 B) — __cdecl, no params.
 *
 * Image/bitmap writer: if [g_0085a214] is set, opens a file via
 * FUN_007353f0, allocates a buffer via IAT 0x76b294, writes a BMP-style
 * header, and packs pixel data (converting 16-bit values via
 * FUN_00742970) into the buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0085a214;
extern char g_0087dd0a;
extern int g_007b73cc;
extern int g_008a9868;
extern void *g_0076b294;

extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_00742970(void);
extern void __cdecl FUN_00735440(void);

__declspec(naked) int __cdecl FUN_007218F0(void)
{
    __asm {
        mov     eax, dword ptr [g_0085a214]
        sub     esp, 0xc4
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        push    edi
        je      L_721ad2
        push    0
        push    0x811
        lea     ecx, [esp + 0x60]
        push    ecx
        push    0
        push    eax
        mov     dword ptr [esp + 0x6c], 0x7c
        mov     byte ptr [g_0087dd0a], 1
        call    FUN_007353f0
        test    eax, eax
        mov     byte ptr [g_0087dd0a], 0
        jl      L_721ad2
        mov     ecx, dword ptr [g_007b73cc]
        mov     eax, dword ptr [esp + 0x60]
        mov     esi, dword ptr [esp + 0x64]
        mov     edi, dword ptr [esp + 0x68]
        mov     ebp, dword ptr [esp + 0x7c]
        xor     edx, edx
        cmp     ecx, 1
        setne   dl
        mov     ebx, eax
        imul    eax, esi
        dec     edx
        and     edx, 0x36
        lea     eax, [eax + eax*2]
        add     eax, edx
        push    eax
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x30], esi
        mov     dword ptr [g_008a9868], eax
        call    dword ptr [g_0076b294]
        mov     edx, eax
        add     esp, 4
        test    edx, edx
        mov     dword ptr [esp + 0x28], edx
        je      L_721ad2
        mov     eax, dword ptr [g_007b73cc]
        test    eax, eax
        je      L_721a26
        xor     ecx, ecx
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], ecx
        mov     word ptr [esp + 0x20], cx
        xor     eax, eax
        mov     ecx, 0xa
        lea     edi, [esp + 0x30]
        rep     stosd
        mov     eax, dword ptr [g_008a9868]
        mov     dword ptr [esp + 0x16], eax
        mov     word ptr [esp + 0x14], 0x4d42
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, edx
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [ecx + 4], eax
        mov     dword ptr [esp + 0x1e], 0x36
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [ecx + 8], eax
        mov     ax, word ptr [esp + 0x20]
        mov     dword ptr [esp + 0x34], esi
        mov     word ptr [ecx + 0xc], ax
        lea     edi, [edx + 0xe]
        mov     ecx, 0xa
        lea     esi, [esp + 0x30]
        mov     dword ptr [esp + 0x30], 0x28
        mov     dword ptr [esp + 0x38], ebx
        mov     word ptr [esp + 0x3c], 1
        mov     word ptr [esp + 0x3e], 0x18
        mov     dword ptr [esp + 0x40], 0
        rep     movsd
        mov     edi, dword ptr [esp + 0x10]
L_721a26:
        mov     ecx, dword ptr [g_007b73cc]
        mov     esi, ecx
        neg     esi
        sbb     esi, esi
        and     esi, 0x36
        add     esi, edx
        test    ecx, ecx
        je      L_721a43
        lea     eax, [ebx - 1]
        imul    eax, edi
        jmp     L_721a45
L_721a43:
        xor     eax, eax
L_721a45:
        add     eax, ebp
        test    ebx, ebx
        mov     dword ptr [esp + 0x24], eax
        jle     L_721ab5
        mov     dword ptr [esp + 0x10], ebx
L_721a53:
        mov     eax, dword ptr [esp + 0x2c]
        test    eax, eax
        jle     L_721a98
        mov     ebx, eax
L_721a5d:
        cmp     dword ptr [esp + 0xac], 0x20
        jne     L_721a6f
        mov     eax, dword ptr [ebp]
        add     ebp, 4
        jmp     L_721a7e
L_721a6f:
        xor     ecx, ecx
        mov     cx, word ptr [ebp]
        push    ecx
        call    FUN_00742970
        add     ebp, 2
L_721a7e:
        mov     byte ptr [esi], al
        inc     esi
        mov     edx, eax
        shr     edx, 8
        mov     byte ptr [esi], dl
        inc     esi
        shr     eax, 0x10
        mov     byte ptr [esi], al
        inc     esi
        dec     ebx
        jne     L_721a5d
        mov     ecx, dword ptr [g_007b73cc]
L_721a98:
        test    ecx, ecx
        mov     ebp, edi
        je      L_721aa0
        neg     ebp
L_721aa0:
        mov     eax, dword ptr [esp + 0x24]
        add     ebp, eax
        mov     eax, dword ptr [esp + 0x10]
        dec     eax
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x10], eax
        jne     L_721a53
L_721ab5:
        mov     ecx, dword ptr [g_0085a214]
        push    0
        push    ecx
        call    FUN_00735440
        mov     eax, dword ptr [esp + 0x28]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc4
        ret
L_721ad2:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0xc4
        ret
    }
}
