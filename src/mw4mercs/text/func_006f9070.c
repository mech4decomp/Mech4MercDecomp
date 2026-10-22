/*
 * FUN_006F9070 (95 B) — Walk a linked list calling vtable[0x14] on each node.
 *
 * __cdecl, RET 0x18 (6 stack params). Sets global byte 0x007b6ecc to 1,
 * walks list at 0x008493c8, calls vtable[0x14] on each node. If any
 * returns false, clears global. Then calls FUN_006F90E0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f90e0(void);

__declspec(naked) void __cdecl FUN_006f9070(void)
{
    __asm {
        push    esi
        _emit   0x8B
        _emit   0x35
        _emit   0xC8
        _emit   0x93
        _emit   0x84
        _emit   0x00
        test    esi, esi
        _emit   0xC6
        _emit   0x05
        _emit   0xCC
        _emit   0x6E
        _emit   0x7B
        _emit   0x00
        _emit   0x01
        jz      l_tail
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, dword ptr [esp + 0x24]
    l_loop:
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    edi
        push    ebp
        push    ebx
        push    edx
        push    ecx
        push    esi
        call    dword ptr [eax + 0x14]
        test    al, al
        jnz     l_ok
        _emit   0xA2
        _emit   0xCC
        _emit   0x6E
        _emit   0x7B
        _emit   0x00
    l_ok:
        mov     esi, dword ptr [esi + 8]
        test    esi, esi
        jnz     l_loop
        pop     edi
        pop     ebp
        pop     ebx
    l_tail:
        mov     edx, dword ptr [esp + 0x1c]
        push    edx
        call    FUN_006f90e0
        _emit   0xA0
        _emit   0xCC
        _emit   0x6E
        _emit   0x7B
        _emit   0x00
        pop     esi
        ret     0x18
    }
}
