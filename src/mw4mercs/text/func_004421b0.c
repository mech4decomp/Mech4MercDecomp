/*
 * FUN_004421B0 (11 B) — Vtable setter thunk.
 *   Sets vtable to 0x76E6F0, tail-calls FUN_00458590 (real constructor).
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00458590(void);

__declspec(naked) void __stdcall FUN_004421b0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76E6F0
        jmp     FUN_00458590
    }
}
