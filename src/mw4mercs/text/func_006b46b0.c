/*
 * FUN_006b46b0 (252 B) — __stdcall, RET 0x14 (5 args).
 *
 * MakeAnimHolder helper (variant of FUN_006b45a0). Allocates a buffer via
 * FUN_006f3c80, builds a string by concatenating a constant (0x79a090) and
 * arg0, lowercases the result, fills header fields (arg1..arg3), and links
 * the node into a singly-linked list rooted at 0x0082f3bc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  DAT_0082e228;
extern int  DAT_0082f3bc;
extern void __cdecl FUN_006f3c80(void);

__declspec(naked) void __stdcall func_006b46b0(void)
{
    __asm {
        mov     eax, dword ptr [DAT_0082e228]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        add     ecx, 0x17
        push    ecx
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     ebx, eax
        xor     eax, eax
        mov     edi, 0x79a090
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [ebx + 0x10]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebp
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x79a090
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     movsb
        mov     al, byte ptr [edx]
        test    al, al
        jz      L_4762
L_474e:
        cmp     al, 0x41
        jl      L_475a
        cmp     al, 0x5a
        jg      L_475a
        add     al, 0x20
        mov     byte ptr [edx], al
L_475a:
        mov     al, byte ptr [edx + 0x1]
        inc     edx
        test    al, al
        jnz     L_474e
L_4762:
        mov     ecx, dword ptr [esp + 0x18]
        mov     ax, word ptr [esp + 0x20]
        mov     dl, byte ptr [esp + 0x1c]
        mov     edi, dword ptr [esp + 0x14]
        mov     dword ptr [ebx + 0xc], ecx
        or      ecx, 0xffffffff
        add     dl, 0x63
        mov     word ptr [ebx + 0x6], ax
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        pop     edi
        add     cl, 0x4
        mov     byte ptr [ebx + 0x5], dl
        mov     edx, dword ptr [DAT_0082f3bc]
        mov     byte ptr [ebx + 0x4], cl
        mov     ecx, dword ptr [esp + 0x20]
        pop     esi
        pop     ebp
        mov     dword ptr [ebx + 0x8], ecx
        mov     dword ptr [ebx], edx
        mov     dword ptr [DAT_0082f3bc], ebx
        pop     ebx
        ret     0x14
    }
}
