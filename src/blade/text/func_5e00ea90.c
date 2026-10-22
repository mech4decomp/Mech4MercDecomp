/*
 * FUN_5e00ea90 (15 B) — __fastcall (ECX = this).
 * Returns (this->m4604 == 2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00ea90(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x4604]
        xor     eax, eax
        cmp     edx, 2
        setz    al
        ret
    }
}
