/*
 * FUN_006FFBC0 (60 B) — Free a linked list of structures.
 *
 * Walks a linked list (first dword = next pointer). For each node,
 * walks a sub-list at node+0x54 (singly-linked, first dword = next),
 * freeing each sub-node via free(). Then frees the parent node.
 * Uses global function pointer at 0x0076B2D0 (free).
 *
 * __cdecl, RET 4 (one param: list head pointer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006ffbc0(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 8]
        test    edi, edi
        jz      l_ret
        push    ebx
        _emit   0x8B
        _emit   0x1D
        _emit   0xD0
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        push    ebp
        push    esi
    l_outer:
        mov     ebp, edi
        mov     esi, dword ptr [ebp + 0x54]
        test    esi, esi
        mov     edi, dword ptr [edi]
        jz      l_free_node
    l_inner:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    eax
        call    ebx
        add     esp, 4
        test    esi, esi
        jnz     l_inner
    l_free_node:
        push    ebp
        call    ebx
        add     esp, 4
        test    edi, edi
        jnz     l_outer
        pop     esi
        pop     ebp
        pop     ebx
    l_ret:
        pop     edi
        ret     4
    }
}
