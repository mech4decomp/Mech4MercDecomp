/*
 * FUN_006B3750 (34 B) — Read two bytes from global struct and store to output params.
 *
 * Reads bytes at DAT_007dc728 + 0x150 and DAT_007dc728 + 0x151,
 * zero-extends them to 32 bits, stores to *param_1 and *param_2.
 *
 * __cdecl, RET 8 (two stack params).
 *
 * Disassembly:
 *   A1 28 C7 7D 00          mov     eax, [0x007dc728]
 *   8B 54 24 04             mov     edx, [esp + 4]
 *   33 C9                   xor     ecx, ecx
 *   8A 88 50 01 00 00       mov     cl, byte ptr [eax + 0x150]
 *   89 0A                   mov     [edx], ecx
 *   8B 54 24 08             mov     edx, [esp + 8]
 *   33 C9                   xor     ecx, ecx
 *   8A 88 51 01 00 00       mov     cl, byte ptr [eax + 0x151]
 *   89 0A                   mov     [edx], ecx
 *   C3                      ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_006b3750(int *a, int *b);

__declspec(naked) void FUN_006b3750(void)
{
    __asm {
; mov eax, [0x007dc728]
_emit 0xA1
_emit 0x28
_emit 0xC7
_emit 0x7D
_emit 0x00
        mov     edx, dword ptr [esp + 4]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x150]
        mov     dword ptr [edx], ecx
        mov     edx, dword ptr [esp + 8]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x151]
        mov     dword ptr [edx], ecx
        ret
    }
}
