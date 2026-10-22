/*
 * FUN_006FB5E0 (159 B) — Memory block refcount decrement + free.
 *
 * __stdcall, RET 4 (one param: pointer to block header).
 * Checks magic at [param+0] == 0x23aa7812 (asserts if not).
 * Decrements refcount at [param+0x18]. If it reaches zero,
 * frees sub-blocks at [param+0x10], [param+0x0c], [param+0x08],
 * then unlinks from a global linked list and frees the block.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void __stdcall FUN_006fb5e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 8]
        cmp     dword ptr [esi], 0x23aa7812
        je      l_magic_ok
        lea     eax, [esi + 0x1c]
        push    eax
        push    0x7a0290
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        je      l_magic_ok
        int     3
    l_magic_ok:
        dec     dword ptr [esi + 0x18]
        jne     l_done
        mov     ecx, dword ptr [esi + 0x10]
        push    edi
        push    ecx
        _emit   0xFF
        _emit   0x15
        _emit   0x7C
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        mov     edx, dword ptr [esi + 0xc]
        _emit   0x8B
        _emit   0x3D
        _emit   0xEC
        _emit   0xB0
        _emit   0x76
        _emit   0x00
        push    edx
        call    edi
        mov     eax, dword ptr [esi + 8]
        push    eax
        call    edi
        _emit   0x8B
        _emit   0x15
        _emit   0xF4
        _emit   0x66
        _emit   0x85
        _emit   0x00
        _emit   0xA1
        _emit   0xF8
        _emit   0x66
        _emit   0x85
        _emit   0x00
        dec     edx
        cmp     eax, esi
        _emit   0x89
        _emit   0x15
        _emit   0xF4
        _emit   0x66
        _emit   0x85
        _emit   0x00
        pop     edi
        jne     l_find_prev
        mov     ecx, dword ptr [esi + 4]
        push    esi
        _emit   0x89
        _emit   0x0D
        _emit   0xF8
        _emit   0x66
        _emit   0x85
        _emit   0x00
        call    FUN_006f4230
        pop     esi
        pop     ebp
        ret     4
    l_find_prev:
        test    eax, eax
        je      l_done
    l_find_loop:
        mov     ecx, eax
        mov     eax, dword ptr [eax + 4]
        cmp     eax, esi
        je      l_unlink
        test    eax, eax
        jne     l_find_loop
        pop     esi
        pop     ebp
        ret     4
    l_unlink:
        mov     edx, dword ptr [esi + 4]
        push    esi
        mov     dword ptr [ecx + 4], edx
        mov     dword ptr [esi], 0
        call    FUN_006f4230
    l_done:
        pop     esi
        pop     ebp
        ret     4
    }
}
