/*
 * FUN_00450B40 (11 B) — Vtable setter thunk.
 *   Sets vtable to 0x76EA60, tail-calls FUN_00458590 (real constructor).
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00458590(void);

__declspec(naked) void __stdcall FUN_00450b40(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76EA60
        jmp     FUN_00458590
    }
}
