/*
 * FUN_006583b0 (14 B) — ABL tree-node destructor. __thiscall.
 *
 * Frees the node's first field (a heap pointer) if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);   /* free */

__declspec(naked) void FUN_006583b0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      Lbd
        push    eax
        call    FUN_004084e0
        pop     ecx
Lbd:
        ret
    }
}
