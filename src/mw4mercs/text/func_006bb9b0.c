/*
 * FUN_006BB9B0 (19 B) — Decrement refcount, restore callback if zero.
 *
 * __cdecl.
 *
 * Disassembly:
 *   FF 0D DC E2 82 00       dec     dword ptr [0x0082e2dc]
 *   75 0A                   jnz     l_skip
 *   A1 D4 E1 82 00          mov     eax, [0x0082e1d4]
 *   A3 30 8A 85 00          mov     [0x00858a30], eax
 *   skip:
 *   C3                      ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006bb9b0(void)
{
    __asm {
        ; dec dword ptr [0x0082e2dc]
        _emit 0xFF
        _emit 0x0D
        _emit 0xDC
        _emit 0xE2
        _emit 0x82
        _emit 0x00
        jnz     l_skip
; mov eax, [0x0082e1d4]
_emit 0xA1
_emit 0xD4
_emit 0xE1
_emit 0x82
_emit 0x00
; mov [0x00858a30], eax
_emit 0xA3
_emit 0x30
_emit 0x8A
_emit 0x85
_emit 0x00
l_skip:
        ret
    }
}
