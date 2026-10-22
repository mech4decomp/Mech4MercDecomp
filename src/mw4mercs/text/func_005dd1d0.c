/*
 * FUN_005dd1d0 (13 B) — __thiscall (ECX = this), RET 4.
 * Stores param byte at this+0x1D0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005dd1d0(void)
{
    __asm {
        mov     al, byte ptr [esp + 0x4]
        mov     byte ptr [ecx + 0x1d0], al
        ret     0x4
    }
}
