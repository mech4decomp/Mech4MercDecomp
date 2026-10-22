/*
 * FUN_005b7e40 (7 B) — __fastcall (ECX = this). Returns [this+0x16c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_005b7e40(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x16c]
        ret
    }
}
