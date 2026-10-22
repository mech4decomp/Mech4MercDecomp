/*
 * FUN_005ba2a0 (7 B) — Returns the float at this+0x188.
 *
 * __thiscall (ECX = this), RET 0.
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005ba2a0(void)
{
    __asm {
        fld     dword ptr [ecx + 0x188]
        ret
    }
}
