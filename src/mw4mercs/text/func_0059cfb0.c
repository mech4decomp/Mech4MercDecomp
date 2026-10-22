/*
 * FUN_0059CFB0 (19 B) — Array lookup via field_0x28 index.
 *
 * Returns array[field_0x28 - 1] if field_0x28 != 0, else 0.
 * __fastcall (ECX = this).
 *
 * Disassembly:
 *   8B 41 28       mov     eax, [ecx+0x28]
 *   85 C0          test    eax, eax
 *   75 01          jne     +1
 *   C3             ret
 *   8B 89 84 00 00 00  mov ecx, [ecx+0x84]
 *   8B 44 81 FC    mov     eax, [ecx+eax*4-4]
 *   C3             ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall func_0059cfb0(void)
{
    __asm {
        mov     eax, [ecx+0x28]
        test    eax, eax
        jne     L_go
        ret
    L_go:
        mov     ecx, [ecx+0x84]
        mov     eax, [ecx+eax*4-4]
        ret
    }
}
