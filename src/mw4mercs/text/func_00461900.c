/*
 * FUN_00461900 (11 B) — Vtable setter thunk.
 *   Sets vtable to 0x76EE3C, tail-calls FUN_00465280 (real constructor).
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00465280(void);

__declspec(naked) void __stdcall FUN_00461900(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76EE3C
        jmp     FUN_00465280
    }
}
