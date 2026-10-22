/*
 * FUN_5e00e630 (7 B) — __fastcall (ECX = this).
 * Returns this->m4618.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e630(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4618]
        ret
    }
}
