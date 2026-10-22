/*
 * FUN_006BBE80 (77 B) — Set current script handle, walk list, call FUN_006cbfe0/FUN_006cc2e0
 * if found, else just call FUN_006ce3b0.
 *
 * Returns 1 if found, 0 otherwise.
 *
 * __cdecl, RET 4 (one stack param: script handle).
 *
 * Disassembly:
 *   56                      push    esi
 *   8B 74 24 08             mov     esi, [esp + 8]
 *   85 F6                   test    esi, esi
 *   74 23                   jz      fail
 *   E8 xx xx xx xx          call    FUN_006ce300
 *   A1 48 F3 82 00          mov     eax, [0x0082f348]
 *   85 C0                   test    eax, eax
 *   89 35 38 F3 82 00       mov     [0x0082f338], esi
 *   74 0A                   jz      end
 *   loop:
 *   3B F0                   cmp     esi, eax
 *   74 11                   jz      found
 *   8B 00                   mov     eax, [eax]
 *   85 C0                   test    eax, eax
 *   75 F6                   jnz     l_loop
 *   end:
 *   E8 xx xx xx xx          call    FUN_006ce3b0
 *   fail:
 *   32 C0                   xor     al, al
 *   5E                      pop     esi
 *   C2 04 00                ret     4
 *   found:
 *   8B 40 08                mov     eax, [eax + 8]
 *   6A 10                   push    0x10
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_006cbfe0
 *   E8 xx xx xx xx          call    FUN_006cc2e0
 *   E8 xx xx xx xx          call    FUN_006ce3b0
 *   B0 01                   mov     al, 1
 *   5E                      pop     esi
 *   C2 04 00                ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_006cbfe0(void *ptr, int mode);
void __cdecl FUN_006cc2e0(void);
void __cdecl FUN_006ce300(void);
void __cdecl FUN_006ce3b0(void);

__declspec(naked) void FUN_006bbe80(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        test    esi, esi
        jz      fail
        call    FUN_006ce300
; mov eax, [0x0082f348]
_emit 0xA1
_emit 0x48
_emit 0xF3
_emit 0x82
_emit 0x00
        test    eax, eax
; mov [0x0082f338], esi
_emit 0x89
_emit 0x35
_emit 0x38
_emit 0xF3
_emit 0x82
_emit 0x00
        jz      end
l_loop:
        cmp     esi, eax
        jz      found
        mov     eax, dword ptr [eax]
        test    eax, eax
        jnz     l_loop
end:
        call    FUN_006ce3b0
fail:
        xor     al, al
        pop     esi
        ret     4
found:
        mov     eax, dword ptr [eax + 8]
        push    0x10
        push    eax
        call    FUN_006cbfe0
        call    FUN_006cc2e0
        call    FUN_006ce3b0
        mov     al, 1
        pop     esi
        ret     4
    }
}
