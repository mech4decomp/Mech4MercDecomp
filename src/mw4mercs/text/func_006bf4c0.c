/*
 * FUN_006BF4C0 (58 B) — Initialize globals: memset 0x200 dwords at 0x82e2e8 to 0,
 * then set every 8th dword from 0x82e2f4 to 0x3f800000 (1.0f), zero DAT_0082f3e8,
 * set DAT_007b60b8 to -1.
 *
 * __cdecl.
 *
 * Disassembly:
 *   57                      push    edi
 *   33 C0                   xor     eax, eax
 *   B9 00 02 00 00          mov     ecx, 0x200
 *   BF E8 E2 82 00          mov     edi, 0x82e2e8
 *   F3 AB                   rep stosd
 *   B8 F4 E2 82 00          mov     eax, 0x82e2f4
 *   5F                      pop     edi
 *   loop:
 *   C7 00 00 00 80 3F       mov     dword ptr [eax], 0x3f800000
 *   83 C0 20                add     eax, 0x20
 *   3D F4 EA 82 00          cmp     eax, 0x82eaf4
 *   7C F0                   jl      loop
 *   C7 05 E8 F3 82 00 00 00 00 00 mov     [0x0082f3e8], 0
 *   C7 05 B8 60 7B 00 FF FF FF FF mov     [0x007b60b8], 0xffffffff
 *   C3                      ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006bf4c0(void)
{
    __asm {
        push    edi
        xor     eax, eax
        mov     ecx, 0x200
        mov     edi, 0x82e2e8
        rep stosd
        mov     eax, 0x82e2f4
        pop     edi
l_loop:
        mov     dword ptr [eax], 0x3f800000
        add     eax, 0x20
        cmp     eax, 0x82eaf4
        jl      l_loop
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
; mov [0x007b60b8], 0xffffffff
_emit 0xC7
_emit 0x05
_emit 0xB8
_emit 0x60
_emit 0x7B
_emit 0x00
_emit 0xFF
_emit 0xFF
_emit 0xFF
_emit 0xFF
        ret
    }
}
