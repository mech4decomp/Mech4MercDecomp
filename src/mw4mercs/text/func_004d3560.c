/*
 * FUN_004D3560 (11 B) — Constructor thunk: sets vtable to 0x7727DC,
 * then tail-calls FUN_004DD1C0.
 *
 * __fastcall (ECX = this), no stack params.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004dd1c0(void);

__declspec(naked) void __fastcall FUN_004d3560(void)
{
    __asm {
        mov dword ptr [ecx], 0x007727dc
        jmp  FUN_004dd1c0
    }
}
