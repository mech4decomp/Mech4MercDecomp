/*
 * FUN_006F8A30 (139 B) — Walk linked list calling vtable[0x14] on each node.
 *
 * Checks global 0x008493D0. If zero, returns 0. Otherwise walks the
 * singly-linked list at 0x008493C4, calling vtable[0x14] on each node.
 * If any returns false, result is false. Then conditionally calls
 * FUN_006F8D40/FUN_006F8C30. Calls FUN_006F7B10, FUN_006F5EE0.
 * Then walks list again, calling FUN_006F89C0 + vtable[0x08] on
 * nodes where byte at +0x04 is non-zero.
 *
 * __cdecl, returns bool (AL).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f8d40(void);
extern void __cdecl FUN_006f8c30(void);
extern void __cdecl FUN_006f7b10(void);
extern void __cdecl FUN_006f5ee0(void);
extern void __cdecl FUN_006f89c0(void);

__declspec(naked) void FUN_006f8a30(void)
{
    __asm {
        _emit   0xA1
        _emit   0xD0
        _emit   0x93
        _emit   0x84
        _emit   0x00
        test    eax, eax
        jnz     l_ok
        xor     al, al
        ret
    l_ok:
        push    ebx
        push    esi
        _emit   0x8B
        _emit   0x35
        _emit   0xC4
        _emit   0x93
        _emit   0x84
        _emit   0x00
        mov     bl, 1
        call    FUN_006f5ed0
        test    esi, esi
        jz      l_walk2
    l_loop1:
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x14]
        test    al, al
        jnz     l_ok1
        xor     bl, bl
    l_ok1:
        mov     esi, dword ptr [esi + 8]
        test    esi, esi
        jnz     l_loop1
    l_walk2:
        _emit   0xA0
        _emit   0xD5
        _emit   0x93
        _emit   0x84
        _emit   0x00
        test    al, al
        jz      l_skip_d40
        call    FUN_006f8d40
        test    al, al
        jnz     l_skip_d40
        call    FUN_006f8c30
    l_skip_d40:
        _emit   0x8B
        _emit   0x0D
        _emit   0xD0
        _emit   0x93
        _emit   0x84
        _emit   0x00
        mov     ecx, dword ptr [ecx + 0x3C]
        call    FUN_006f7b10
        call    FUN_006f5ee0
        _emit   0x8B
        _emit   0x35
        _emit   0xC4
        _emit   0x93
        _emit   0x84
        _emit   0x00
        test    esi, esi
        jz      l_done
    l_loop2:
        mov     al, byte ptr [esi + 4]
        test    al, al
        jz      l_skip
        push    esi
        call    FUN_006f89c0
        mov     edx, dword ptr [esi]
        push    esi
        call    dword ptr [edx + 8]
        _emit   0x8B
        _emit   0x35
        _emit   0xC4
        _emit   0x93
        _emit   0x84
        _emit   0x00
    l_skip:
        mov     esi, dword ptr [esi + 8]
        test    esi, esi
        jnz     l_loop2
    l_done:
        pop     esi
        mov     al, bl
        pop     ebx
        ret
    }
}
