/*
 * FUN_006F5D20 (104 B) — Linked-list string search (returns value).
 *
 * __stdcall, RET 8 (2 stack params: list_head_ptr, search_string).
 * Walks a singly-linked list of nodes (each node: +0x00 = data_ptr,
 * +0x04 = next). Compares the string at data_ptr[0] with search_string.
 * Returns data_ptr[4] on match, or NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f5d20(void)
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
        mov     edx, dword ptr [esp + 0x18]
        jnz     l_advance
        xor     eax, eax
        jmp     l_get_node
    l_advance:
        mov     eax, edi
        mov     edi, dword ptr [edi + 4]
    l_get_node:
        mov     ebp, dword ptr [eax]
        mov     eax, dword ptr [ebp]
        mov     esi, edx
    l_cmp_loop:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     l_cmp_diff
        test    cl, cl
        jz      l_cmp_eq
        mov     bl, byte ptr [eax + 1]
        mov     cl, bl
        cmp     bl, byte ptr [esi + 1]
        jnz     l_cmp_diff
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     l_cmp_loop
    l_cmp_eq:
        xor     eax, eax
        jmp     l_cmp_done
    l_cmp_diff:
        sbb     eax, eax
        sbb     eax, -1
    l_cmp_done:
        test    eax, eax
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
        mov     eax, dword ptr [ebp + 4]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
