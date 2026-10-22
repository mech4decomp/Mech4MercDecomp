/*
 * FUN_006BBED0 (46 B) — Walk script handle list, set current and call FUN_006cbfe0/FUN_006cc2e0.
 *
 * Returns 1 always.
 *
 * __cdecl.
 *
 * Disassembly:
 *   A1 48 F3 82 00          mov     eax, [0x0082f348]
 *   85 C0                   test    eax, eax
 *   74 22                   jz      l_done
 *   56                      push    esi
 *   8B 30                   mov     esi, [eax]
 *   A3 38 F3 82 00          mov     [0x0082f338], eax
 *   8B 40 08                mov     eax, [eax + 8]
 *   6A 10                   push    0x10
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_006cbfe0
 *   E8 xx xx xx xx          call    FUN_006cc2e0
 *   85 F6                   test    esi, esi
 *   8B C6                   mov     eax, esi
 *   75 E3                   jnz     l_loop
 *   B0 01                   mov     al, 1
 *   5E                      pop     esi
 *   C3                      ret
 *   done:
 *   B0 01                   mov     al, 1
 *   C3                      ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_006cbfe0(void *ptr, int mode);
void __cdecl FUN_006cc2e0(void);

__declspec(naked) void FUN_006bbed0(void)
{
    __asm {
; mov eax, [0x0082f348]
_emit 0xA1
_emit 0x48
_emit 0xF3
_emit 0x82
_emit 0x00
        test    eax, eax
        jz      l_done
        push    esi
l_loop:
        mov     esi, dword ptr [eax]
; mov [0x0082f338], eax
_emit 0xA3
_emit 0x38
_emit 0xF3
_emit 0x82
_emit 0x00
        mov     eax, dword ptr [eax + 8]
        push    0x10
        push    eax
        call    FUN_006cbfe0
        call    FUN_006cc2e0
        test    esi, esi
        mov     eax, esi
        jnz     l_loop
        mov     al, 1
        pop     esi
        ret
l_done:
        mov     al, 1
        ret
    }
}
