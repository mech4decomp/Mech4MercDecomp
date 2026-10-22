/*
 * FUN_00431930 (11 B) — Vtable setter thunk.
 *   Sets vtable to 0x76E330, tail-calls FUN_00435E40 (real constructor).
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00435e40(void);

__declspec(naked) void __stdcall FUN_00431930(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76E330
        jmp     FUN_00435e40
    }
}
