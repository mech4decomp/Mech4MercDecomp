/*
 * FUN_004DFDC0 (11 B) — Constructor thunk: sets vtable to 0x773980,
 * then tail-calls FUN_00415380.
 *
 * __fastcall (ECX = this), no stack params.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00415380(void);

__declspec(naked) void __fastcall FUN_004dfdc0(void)
{
    __asm {
        mov dword ptr [ecx], 0x00773980
        jmp  FUN_00415380
    }
}
