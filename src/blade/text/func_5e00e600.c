/*
 * FUN_5e00e600 (15 B) — __fastcall (ECX = this).
 * Returns (0x45d0 == 2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e600(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x45d0]
        xor     eax, eax
        cmp     edx, 0x2
        setz    al
        ret
    }
}
