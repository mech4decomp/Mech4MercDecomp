/*
 * FUN_006BBF80 (93 B) — Check gosScript initialized, look up script handle,
 * set handle->field_0c based on param_2 (bool).
 *
 * Returns 1 if found, 0 otherwise.
 *
 * __cdecl, RET 8 (two stack params: script handle, char flag).
 *
 * Disassembly:
 *   55                      push    ebp
 *   8B EC                   mov     ebp, esp
 *   A0 38 E2 82 00          mov     al, [0x0082e238]
 *   84 C0                   test    al, al
 *   75 12                   jnz     ok
 *   68 18 B6 79 00          push    0x79b618
 *   E8 xx xx xx xx          call    FUN_006fab90
 *   83 C4 04                add     esp, 4
 *   85 C0                   test    eax, eax
 *   74 01                   jz      ok
 *   CC                      int     3
 *   ok:
 *   56                      push    esi
 *   8B 35 48 F3 82 00       mov     esi, [0x0082f348]
 *   85 F6                   test    esi, esi
 *   74 0D                   jz      notfound
 *   8B 45 08                mov     eax, [ebp + 8]
 *   3B C6                   cmp     eax, esi
 *   74 0D                   jz      found
 *   loop:
 *   8B 36                   mov     esi, [esi]
 *   85 F6                   test    esi, esi
 *   75 F6                   jnz     loop
 *   notfound:
 *   32 C0                   xor     al, al
 *   5E                      pop     esi
 *   5D                      pop     ebp
 *   C2 08 00                ret     8
 *   found:
 *   8B 46 08                mov     eax, [esi + 8]
 *   6A 13                   push    0x13
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_006cbfe0
 *   8A 55 0C                mov     dl, [ebp + 0xc]
 *   33 C9                   xor     ecx, ecx
 *   84 D2                   test    dl, dl
 *   0F 94 C1                setz    cl
 *   B0 01                   mov     al, 1
 *   41                      inc     ecx
 *   89 4E 0C                mov     [esi + 0xc], ecx
 *   5E                      pop     esi
 *   5D                      pop     ebp
 *   C2 08 00                ret     8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(const char *msg);
extern void __cdecl FUN_006cbfe0(void *ptr, int mode);

__declspec(naked) void FUN_006bbf80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        ; mov al, [0x0082e238]
        _emit 0xA0
        _emit 0x38
        _emit 0xE2
        _emit 0x82
        _emit 0x00
        test    al, al
        jnz     ok
        push    0x79b618
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      ok
        int     3
ok:
        push    esi
        ; mov esi, [0x0082f348]
        _emit 0x8B
        _emit 0x35
        _emit 0x48
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        test    esi, esi
        jz      notfound
        mov     eax, dword ptr [ebp + 8]
l_lp:
        cmp     eax, esi
        jz      found
        mov     esi, dword ptr [esi]
        test    esi, esi
        jnz     l_lp
notfound:
        xor     al, al
        pop     esi
        pop     ebp
        ret     8
found:
        mov     eax, dword ptr [esi + 8]
        push    0x13
        push    eax
        call    FUN_006cbfe0
        mov     dl, byte ptr [ebp + 0xc]
        xor     ecx, ecx
        test    dl, dl
        setz    cl
        mov     al, 1
        inc     ecx
        mov     dword ptr [esi + 0xc], ecx
        pop     esi
        pop     ebp
        ret     8
    }
}
