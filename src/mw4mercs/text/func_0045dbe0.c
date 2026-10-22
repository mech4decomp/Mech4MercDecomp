/*
 * FUN_0045DBE0 (11 B) — Vtable setter thunk.
 *   Sets vtable to 0x76ED48, tail-calls FUN_00461900 (real constructor).
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00461900(void);

__declspec(naked) void __stdcall FUN_0045dbe0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76ED48
        jmp     FUN_00461900
    }
}
