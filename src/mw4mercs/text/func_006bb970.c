/*
 * FUN_006BB970 (50 B) — Increment refcount, set callback on first entry.
 *
 * __cdecl, RET 4 (one stack param).
 *
 * Disassembly:
 *   A1 DC E2 82 00          mov     eax, [0x0082e2dc]
 *   40                      inc     eax
 *   83 F8 01                cmp     eax, 1
 *   A3 DC E2 82 00          mov     [0x0082e2dc], eax
 *   75 1F                   jnz     l_skip
 *   8B 0D 30 8A 85 00       mov     ecx, [0x00858a30]
 *   8A 44 24 04             mov     al, byte ptr [esp + 4]
 *   A2 E0 E2 82 00          mov     [0x0082e2e0], al
 *   89 0D D4 E1 82 00       mov     [0x0082e1d4], ecx
 *   C7 05 30 8A 85 00 80 FB 6B 00 mov     [0x00858a30], 0x6bfb80
 *   skip:
 *   C2 04 00                ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006bb970(void)
{
    __asm {
; mov eax, [0x0082e2dc]
_emit 0xA1
_emit 0xDC
_emit 0xE2
_emit 0x82
_emit 0x00
        inc     eax
        cmp     eax, 1
; mov [0x0082e2dc], eax
_emit 0xA3
_emit 0xDC
_emit 0xE2
_emit 0x82
_emit 0x00
        jnz     l_skip
; mov ecx, [0x00858a30]
_emit 0x8B
_emit 0x0D
_emit 0x30
_emit 0x8A
_emit 0x85
_emit 0x00
        mov     al, byte ptr [esp + 4]
; mov byte ptr [0x0082e2e0], al
_emit 0xA2
_emit 0xE0
_emit 0xE2
_emit 0x82
_emit 0x00
; mov [0x0082e1d4], ecx
_emit 0x89
_emit 0x0D
_emit 0xD4
_emit 0xE1
_emit 0x82
_emit 0x00
; mov [0x00858a30], 0x6bfb80
_emit 0xC7
_emit 0x05
_emit 0x30
_emit 0x8A
_emit 0x85
_emit 0x00
_emit 0x80
_emit 0xFB
_emit 0x6B
_emit 0x00
l_skip:
        ret     4
    }
}
