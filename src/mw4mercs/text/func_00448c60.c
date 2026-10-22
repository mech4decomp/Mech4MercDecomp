/*
 * FUN_00448C60 (11 B) — Vtable setter thunk.
 *   Sets vtable to 0x76E858, tail-calls FUN_00455500 (real constructor).
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00455500(void);

__declspec(naked) void __stdcall FUN_00448c60(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76E858
        jmp     FUN_00455500
    }
}
