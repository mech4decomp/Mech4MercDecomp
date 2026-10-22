/*
 * FUN_5e00e350 (45 B) — __fastcall (ECX = this).
 * Returns 1 if this->m45e8 != 0 and (this->m4610 == 6 or 5)
 * and this->m460c == 0; else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e350(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x45e8]
        test    eax, eax
        jz      L37A
        mov     eax, dword ptr [ecx + 0x4610]
        cmp     eax, 6
        jz      L36A
        cmp     eax, 5
        jnz     L37A
    L36A:
        mov     eax, dword ptr [ecx + 0x460c]
        test    eax, eax
        jnz     L37A
        mov     eax, 1
        ret
    L37A:
        xor     eax, eax
        ret
    }
}
