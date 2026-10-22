/*
 * FUN_006F8C30 (60 B) — Walk a linked list calling vtable[0x28] on each node.
 *
 * Walks a singly-linked list starting at global 0x008493c4. For each node,
 * calls virtual method at vtable+0x28 (__thiscall, returns bool). If any
 * node returns false, the result is false. Then calls FUN_006F8B70,
 * FUN_006F5EE0, and clears global byte 0x008493d5.
 *
 * __cdecl (no params), returns bool (AL).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f8b70(void);
extern void __cdecl FUN_006f5ee0(void);

__declspec(naked) void __cdecl FUN_006f8c30(void)
{
    __asm {
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
        jz      l_done
    l_loop:
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x28]
        test    al, al
        jnz     l_ok
        xor     bl, bl
    l_ok:
        mov     esi, dword ptr [esi + 8]
        test    esi, esi
        jnz     l_loop
    l_done:
        call    FUN_006f8b70
        call    FUN_006f5ee0
        pop     esi
        mov     al, bl
        _emit   0xC6
        _emit   0x05
        _emit   0xD5
        _emit   0x93
        _emit   0x84
        _emit   0x00
        _emit   0x00
        pop     ebx
        ret
    }
}
