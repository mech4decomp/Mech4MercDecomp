/*
 * FUN_005b7e50 (7 B) — __fastcall (ECX = this). Returns [this+0x168].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char __fastcall FUN_005b7e50(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x168]
        ret
    }
}
