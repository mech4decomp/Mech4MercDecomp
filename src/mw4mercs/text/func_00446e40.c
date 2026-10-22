/*
 * FUN_00446E40 (11 B) — Vtable setter thunk.
 *   Sets vtable to 0x76E808, tail-calls FUN_00486F40 (real constructor).
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00486f40(void);

__declspec(naked) void __stdcall FUN_00446e40(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76E808
        jmp     FUN_00486f40
    }
}
