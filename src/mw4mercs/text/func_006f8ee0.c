/*
 * FUN_006F8EE0 (80 B) — Walk a linked list calling vtable[0x10] on each node,
 * then destroy nodes with non-zero byte at +4.
 *
 * Walks a singly-linked list starting at global 0x008493c8. For each node,
 * calls virtual method at vtable+0x10 (__thiscall, returns bool). If any
 * node returns false, the result is false. Then walks again, destroying
 * nodes where byte at +4 is non-zero.
 *
 * __cdecl (no params), returns bool (AL).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f8e80(void *);

__declspec(naked) void __cdecl FUN_006f8ee0(void)
{
    __asm {
        push    ebx
        push    esi
        _emit   0x8B
        _emit   0x35
        _emit   0xC8
        _emit   0x93
        _emit   0x84
        _emit   0x00
        test    esi, esi
        mov     bl, 1
        jz      l_second_start
    l_first_loop:
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x10]
        test    al, al
        jnz     l_first_ok
        xor     bl, bl
    l_first_ok:
        mov     esi, dword ptr [esi + 8]
        test    esi, esi
        jnz     l_first_loop
    l_second_start:
        _emit   0x8B
        _emit   0x35
        _emit   0xC8
        _emit   0x93
        _emit   0x84
        _emit   0x00
        test    esi, esi
        jz      l_done
    l_second_loop:
        mov     al, byte ptr [esi + 4]
        test    al, al
        jz      l_second_next
        push    esi
        call    FUN_006f8e80
        mov     ecx, dword ptr [esi]
        push    esi
        call    dword ptr [ecx + 8]
        _emit   0x8B
        _emit   0x35
        _emit   0xC8
        _emit   0x93
        _emit   0x84
        _emit   0x00
    l_second_next:
        mov     esi, dword ptr [esi + 8]
        test    esi, esi
        jnz     l_second_loop
    l_done:
        pop     esi
        mov     al, bl
        pop     ebx
        ret
    }
}
