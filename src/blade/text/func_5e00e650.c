/*
 * FUN_5e00e650 (7 B) — __fastcall (ECX = this).
 * Returns this->m45fc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e650(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x45fc]
        ret
    }
}
