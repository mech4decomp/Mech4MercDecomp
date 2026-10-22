/*
 * FUN_5e00e3a0 (28 B) — __fastcall (ECX = this).
 * Returns 1 if this->m4608 == 4 and this->m45c8 != 0; else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e3a0(void)
{
    __asm {
        cmp     dword ptr [ecx + 0x4608], 4
        jnz     L3B9
        mov     eax, dword ptr [ecx + 0x45c8]
        test    eax, eax
        jz      L3B9
        mov     eax, 1
        ret
    L3B9:
        xor     eax, eax
        ret
    }
}
