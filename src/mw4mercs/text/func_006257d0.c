/*
 * FUN_006257d0 (79 B) — __thiscall destructor/cleanup.
 *
 * Walks a doubly-linked list at this+0x50, calling each node's virtual
 * method (via node+0x18 vtable) with arg 1, then frees each node via
 * FUN_004084e0(), and re-initializes the list head. Sets this+0x5c = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_006257d0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        mov     edi, dword ptr [ebx + 0x50]
        mov     esi, dword ptr [edi]
        cmp     esi, edi
        jz      L_second
    L_first:
        mov     ecx, dword ptr [esi + 0x18]
        test    ecx, ecx
        jz      L_first_next
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    L_first_next:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_first
    L_second:
        mov     edi, dword ptr [ebx + 0x50]
        mov     esi, dword ptr [edi]
        cmp     esi, edi
        jz      L_done
    L_second_loop:
        mov     eax, esi
        test    eax, eax
        mov     esi, dword ptr [esi]
        jz      L_second_next
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_second_next:
        cmp     esi, edi
        jnz     L_second_loop
    L_done:
        mov     dword ptr [edi], edi
        mov     dword ptr [edi + 0x4], edi
        pop     edi
        pop     esi
        mov     dword ptr [ebx + 0x5c], 0x0
        pop     ebx
        ret
    }
}
