/*
 * FUN_006FFC00 (124 B) — QueryMarkRefresh helper.
 *
 * __cdecl, RET 8. Validates params, gets game list via FUN_006F89F0,
 * formats a string via sprintf, and calls vtable[8] on the game
 * list object. Asserts on NULL params or NULL game list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006f89f0(void);
extern int __cdecl FUN_006fabf0(const char *, ...);

__declspec(naked) void __cdecl FUN_006ffc00(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x40
        push    ebx
        mov     ebx, dword ptr [ebp + 8]
        test    ebx, ebx
        push    esi
        push    edi
        jz      l_null_err
        mov     edi, dword ptr [ebp + 0xc]
        test    edi, edi
        jz      l_null_err
        call    FUN_006f89f0
        mov     esi, eax
        test    esi, esi
        jnz     l_got_list
        push    0x7a0fc8
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        jz      l_done_far
        int     3
    l_done2:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    l_got_list:
        push    ebx
        lea     eax, [ebp - 0x40]
        push    0x7a0d70
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0x20
        _emit   0xB4
        _emit   0x76
        _emit   0x00
        mov     edx, dword ptr [esi]
        add     esp, 0xc
        lea     eax, [ebp - 0x40]
        push    eax
        push    0x79fafc
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 8]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    l_null_err:
        push    0x7a0f8c
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        jz      l_done_far
        int     3
    l_done_far:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
