/*
 * FUN_00415720 (122 B) — __thiscall (RET 4, 1 stack arg): BST-style
 * insert of a node into the tree rooted at [this+0xc], using virtual
 * compare (vtable+0x24) and FUN_004155d0 to allocate child nodes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004155d0(void);

__declspec(naked) void FUN_00415720(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi+0xc]
        test    esi, esi
        jnz     L2
        push    esi
        push    esi
        push    esi
        mov     esi, dword ptr [esp+0x1c]
        mov     ecx, esi
        call    FUN_004155d0
        mov     dword ptr [edi+0xc], esi
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    L2:
        mov     ebx, dword ptr [esp+0x10]
    L3:
        mov     eax, dword ptr [edi]
        push    esi
        push    ebx
        mov     ecx, edi
        call    dword ptr [eax+0x24]
        test    eax, eax
        jge     L4
        mov     eax, dword ptr [esi+0x10]
        test    eax, eax
        jz      L5
        jmp     L6
    L4:
        mov     eax, dword ptr [esi+0x14]
        test    eax, eax
        jz      L7
    L6:
        mov     esi, eax
        test    esi, esi
        jnz     L3
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    L5:
        push    esi
        push    0
        push    0
        mov     ecx, ebx
        call    FUN_004155d0
        pop     edi
        mov     dword ptr [esi+0x10], ebx
        pop     esi
        pop     ebx
        ret     4
    L7:
        push    esi
        push    0
        push    0
        mov     ecx, ebx
        call    FUN_004155d0
        pop     edi
        mov     dword ptr [esi+0x14], ebx
        pop     esi
        pop     ebx
        ret     4
    }
}
