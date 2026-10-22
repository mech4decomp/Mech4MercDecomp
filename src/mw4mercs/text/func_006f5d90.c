/*
 * FUN_006F5D90 (103 B) — Linked-list string search (returns node pointer).
 *
 * __stdcall, RET 8 (2 stack params: list_head_ptr, search_string).
 * Walks a singly-linked list of nodes (each node: +0x00 = data_ptr,
 * +0x04 = next). Compares the string at data_ptr[0] with search_string
 * using byte-by-byte comparison. Returns data_ptr on match, or NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f5d90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [eax]
        test    edi, edi
        jz      l_not_found
        mov     ebx, dword ptr [esp + 0x18]
        jnz     l_advance
        xor     eax, eax
        jmp     l_get_node
    l_advance:
        mov     eax, edi
        mov     edi, dword ptr [edi + 4]
    l_get_node:
        mov     ebp, dword ptr [eax]
        mov     ecx, dword ptr [ebp]
        mov     esi, ebx
    l_cmp_loop:
        mov     al, byte ptr [ecx]
        mov     dl, al
        cmp     al, byte ptr [esi]
        jnz     l_cmp_diff
        test    dl, dl
        jz      l_cmp_eq
        mov     al, byte ptr [ecx + 1]
        mov     dl, al
        cmp     al, byte ptr [esi + 1]
        jnz     l_cmp_diff
        add     ecx, 2
        add     esi, 2
        test    dl, dl
        jnz     l_cmp_loop
    l_cmp_eq:
        xor     ecx, ecx
        jmp     l_cmp_done
    l_cmp_diff:
        sbb     ecx, ecx
        sbb     ecx, -1
    l_cmp_done:
        test    ecx, ecx
        jz      l_found
        test    edi, edi
        jnz     l_advance
    l_not_found:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
    l_found:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     8
    }
}
