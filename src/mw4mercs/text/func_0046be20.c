/*
 * FUN_0046BE20 (11 B) — Vtable setter thunk.
 *   Sets vtable to 0x76F118, tail-calls FUN_0046FBF0 (real constructor).
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0046fbf0(void);

__declspec(naked) void __stdcall FUN_0046be20(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76F118
        jmp     FUN_0046fbf0
    }
}
