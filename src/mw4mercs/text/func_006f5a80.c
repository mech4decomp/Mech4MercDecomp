/*
 * FUN_006F5A80 (94 B) — Walk a linked list, free all nodes.
 *
 * __thiscall (ECX = this), 1 stack param (pointer to list head).
 * Walks a singly-linked list, counts nodes, calls FUN_006F5C80 on
 * each node's data, then frees each node via free() (IAT 0x0076b2d0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006f5c80(void);

__declspec(naked) void __fastcall FUN_006f5a80(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     ebp, ecx
        xor     ebx, ebx
    l_outer:
        mov     esi, dword ptr [edi]
        mov     eax, esi
        xor     ecx, ecx
        cmp     eax, ebx
        jz      l_done
    l_count:
        mov     eax, dword ptr [eax + 4]
        inc     ecx
        cmp     eax, ebx
        jnz     l_count
        cmp     ecx, ebx
        jz      l_done
        mov     eax, dword ptr [esi]
        push    eax
        mov     ecx, ebp
        call    FUN_006f5c80
        cmp     esi, ebx
        jz      l_outer
        mov     eax, dword ptr [esi + 4]
        cmp     eax, ebx
        mov     dword ptr [edi], eax
        jnz     l_not_last
        push    esi
        mov     dword ptr [edi + 4], ebx
        _emit   0xFF
        _emit   0x15
        _emit   0xD0
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        add     esp, 4
        jmp     l_outer
    l_not_last:
        push    esi
        mov     dword ptr [eax + 8], ebx
        _emit   0xFF
        _emit   0x15
        _emit   0xD0
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        add     esp, 4
        jmp     l_outer
    l_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
