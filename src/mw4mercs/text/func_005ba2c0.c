/*
 * FUN_005ba2c0 (7 B) — Returns the float at this+0x1b0.
 *
 * __thiscall (ECX = this), RET 0.
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005ba2c0(void)
{
    __asm {
        fld     dword ptr [ecx + 0x1b0]
        ret
    }
}
