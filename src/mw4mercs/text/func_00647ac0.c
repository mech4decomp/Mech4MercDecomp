/*
 * FUN_00647ac0 (52 B) — __thiscall (ECX = this, 1 stack arg, RET 0x4).
 *
 * Recursively frees a tree: for each node, recurse on [node+0xc], free the
 * node via FUN_004084e0, then continue with [node+0x8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00647ac0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        test    esi, esi
        mov     ebx, ecx
        jz      L_done
        push    edi
    L_loop:
        mov     eax, dword ptr [esi + 0xc]
        push    eax
        mov     ecx, ebx
        call    FUN_00647ac0
        test    esi, esi
        mov     edi, dword ptr [esi + 0x8]
        jz      L_skipfree
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_skipfree:
        test    edi, edi
        mov     esi, edi
        jnz     L_loop
        pop     edi
    L_done:
        pop     esi
        pop     ebx
        ret     0x4
    }
}
