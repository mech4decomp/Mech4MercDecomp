/*
 * FUN_006b45a0 (271 B) — __stdcall, RET 0x14 (5 args).
 *
 * MakeAnimHolder helper. Allocates a buffer via FUN_006f3c80, builds a
 * string by concatenating a constant (0x79a090) and arg0, lowercases the
 * result, fills header fields (arg1..arg4), and links the node into a
 * singly-linked list rooted at 0x0082f3bc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  DAT_0082e228;
extern int  DAT_0082f3bc;
extern void __cdecl FUN_006f3c80(void);

__declspec(naked) void __stdcall func_006b45a0(void)
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
        mov     edx, eax
        xor     eax, eax
        mov     edi, 0x79a090
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     ebx, [edx + 0x10]
        mov     edi, ebx
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
        mov     edi, ebx
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
        mov     edi, ebx
        repne   scasb
        mov     al, byte ptr [esp + 0x1c]
        dec     edi
        mov     ecx, ebp
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x18]
        mov     edi, dword ptr [esp + 0x14]
        mov     dword ptr [edx + 0xc], ecx
        mov     cx, word ptr [esp + 0x20]
        add     al, 0x63
        mov     word ptr [edx + 0x6], cx
        mov     byte ptr [edx + 0x5], al
        xor     eax, eax
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        dec     ecx
        add     cl, 0x4
        mov     byte ptr [edx + 0x4], cl
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [edx + 0x8], eax
        mov     al, byte ptr [ebx]
        test    al, al
        jz      L_469b
L_4672:
        cmp     al, 0x41
        jl      L_467e
        cmp     al, 0x5a
        jg      L_467e
        add     al, 0x20
        mov     byte ptr [ebx], al
L_467e:
        mov     al, byte ptr [ebx + 0x1]
        inc     ebx
        test    al, al
        jnz     L_4672
        mov     ecx, dword ptr [DAT_0082f3bc]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [edx], ecx
        mov     dword ptr [DAT_0082f3bc], edx
        pop     ebx
        ret     0x14
L_469b:
        mov     eax, dword ptr [DAT_0082f3bc]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [edx], eax
        mov     dword ptr [DAT_0082f3bc], edx
        pop     ebx
        ret     0x14
    }
}
