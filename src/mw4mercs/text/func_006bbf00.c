/*
 * FUN_006BBF00 (61 B) — Look up script handle in list, return value at handle->data[0x10].
 * If not found, assert "Script handle is invalid".
 *
 * __cdecl, RET 4 (one stack param: script handle).
 *
 * Disassembly:
 *   55                      push    ebp
 *   8B EC                   mov     ebp, esp
 *   A1 48 F3 82 00          mov     eax, [0x0082f348]
 *   85 C0                   test    eax, eax
 *   74 0D                   jz      assert
 *   8B 4D 08                mov     ecx, [ebp + 8]
 *   3B C8                   cmp     ecx, eax
 *   74 1E                   jz      found
 *   loop:
 *   8B 00                   mov     eax, [eax]
 *   85 C0                   test    eax, eax
 *   75 F6                   jnz     loop
 *   assert:
 *   68 3C B6 79 00          push    0x79b63c
 *   E8 xx xx xx xx          call    FUN_006fab90
 *   83 C4 04                add     esp, 4
 *   85 C0                   test    eax, eax
 *   74 01                   jz      ret0
 *   CC                      int     3
 *   ret0:
 *   33 C0                   xor     eax, eax
 *   5D                      pop     ebp
 *   C2 04 00                ret     4
 *   found:
 *   8B 40 08                mov     eax, [eax + 8]
 *   8B 48 10                mov     ecx, [eax + 0x10]
 *   8B 01                   mov     eax, [ecx]
 *   5D                      pop     ebp
 *   C2 04 00                ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(const char *msg);

__declspec(naked) void FUN_006bbf00(void)
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
        jz      ret0
        int     3
ret0:
        xor     eax, eax
        pop     ebp
        ret     4
found:
        mov     eax, dword ptr [eax + 8]
        mov     ecx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [ecx]
        pop     ebp
        ret     4
    }
}
