/*
 * FUN_006F59F0 (143 B) — Linked-list cleanup iterator.
 *
 * __thiscall (ECX = this). Iterates through a hash table / linked-list
 * structure. For each non-empty bucket, walks the chain, calling a
 * cleanup callback (0x6f5c10) on each node's field_08, then unlinks
 * and frees the node via FUN_006F5320.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f5320(void);
extern void __cdecl FUN_006f5c10(void);

__declspec(naked) void __fastcall FUN_006f59f0(void)
{
    __asm {
        push    ecx
        push    ebp
        xor     eax, eax
        mov     ebp, ecx
        cmp     word ptr [ebp + 4], ax
        mov     dword ptr [esp + 4], eax
        jbe     l_empty
        push    ebx
        push    esi
        push    edi
    l_loop:
        mov     edx, dword ptr [ebp + 8]
        mov     ebx, eax
        and     ebx, 0xffff
        shl     ebx, 4
        mov     esi, dword ptr [ebx + edx]
        add     ebx, edx
        cmp     esi, ebx
        je      l_next
    l_chain:
        mov     eax, 0x6f5c10
        test    eax, eax
        je      l_unlink
        mov     eax, dword ptr [esi + 8]
        test    eax, eax
        je      l_unlink
        push    ebp
        push    eax
        call    FUN_006f5c10
        mov     dword ptr [esi + 8], 0
    l_unlink:
        mov     eax, dword ptr [esi + 4]
        mov     edi, dword ptr [esi]
        mov     dword ptr [eax], edi
        mov     ecx, dword ptr [esi]
        mov     dword ptr [ecx + 4], eax
        push    esi
        mov     dword ptr [esi + 4], 0
        mov     dword ptr [esi], 0
        call    FUN_006f5320
        cmp     edi, ebx
        mov     esi, edi
        jne     l_chain
        mov     eax, dword ptr [esp + 0x10]
    l_next:
        inc     eax
        cmp     ax, word ptr [ebp + 4]
        mov     dword ptr [esp + 0x10], eax
        jb      l_loop
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr [ebp + 0x28], 0
        pop     ebp
        pop     ecx
        ret
    l_empty:
        mov     dword ptr [ebp + 0x28], eax
        pop     ebp
        pop     ecx
        ret
    }
}
