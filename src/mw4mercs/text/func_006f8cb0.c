/*
 * FUN_006F8CB0 (143 B) — Walk linked list, call vtable[0x20] on each node.
 *
 * Checks global 0x8493d0. If NULL, asserts and returns false.
 * Otherwise calls FUN_006F5ED0, then walks linked list at 0x8493c4
 * calling vtable[0x20] on each node. If any returns true, result is true.
 * If none returns true, calls vtable[8] on the global object with a
 * different string. Then calls FUN_006F5EE0.
 *
 * __stdcall, RET 4 (one param: string pointer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f5ee0(void);
extern int __cdecl FUN_006fabf0(void);

__declspec(naked) int __stdcall FUN_006f8cb0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        _emit   0xA1
        _emit   0xD0
        _emit   0x93
        _emit   0x84
        _emit   0x00
        push    ebx
        xor     bl, bl
        test    eax, eax
        push    esi
        _emit   0x8B
        _emit   0x35
        _emit   0xC4
        _emit   0x93
        _emit   0x84
        _emit   0x00
        jne     l_main
        push    0x79fd58
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        je      l_assert_ok
        int     3
    l_assert_ok:
        pop     esi
        xor     al, al
        pop     ebx
        pop     ebp
        ret     4
    l_main:
        push    edi
        call    FUN_006f5ed0
        _emit   0x8B
        _emit   0x0D
        _emit   0xD0
        _emit   0x93
        _emit   0x84
        _emit   0x00
        mov     edi, dword ptr [ebp + 8]
        mov     eax, dword ptr [ecx]
        push    0x79fb54
        push    0x79fae8
        push    edi
        call    dword ptr [eax + 8]
        test    esi, esi
        je      l_no_match
    l_loop:
        mov     ecx, dword ptr [esi]
        push    edi
        push    esi
        call    dword ptr [ecx + 0x20]
        test    al, al
        je      l_next
        mov     bl, 1
    l_next:
        mov     esi, dword ptr [esi + 8]
        test    esi, esi
        jne     l_loop
        test    bl, bl
        jne     l_done
    l_no_match:
        _emit   0x8B
        _emit   0x0D
        _emit   0xD0
        _emit   0x93
        _emit   0x84
        _emit   0x00
        mov     edx, dword ptr [ecx]
        push    0x79fb5c
        push    0x79fae8
        push    edi
        call    dword ptr [edx + 8]
    l_done:
        call    FUN_006f5ee0
        pop     edi
        pop     esi
        mov     al, bl
        pop     ebx
        pop     ebp
        ret     4
    }
}
