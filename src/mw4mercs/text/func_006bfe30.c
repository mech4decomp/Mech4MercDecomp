/*
 * FUN_006BFE30 (26 B) — Free global pointer if non-null, then zero it.
 *
 * __cdecl.
 *
 * Disassembly:
 *   A1 04 A1 83 00          mov     eax, [0x0083a104]
 *   85 C0                   test    eax, eax
 *   74 10                   jz      l_skip
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_006f4230
 *   C7 05 04 A1 83 00 00 00 00 00 mov     [0x0083a104], 0
 *   skip:
 *   C3                      ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __stdcall FUN_006f4230(void *ptr);

__declspec(naked) void FUN_006bfe30(void)
{
    __asm {
; mov eax, [0x0083a104]
_emit 0xA1
_emit 0x04
_emit 0xA1
_emit 0x83
_emit 0x00
        test    eax, eax
        jz      l_skip
        push    eax
        call    FUN_006f4230
; mov [0x0083a104], 0
_emit 0xC7
_emit 0x05
_emit 0x04
_emit 0xA1
_emit 0x83
_emit 0x00
_emit 0x00
_emit 0x00
_emit 0x00
_emit 0x00
l_skip:
        ret
    }
}
