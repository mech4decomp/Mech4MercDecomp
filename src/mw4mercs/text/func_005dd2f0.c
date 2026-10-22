/*
 * FUN_005dd2f0 (7 B) — __fastcall (ECX = this). Returns byte at this+0x1D0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005dd2f0(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x1d0]
        ret
    }
}
