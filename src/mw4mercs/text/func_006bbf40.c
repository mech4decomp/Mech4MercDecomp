/*
 * FUN_006BBF40 (62 B) — Look up script handle in list, write param_2 to handle->data[0x10].
 * If not found, assert "Script handle is invalid".
 *
 * __cdecl, RET 8 (two stack params: script handle, value).
 *
 * Disassembly:
 *   55                      push    ebp
 *   8B EC                   mov     ebp, esp
 *   A1 48 F3 82 00          mov     eax, [0x0082f348]
 *   85 C0                   test    eax, eax
 *   74 0D                   jz      assert
 *   8B 4D 08                mov     ecx, [ebp + 8]
 *   3B C8                   cmp     ecx, eax
 *   74 1C                   jz      found
 *   loop:
 *   8B 00                   mov     eax, [eax]
 *   85 C0                   test    eax, eax
 *   75 F6                   jnz     loop
 *   assert:
 *   68 3C B6 79 00          push    0x79b63c
 *   E8 xx xx xx xx          call    FUN_006fab90
 *   83 C4 04                add     esp, 4
 *   85 C0                   test    eax, eax
 *   74 01                   jz      ret
 *   CC                      int     3
 *   ret:
 *   5D                      pop     ebp
 *   C2 08 00                ret     8
 *   found:
 *   8B 40 08                mov     eax, [eax + 8]
 *   8B 48 10                mov     ecx, [eax + 0x10]
 *   8B 55 0C                mov     edx, [ebp + 0xc]
 *   89 11                   mov     [ecx], edx
 *   5D                      pop     ebp
 *   C2 08 00                ret     8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(const char *msg);

__declspec(naked) void FUN_006bbf40(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        ; mov eax, [0x0082f348]
        _emit 0xA1
        _emit 0x48
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        test    eax, eax
        jz      assert
        mov     ecx, dword ptr [ebp + 8]
l_lp:
        cmp     ecx, eax
        jz      found
        mov     eax, dword ptr [eax]
        test    eax, eax
        jnz     l_lp
assert:
        push    0x79b63c
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_ret
        int     3
l_ret:
        pop     ebp
        ret     8
found:
        mov     eax, dword ptr [eax + 8]
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [ebp + 0xc]
        mov     dword ptr [ecx], edx
        pop     ebp
        ret     8
    }
}
