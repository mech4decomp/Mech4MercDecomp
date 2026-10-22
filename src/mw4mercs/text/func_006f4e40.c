/*
 * FUN_006F4E40 (115 B) — Heap entry destructor with hash table cleanup.
 *
 * __cdecl, RET 8. Walks a linked list of heap entries (param+8),
 * marks each with flag 0x10=1 and calls FUN_006F4850 on each.
 * Then calls FUN_006F4C10 on the parent. Finally scans the global
 * hash table at 0x848E90..0x849290 and clears any slot pointing
 * to the freed entry.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4850(void *, unsigned int);
extern void __cdecl FUN_006f4c10(void *, unsigned int);

__declspec(naked) void __cdecl FUN_006f4e40(void)
{
    __asm {
        _emit   0xA1
        _emit   0x98
        _emit   0x97
        _emit   0x85
        _emit   0x00
        test    eax, eax
        jnz     l_clamp
        _emit   0xA1
        _emit   0xB8
        _emit   0x9E
        _emit   0x84
        _emit   0x00
        test    eax, eax
        jz      l_start
        _emit   0xA1
        _emit   0xC0
        _emit   0x8A
        _emit   0x85
        _emit   0x00
        test    eax, eax
        jz      l_start
    l_clamp:
        mov     byte ptr [esp + 8], 0
    l_start:
        push    ebp
        mov     ebp, dword ptr [esp + 8]
        mov     eax, dword ptr [ebp + 8]
        test    eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        jz      l_free_parent
        push    esi
    l_loop:
        test    eax, eax
        mov     esi, dword ptr [eax + 4]
        jz      l_next
        push    edi
        push    eax
        mov     dword ptr [eax + 0x10], 1
        call    FUN_006f4850
    l_next:
        test    esi, esi
        mov     eax, esi
        jnz     l_loop
        pop     esi
    l_free_parent:
        push    edi
        push    ebp
        call    FUN_006f4c10
        mov     eax, 0x848e90
    l_hash_loop:
        cmp     dword ptr [eax], ebp
        jnz     l_hash_next
        mov     dword ptr [eax], 0
    l_hash_next:
        add     eax, 4
        cmp     eax, 0x849290
        jl      l_hash_loop
        pop     edi
        pop     ebp
        ret     8
    }
}
