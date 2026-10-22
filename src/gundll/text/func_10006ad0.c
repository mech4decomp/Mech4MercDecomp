/*
 * FUN_10006ad0 (228 B) - __stdcall, RET 0x8.
 * Walks a doubly-linked list via vtable methods on param_1, freeing nodes
 * (FUN_1000c4c0) or returning a matched node's data; decrements the owner
 * count on removal.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern int  g_10055050;                       /* DAT_10055050 */
extern void __cdecl FUN_1000c4c0(void);       /* rel32 call, 2 args */

__declspec(naked) void __stdcall FUN_10006ad0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    eax
        call    dword ptr [edi + 0xc]
        and     ax, word ptr [edi + 0x2]
        mov     edx, dword ptr [edi + 0x4]
        xor     ebx, ebx
        mov     bx, ax
        xor     eax, eax
        shl     ebx, 0x4
        mov     esi, dword ptr [ebx + edx]
        add     ebx, edx
        cmp     esi, ebx
        jz      L_6bac
        nop
    L_6b00:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     ebp, dword ptr [esi]
        mov     dword ptr [esp + 0x10], ebp
        jns     L_6b33
        mov     ecx, dword ptr [esi + 0x4]
        mov     dword ptr [ecx], ebp
        mov     edx, dword ptr [esi + 0x4]
        mov     dword ptr [ebp + 0x4], edx
        mov     dword ptr [esi + 0x4], 0x0
        mov     dword ptr [esi], 0x0
        mov     eax, dword ptr [g_10055050]
        push    esi
        push    eax
        call    FUN_1000c4c0
        jmp     L_6b4b
    L_6b33:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esi + 0x8]
        push    ecx
        push    eax
        mov     dword ptr [esp + 0x20], eax
        call    dword ptr [edi + 0x8]
        test    al, al
        jnz     L_6b5b
        mov     ebp, dword ptr [esp + 0x10]
    L_6b4b:
        cmp     ebp, ebx
        mov     esi, ebp
        jnz     L_6b00
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0x8
    L_6b5b:
        mov     eax, dword ptr [edi + 0x28]
        xor     ecx, ecx
        cmp     eax, ecx
        jnz     L_6b93
        mov     edx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [edx], eax
        mov     edx, dword ptr [esi + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [esi + 0x4], ecx
        mov     dword ptr [esi], ecx
        mov     eax, dword ptr [g_10055050]
        push    esi
        push    eax
        call    FUN_1000c4c0
        dec     dword ptr [edi + 0x24]
        mov     eax, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    L_6b93:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_6ba8
        or      eax, 0x80000000
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x8], ecx
        dec     dword ptr [edi + 0x24]
    L_6ba8:
        mov     eax, dword ptr [esp + 0x18]
    L_6bac:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
