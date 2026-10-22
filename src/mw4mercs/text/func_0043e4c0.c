/*
 * FUN_0043E4C0 (11 B) — Vtable setter thunk.
 *   Sets vtable to 0x76E610, tail-calls FUN_004421B0 (real constructor).
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004421b0(void);

__declspec(naked) void __stdcall FUN_0043e4c0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76E610
        jmp     FUN_004421b0
    }
}
