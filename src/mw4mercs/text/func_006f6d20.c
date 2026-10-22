/*
 * FUN_006F6D20 (86 B) — Linked list destructor: calls FUN_006F6D80 on each
 * node, then frees all nodes via free().
 *
 * __fastcall (ECX = this). No return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006f6d80(void *);

__declspec(naked) void __fastcall FUN_006f6d20(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 8]
        xor     ebx, ebx
        cmp     esi, ebx
        jz      l_free_entry
        jnz     l_walk_start
        xor     eax, eax
        jmp     l_walk_call
    l_walk_start:
        mov     eax, esi
        mov     esi, dword ptr [esi + 0x14]
    l_walk_call:
        push    eax
        mov     ecx, edi
        call    FUN_006f6d80
        cmp     esi, ebx
        jnz     l_walk_start
    l_free_entry:
        _emit   0x8B
        _emit   0x35
        _emit   0xD0
        _emit   0xB2
        _emit   0x76
        _emit   0x00
    l_free_loop:
        mov     ecx, dword ptr [edi + 8]
        cmp     ecx, ebx
        jz      l_done
        mov     eax, dword ptr [ecx + 0x14]
        cmp     eax, ebx
        mov     dword ptr [edi + 8], eax
        jnz     l_not_last
        push    ecx
        mov     dword ptr [edi + 0xC], ebx
        call    esi
        add     esp, 4
        jmp     l_free_loop
    l_not_last:
        push    ecx
        mov     dword ptr [eax + 0x18], ebx
        call    esi
        add     esp, 4
        jmp     l_free_loop
    l_done:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
