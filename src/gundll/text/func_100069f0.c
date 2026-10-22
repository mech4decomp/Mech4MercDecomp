/*
 * FUN_100069f0 (220 B) - __thiscall, RET 0x10.
 * Constructor: stores params, computes a power-of-two mask from param_4,
 * allocates a node array (FUN_10001d50) and initializes each node's
 * doubly-linked-list self-pointers.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001add0(void);       /* rel32 call, 1 arg */
extern void __cdecl FUN_10001d50(void);       /* rel32 call, 1 arg */

__declspec(naked) void FUN_100069f0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0xfe
        mov     esi, ecx
        call    FUN_1001add0
        mov     ebp, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [esp + 0x20]
        xor     ebx, ebx
        mov     dword ptr [esi + 0xc], ebp
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0x10], ecx
        mov     dword ptr [esi + 0x24], ebx
        mov     dword ptr [esi + 0x28], ebx
        mov     edx, 0xf
    L_6a26:
        mov     cl, dl
        mov     eax, 0x1
        shl     eax, cl
        mov     ecx, eax
        and     ecx, edi
        test    cx, cx
        mov     word ptr [esi + 0x2], ax
        jnz     L_6a44
        add     edx, 0xffff
        jmp     L_6a26
    L_6a44:
        xor     eax, edi
        test    ax, ax
        jz      L_6a5c
        xor     ecx, ecx
        mov     cl, dl
        inc     cl
        mov     edx, 0x1
        shl     edx, cl
        mov     word ptr [esi + 0x2], dx
    L_6a5c:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x2]
        mov     word ptr [esi], ax
        dec     eax
        mov     word ptr [esi + 0x2], ax
        mov     ax, word ptr [esi]
        cmp     ax, 0x1
        ja      L_6a78
        lea     eax, [esi + 0x14]
        jmp     L_6a89
    L_6a78:
        xor     ecx, ecx
        mov     cx, ax
        shl     ecx, 0x4
        push    ecx
        call    FUN_10001d50
        add     esp, 0x4
    L_6a89:
        xor     edx, edx
        cmp     word ptr [esi], bx
        mov     dword ptr [esi + 0x4], eax
        jbe     L_6ab9
    L_6a93:
        mov     edi, dword ptr [esi + 0x4]
        xor     ecx, ecx
        mov     cx, dx
        mov     eax, ecx
        shl     eax, 0x4
        add     eax, edi
        or      ecx, 0x80000000
        inc     edx
        mov     dword ptr [eax], eax
        mov     dword ptr [eax + 0x4], eax
        mov     dword ptr [eax + 0x8], ebx
        mov     dword ptr [eax + 0xc], ecx
        cmp     dx, word ptr [esi]
        jc      L_6a93
    L_6ab9:
        mov     edx, dword ptr [esp + 0x18]
        pop     edi
        mov     dword ptr [esi + 0x2c], ebp
        mov     dword ptr [esi + 0x30], edx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
