/*
 * FUN_5e00e640 (7 B) — __fastcall (ECX = this).
 * Returns this->m45f8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e640(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x45f8]
        ret
    }
}
