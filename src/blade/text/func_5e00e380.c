/*
 * FUN_5e00e380 (29 B) — __fastcall (ECX = this).
 * Returns 1 if this->m45e4 != 0 and this->m45c8 != 0; else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e380(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x45e4]
        test    eax, eax
        jz      L39A
        mov     eax, dword ptr [ecx + 0x45c8]
        test    eax, eax
        jz      L39A
        mov     eax, 1
        ret
    L39A:
        xor     eax, eax
        ret
    }
}
