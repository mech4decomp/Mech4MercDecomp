/*
 * FUN_006BF4A0 (31 B) — Free global pointer via FUN_00713a70 if non-null.
 *
 * __cdecl.
 *
 * Disassembly:
 *   A1 E8 F3 82 00          mov     eax, [0x0082f3e8]
 *   85 C0                   test    eax, eax
 *   74 15                   jz      l_skip
 *   50                      push    eax
 *   68 E8 E2 82 00          push    0x82e2e8
 *   E8 xx xx xx xx          call    FUN_00713a70
 *   C7 05 E8 F3 82 00 00 00 00 00 mov     [0x0082f3e8], 0
 *   skip:
 *   C3                      ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_00713a70(void *a, void *b);

__declspec(naked) void FUN_006bf4a0(void)
{
    __asm {
; mov eax, [0x0082f3e8]
_emit 0xA1
_emit 0xE8
_emit 0xF3
_emit 0x82
_emit 0x00
        test    eax, eax
        jz      l_skip
        push    eax
        push    0x82e2e8
        call    FUN_00713a70
; mov [0x0082f3e8], 0
_emit 0xC7
_emit 0x05
_emit 0xE8
_emit 0xF3
_emit 0x82
_emit 0x00
_emit 0x00
_emit 0x00
_emit 0x00
_emit 0x00
l_skip:
        ret
    }
}
