/*
 * FUN_0044D0A0 (11 B) — Vtable setter thunk.
 *   Sets vtable to 0x76E974, tail-calls FUN_00450B40 (real constructor).
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00450b40(void);

__declspec(naked) void __stdcall FUN_0044d0a0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76E974
        jmp     FUN_00450b40
    }
}
