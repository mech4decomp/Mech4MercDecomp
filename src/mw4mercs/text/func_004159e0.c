/*
 * FUN_004159e0 (76 B) — __fastcall (ECX=this): BST predecessor/successor
 * walk. Reads node at [this+0x10]; if it has a left child ([+0x14]) walk to
 * its rightmost descendant and store at [this+0x10]; else walk up the parent
 * chain ([+0x18]) to find the first ancestor whose key is less than the
 * current node's key ([+0x10]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004159e0(void)
{
    __asm {
        mov     eax, ecx
        mov     edx, dword ptr [eax+0x10]
        test    edx, edx
        push    esi
        jz      L_end
        mov     esi, dword ptr [edx+0x14]
        test    esi, esi
        jz      L_up
        mov     edx, dword ptr [esi+0x10]
        test    edx, edx
        jz      L_store
    L_right:
        mov     esi, edx
        mov     edx, dword ptr [esi+0x10]
        test    edx, edx
        jnz     L_right
    L_store:
        mov     dword ptr [eax+0x10], esi
        pop     esi
        ret
    L_up:
        mov     esi, dword ptr [edx+0x18]
        test    esi, esi
        mov     dword ptr [eax+0x10], 0
        jz      L_end
    L_ancestor:
        cmp     edx, dword ptr [esi+0x10]
        jz      L_found
        mov     edx, esi
        mov     esi, dword ptr [edx+0x18]
        test    esi, esi
        jnz     L_ancestor
        pop     esi
        ret
    L_found:
        mov     ecx, dword ptr [edx+0x18]
        mov     dword ptr [eax+0x10], ecx
    L_end:
        pop     esi
        ret
    }
}
