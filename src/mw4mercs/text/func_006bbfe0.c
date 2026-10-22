/*
 * FUN_006BBFE0 (82 B) — Check gosScript initialized, look up script handle,
 * set handle->field_0c to 0, call FUN_006cbfe0.
 *
 * Returns 1 if found, 0 otherwise.
 *
 * __cdecl, RET 4 (one stack param: script handle).
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
 *   A1 48 F3 82 00          mov     eax, [0x0082f348]
 *   85 C0                   test    eax, eax
 *   74 0D                   jz      notfound
 *   8B 4D 08                mov     ecx, [ebp + 8]
 *   3B C8                   cmp     ecx, eax
 *   74 0C                   jz      found
 *   loop:
 *   8B 00                   mov     eax, [eax]
 *   85 C0                   test    eax, eax
 *   75 F6                   jnz     loop
 *   notfound:
 *   32 C0                   xor     al, al
 *   5D                      pop     ebp
 *   C2 04 00                ret     4
 *   found:
 *   C7 40 0C 00 00 00 00    mov     dword ptr [eax + 0xc], 0
 *   8B 40 08                mov     eax, [eax + 8]
 *   6A 14                   push    0x14
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_006cbfe0
 *   B0 01                   mov     al, 1
 *   5D                      pop     ebp
 *   C2 04 00                ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(const char *msg);
extern void __cdecl FUN_006cbfe0(void *ptr, int mode);

__declspec(naked) void FUN_006bbfe0(void)
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
        ; mov eax, [0x0082f348]
        _emit 0xA1
        _emit 0x48
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        test    eax, eax
        jz      notfound
        mov     ecx, dword ptr [ebp + 8]
l_lp:
        cmp     ecx, eax
        jz      found
        mov     eax, dword ptr [eax]
        test    eax, eax
        jnz     l_lp
notfound:
        xor     al, al
        pop     ebp
        ret     4
found:
        mov     dword ptr [eax + 0xc], 0
        mov     eax, dword ptr [eax + 8]
        push    0x14
        push    eax
        call    FUN_006cbfe0
        mov     al, 1
        pop     ebp
        ret     4
    }
}
