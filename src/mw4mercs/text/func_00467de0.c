/*
 * FUN_00467DE0 (11 B) — Vtable setter thunk.
 *   Sets vtable to 0x76F024, tail-calls FUN_0046BE20 (real constructor).
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0046be20(void);

__declspec(naked) void __stdcall FUN_00467de0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76F024
        jmp     FUN_0046be20
    }
}
