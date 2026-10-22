/*
 * FUN_004450F0 (11 B) — Vtable setter thunk.
 *   Sets vtable to 0x76E7C4, tail-calls FUN_00485570 (real constructor).
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00485570(void);

__declspec(naked) void __stdcall FUN_004450f0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76E7C4
        jmp     FUN_00485570
    }
}
