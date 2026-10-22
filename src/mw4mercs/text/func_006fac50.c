/*
 * FUN_006FAC50 (73 B) — Free two linked lists of allocations.
 *
 * __cdecl. Walks two singly-linked lists (heads at 0x00849EBC and
 * 0x00849EC0), freeing each node via FUN_006F4230. Clears the first
 * head to NULL. Stores the final (NULL) value of the second list into
 * 0x008AAE34.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(void *);

__declspec(naked) void __cdecl FUN_006fac50(void)
{
    __asm {
        _emit   0xA1
        _emit   0xBC
        _emit   0x9E
        _emit   0x84
        _emit   0x00
        test    eax, eax
        jz      l_list2
        push    esi
    l_loop1:
        mov     esi, dword ptr [eax]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        mov     eax, esi
        jnz     l_loop1
        pop     esi
    l_list2:
        _emit   0xA1
        _emit   0xC0
        _emit   0x9E
        _emit   0x84
        _emit   0x00
        test    eax, eax
        _emit   0xC7
        _emit   0x05
        _emit   0xBC
        _emit   0x9E
        _emit   0x84
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        jz      l_done
    l_loop2:
        mov     ecx, dword ptr [eax]
        push    eax
        _emit   0x89
        _emit   0x0D
        _emit   0xC0
        _emit   0x9E
        _emit   0x84
        _emit   0x00
        call    FUN_006f4230
        _emit   0xA1
        _emit   0xC0
        _emit   0x9E
        _emit   0x84
        _emit   0x00
        test    eax, eax
        jnz     l_loop2
        _emit   0xA3
        _emit   0x34
        _emit   0xAE
        _emit   0x8A
        _emit   0x00
    l_done:
        ret
    }
}
