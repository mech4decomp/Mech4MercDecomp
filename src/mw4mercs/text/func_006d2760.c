/*
 * FUN_006D2760 (111 B) — Array-of-pointers destructor.
 *
 * __thiscall (ECX = this), RET 4. If param & 2: treats this as
 * an array of pointers (count at this[-1]), frees each non-null
 * pointer via FUN_004084E0. If param & 1: frees the container itself.
 * If param & 2 is clear: frees *this (single pointer) and optionally
 * this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __cdecl FUN_006d2760(void)
{
    __asm {
        push    ebx
        mov     bl, byte ptr [esp + 8]
        test    bl, 2
        push    esi
        mov     esi, ecx
        jz      l_single
        mov     eax, dword ptr [esi - 4]
        push    edi
        lea     edi, [esi - 4]
        lea     esi, [esi + eax * 8]
        dec     eax
        js      l_check_free
        push    ebp
        lea     ebp, [eax + 1]
    l_loop:
        mov     eax, dword ptr [esi - 8]
        sub     esi, 8
        test    eax, eax
        jz      l_next
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_next:
        dec     ebp
        jnz     l_loop
        pop     ebp
    l_check_free:
        test    bl, 1
        jz      l_ret
        push    edi
        call    FUN_004084e0
        add     esp, 4
    l_ret:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    l_single:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      l_single_check
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_single_check:
        test    bl, 1
        jz      l_single_ret
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_single_ret:
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    }
}
