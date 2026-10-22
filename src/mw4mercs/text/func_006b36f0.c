/*
 * FUN_006B36F0 (91 B) — Divide a 16-bit value by a byte divisor, store quotient
 * and remainder.
 *
 * __cdecl, RET 0xC (three stack params: ushort value, uint *quotient, uint *remainder).
 *
 * Disassembly:
 *   8B 4C 24 04             mov     ecx, [esp + 4]
 *   66 85 C9                test    cx, cx
 *   56                      push    esi
 *   8B 35 28 C7 7D 00       mov     esi, [0x007dc728]
 *   57                      push    edi
 *   74 1C                   jz      zero
 *   53                      push    ebx
 *   33 DB                   xor     ebx, ebx
 *   8A 9E 51 01 00 00       mov     bl, byte ptr [esi + 0x151]
 *   8B C1                   mov     eax, ecx
 *   25 FF FF 00 00          and     eax, 0xffff
 *   99                      cdq
 *   F7 FB                   idiv    ebx
 *   5B                      pop     ebx
 *   8A D0                   mov     dl, al
 *   88 54 24 0C             mov     byte ptr [esp + 0xc], dl
 *   EB 06                   jmp     store
 *   zero:
 *   32 D2                   xor     dl, dl
 *   88 54 24 0C             mov     byte ptr [esp + 0xc], dl
 *   store:
 *   8B 44 24 0C             mov     eax, [esp + 0xc]
 *   8B 7C 24 10             mov     edi, [esp + 0x10]
 *   25 FF 00 00 00          and     eax, 0xff
 *   89 07                   mov     [edi], eax
 *   8A 86 51 01 00 00       mov     al, byte ptr [esi + 0x151]
 *   F6 EA                   imul    dl
 *   8B 54 24 14             mov     edx, [esp + 0x14]
 *   2A C8                   sub     cl, al
 *   5F                      pop     edi
 *   5E                      pop     esi
 *   81 E1 FF 00 00 00       and     ecx, 0xff
 *   89 0A                   mov     [edx], ecx
 *   C3                      ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006b36f0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        test    cx, cx
        push    esi
; mov esi, [0x007dc728]
_emit 0x8B
_emit 0x35
_emit 0x28
_emit 0xC7
_emit 0x7D
_emit 0x00
        push    edi
        jz      zero
        push    ebx
        xor     ebx, ebx
        mov     bl, byte ptr [esi + 0x151]
        mov     eax, ecx
        and     eax, 0xffff
        cdq
        idiv    ebx
        pop     ebx
        mov     dl, al
        mov     byte ptr [esp + 0xc], dl
        jmp     store
zero:
        xor     dl, dl
        mov     byte ptr [esp + 0xc], dl
store:
        mov     eax, dword ptr [esp + 0xc]
        mov     edi, dword ptr [esp + 0x10]
        and     eax, 0xff
        mov     dword ptr [edi], eax
        mov     al, byte ptr [esi + 0x151]
        imul    dl
        mov     edx, dword ptr [esp + 0x14]
        sub     cl, al
        pop     edi
        pop     esi
        and     ecx, 0xff
        mov     dword ptr [edx], ecx
        ret
    }
}
