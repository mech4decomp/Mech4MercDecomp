/*
 * FUN_005b7d90 (7 B) — __thiscall getter (ECX = this). Returns the byte
 * at this+0x16a.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char __fastcall FUN_005b7d90(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x16a]
        ret
    }
}
