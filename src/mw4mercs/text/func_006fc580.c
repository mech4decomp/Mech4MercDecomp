/*
 * FUN_006FC580 (122 B) — Linked-list node removal with refcount.
 *
 * __cdecl, RET 4. Decrements global refcount 0x00856700. Removes
 * the given node from a singly-linked list (head at 0x008566FC,
 * next at +0x10c). If found, unlinks it, calls FUN_006FC810, and
 * frees via FUN_004084E0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fc810(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __cdecl FUN_006fc580(void)
{
    __asm {
        _emit   0x8B
        _emit   0x15
        _emit   0x00
        _emit   0x67
        _emit   0x85
        _emit   0x00
        _emit   0xA1
        _emit   0xFC
        _emit   0x66
        _emit   0x85
        _emit   0x00
        push    esi
        mov     esi, dword ptr [esp + 8]
        dec     edx
        cmp     eax, esi
        _emit   0x89
        _emit   0x15
        _emit   0x00
        _emit   0x67
        _emit   0x85
        _emit   0x00
        jnz     l_search
        test    esi, esi
        mov     eax, dword ptr [esi + 0x10c]
        _emit   0xA3
        _emit   0xFC
        _emit   0x66
        _emit   0x85
        _emit   0x00
        jz      l_done
        mov     ecx, esi
        call    FUN_006fc810
        push    esi
        call    FUN_004084e0
        add     esp, 4
        pop     esi
        ret     4
    l_search:
        test    eax, eax
        jz      l_done
    l_find_loop:
        mov     ecx, eax
        mov     eax, dword ptr [eax + 0x10c]
        cmp     eax, esi
        jz      l_unlink
        test    eax, eax
        jnz     l_find_loop
        pop     esi
        ret     4
    l_unlink:
        test    esi, esi
        mov     edx, dword ptr [esi + 0x10c]
        mov     dword ptr [ecx + 0x10c], edx
        jz      l_done
        mov     ecx, esi
        call    FUN_006fc810
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_done:
        pop     esi
        ret     4
    }
}
