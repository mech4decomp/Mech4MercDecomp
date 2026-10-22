/*
 * FUN_0040f930 (78 B) — recursive tree-node teardown: recursively frees the
 * child list, decrements a refcount on a shared buffer (freeing it at 0),
 * then frees the node itself.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040f930(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0040f930(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp+0xc]
        test    esi, esi
        mov     ebx, ecx
        jz      L_ret
        push    edi
    L_loop:
        mov     eax, dword ptr [esi+0xc]
        push    eax
        mov     ecx, ebx
        call    FUN_0040f930
        mov     eax, dword ptr [esi+0x10]
        test    eax, eax
        mov     edi, dword ptr [esi+0x8]
        jz      L_free
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_free
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_free:
        test    esi, esi
        jz      L_next
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_next:
        test    edi, edi
        mov     esi, edi
        jnz     L_loop
        pop     edi
    L_ret:
        pop     esi
        pop     ebx
        ret     4
    }
}
