/*
 * FUN_006F8F30 (69 B) — Walk linked list calling vtable[0x18] on each node.
 *
 * __cdecl, RET 12 (3 params). Walks the singly-linked list at global
 * 0x008493C8. For each node, calls virtual method at vtable+0x18
 * (__thiscall, 3 params, returns bool). Returns true only if all calls
 * return true.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006f8f30(void)
{
    __asm {
        push    ecx
        push    esi
        _emit   0x8B
        _emit   0x35
        _emit   0xC8
        _emit   0x93
        _emit   0x84
        _emit   0x00
        test    esi, esi
        mov     al, 1
        mov     byte ptr [esp + 7], al
        jz      l_done
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    edi
        mov     edi, dword ptr [esp + 0x1C]
    l_loop:
        mov     eax, dword ptr [esi]
        push    ebx
        push    edi
        push    ebp
        push    esi
        call    dword ptr [eax + 0x18]
        test    al, al
        jnz     l_ok
        mov     byte ptr [esp + 0x13], al
    l_ok:
        mov     esi, dword ptr [esi + 8]
        test    esi, esi
        jnz     l_loop
        mov     al, byte ptr [esp + 0x13]
        pop     edi
        pop     ebp
        pop     ebx
    l_done:
        pop     esi
        pop     ecx
        ret     0xC
    }
}
