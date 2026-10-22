/*
 * FUN_005cbad0 (39 B) — Free a singly-linked list of nodes, then
 * reset the list head to point at itself (empty circular list).
 *
 * __fastcall (ECX = &list_head). Each node's first dword is the next
 * pointer. Frees every node via FUN_004084e0, then sets
 * head->next = head and head->prev = head.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_005cbad0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [ecx]
        mov     esi, dword ptr [edi]
        cmp     esi, edi
        jz      l_ef
l_da:
        mov     eax, esi
        test    eax, eax
        mov     esi, dword ptr [esi]
        jz      l_eb
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
l_eb:
        cmp     esi, edi
        jnz     l_da
l_ef:
        mov     dword ptr [edi], edi
        mov     dword ptr [edi + 0x4], edi
        pop     edi
        pop     esi
        ret
    }
}
