/*
 * FUN_004D21C0 (11 B) — Constructor thunk: sets vtable to 0x772570,
 * then tail-calls FUN_0041E710.
 *
 * __fastcall (ECX = this), no stack params.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041e710(void);

__declspec(naked) void __fastcall FUN_004d21c0(void)
{
    __asm {
        mov dword ptr [ecx], 0x00772570
        jmp  FUN_0041e710
    }
}
