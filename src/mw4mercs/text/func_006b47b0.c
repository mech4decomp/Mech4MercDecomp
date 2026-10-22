/*
 * FUN_006b47b0 (296 B) — __stdcall, RET 8 (2 params).
 *
 * Builds a lowercased copy of param_1 into a stack buffer (with "$$"
 * prefix handling), then searches a linked list (head DAT_0082f3bc)
 * for a node whose [esi+8] == param_2 and whose name (esi+0x10)
 * matches (via _stricmp at DAT_0076b2ac). On match, unlinks the node
 * and frees it via FUN_006f4230.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_0082f3bc;
extern int DAT_0076b2ac;   /* _stricmp */
extern void __cdecl FUN_006f4230(void *ptr);

__declspec(naked) void __stdcall FUN_006b47b0(void)
{
    __asm {
        or      ecx, 0xffffffff
        sub     esp, 0x100
        push    ebx
        xor     eax, eax
        push    ebp
        push    esi
        push    edi
        mov     edi, 0x79a090
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [esp + 0x114]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebx
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x79a090
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        mov     al, byte ptr [esp + 0x10]
        test    al, al
        lea     ecx, [esp + 0x10]
        jz      L_b85e
L_b848:
        mov     al, byte ptr [ecx]
        cmp     al, 0x41
        jl      L_b856
        cmp     al, 0x5a
        jg      L_b856
        add     al, 0x20
        mov     byte ptr [ecx], al
L_b856:
        mov     al, byte ptr [ecx + 1]
        inc     ecx
        test    al, al
        jnz     L_b848
L_b85e:
        mov     esi, dword ptr [DAT_0082f3bc]
        xor     edi, edi
        test    esi, esi
        jz      L_b8cb
        mov     ebx, dword ptr [esp + 0x118]
        mov     ebp, dword ptr [DAT_0076b2ac]
L_b877:
        cmp     ebx, dword ptr [esi + 8]
        jnz     L_b88e
        lea     eax, [esi + 0x10]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        call    ebp
        add     esp, 8
        test    eax, eax
        jz      L_b8a3
L_b88e:
        mov     edi, esi
        mov     esi, dword ptr [esi]
        test    esi, esi
        jnz     L_b877
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x100
        ret     8
L_b8a3:
        test    edi, edi
        jz      L_b8be
        mov     edx, dword ptr [esi]
        push    esi
        mov     dword ptr [edi], edx
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x100
        ret     8
L_b8be:
        mov     eax, dword ptr [esi]
        push    esi
        mov     dword ptr [DAT_0082f3bc], eax
        call    FUN_006f4230
L_b8cb:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x100
        ret     8
    }
}
