/*
 * FUN_5e00e3c0 (7 B) — __fastcall (ECX = this).
 * Returns this->m461c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_5e00e3c0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x461c]
        ret
    }
}
