/*
 * FUN_1000b170 (83 B) - __thiscall. Walks a linked list starting at
 * this+0xc, comparing each node's +0x48 wide string against param_1 via
 * wcsncmp (0x104 chars). Returns the matching node's +0xc pointer, or
 * -1 if no node matches.
 *
 * __thiscall, 1 param (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_1002114c;   /* wcsncmp IAT @ 0x1002114c */

__declspec(naked) int __cdecl FUN_1000b170(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [ecx + 0xc]
        push    edi
        test    esi, esi
        jz      L_ret_neg
        mov     edi, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [g_1002114c]
        push    0x104
        lea     eax, [esi + 0x48]
        push    edi
        push    eax
        call    ebx
        add     esp, 0xc
        test    eax, eax
        jz      L_ret_node
L_loop:
        mov     esi, dword ptr [esi + 0x14]
        test    esi, esi
        jz      L_ret_neg
        push    0x104
        lea     ecx, [esi + 0x48]
        push    edi
        push    ecx
        call    ebx
        add     esp, 0xc
        test    eax, eax
        jnz     L_loop
L_ret_node:
        mov     eax, dword ptr [esi + 0xc]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
L_ret_neg:
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        ret     0x4
    }
}
