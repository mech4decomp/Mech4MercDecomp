/*
 * FUN_00415630 (34 B) — __thiscall: walks a linked list at [this+0xc];
 * for each node whose [node+0xc] is non-null, calls that sub-node's
 * virtual method (vtable+0) with arg 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00415630(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0xc]
        test    eax, eax
        jz      L1
    L2:
        mov     eax, dword ptr [eax+0xc]
        test    eax, eax
        jz      L3
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
    L3:
        mov     eax, dword ptr [esi+0xc]
        test    eax, eax
        jnz     L2
    L1:
        pop     esi
        ret
    }
}
