/*
 * FUN_5e00e660 (10 B) — __fastcall (ECX = this).
 * Returns this->m45d8 & 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned int __fastcall FUN_5e00e660(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x45d8]
        and     eax, 1
        ret
    }
}
