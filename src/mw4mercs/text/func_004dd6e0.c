/*
 * FUN_004DD6E0 (11 B) — Constructor thunk: sets vtable to 0x773888,
 * then tail-calls FUN_004DD4A0.
 *
 * __fastcall (ECX = this), no stack params.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004dd4a0(void);

__declspec(naked) void __fastcall FUN_004dd6e0(void)
{
    __asm {
        mov dword ptr [ecx], 0x00773888
        jmp  FUN_004dd4a0
    }
}
