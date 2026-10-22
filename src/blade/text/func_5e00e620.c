/*
 * FUN_5e00e620 (7 B) — __fastcall (ECX = this).
 * Returns this->m4388.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e620(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4388]
        ret
    }
}
