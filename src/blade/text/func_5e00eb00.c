/*
 * FUN_5e00eb00 (12 B) — __fastcall (ECX = this).
 * Returns (this->m45d8 & 0x400).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00eb00(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x45d8]
        and     eax, 0x400
        ret
    }
}
