/*
 * FUN_004158e0 (51 B) — __thiscall (RET 4, 1 stack arg): BST lookup using
 * virtual compare (vtable+0x28); returns the matching node or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_004158e0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi+0xc]
        test    esi, esi
        jz      L1
        mov     ebx, dword ptr [esp+0x10]
    L2:
        mov     eax, dword ptr [edi]
        push    esi
        push    ebx
        mov     ecx, edi
        call    dword ptr [eax+0x28]
        test    eax, eax
        jz      L1
        jge     L3
        mov     esi, dword ptr [esi+0x10]
        jmp     L4
    L3:
        mov     esi, dword ptr [esi+0x14]
    L4:
        test    esi, esi
        jnz     L2
    L1:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    }
}
