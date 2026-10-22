/*
 * FUN_0069c9f0 (72 B) — Linked-list teardown.
 *
 * __fastcall (ECX = this). Walks a doubly-linked list rooted at this+0x50.
 * First pass: calls virtual method 0 on each node's +0x8 object (if set).
 * Second pass: frees each node via FUN_004084e0. Finally re-links the
 * sentinel to itself.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(int param);

__declspec(naked) void __fastcall FUN_0069c9f0(void *param_1)
{
    __asm {
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        mov     edi, dword ptr [ebx + 0x50]
        mov     esi, dword ptr [edi]
        cmp     esi, edi
        jz      l_loop2_start
    l_loop1:
        mov     ecx, dword ptr [esi + 0x8]
        test    ecx, ecx
        jz      l_loop1_next
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    l_loop1_next:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     l_loop1
    l_loop2_start:
        mov     edi, dword ptr [ebx + 0x50]
        mov     esi, dword ptr [edi]
        cmp     esi, edi
        jz      l_done
    l_loop2:
        mov     eax, esi
        test    eax, eax
        mov     esi, dword ptr [esi]
        jz      l_loop2_next
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_loop2_next:
        cmp     esi, edi
        jnz     l_loop2
    l_done:
        mov     dword ptr [edi], edi
        mov     dword ptr [edi + 0x4], edi
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
