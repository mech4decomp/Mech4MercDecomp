/*
 * FUN_004155f0 (33 B) — __thiscall: walks a linked list at [this+0xc],
 * calling each node's virtual method (vtable+4) with arg 1, then calls
 * FUN_00415bc0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415bc0(void);

__declspec(naked) void FUN_004155f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi+0xc]
        test    ecx, ecx
        jz      L1
    L2:
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax+4]
        mov     ecx, dword ptr [esi+0xc]
        test    ecx, ecx
        jnz     L2
    L1:
        mov     ecx, esi
        call    FUN_00415bc0
        pop     esi
        ret
    }
}
