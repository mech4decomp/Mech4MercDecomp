/*
 * FUN_0046FBF0 (11 B) — Vtable setter thunk.
 *   Sets vtable to 0x76F1F8, tail-calls FUN_0047AB90 (real constructor).
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0047ab90(void);

__declspec(naked) void __stdcall FUN_0046fbf0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76F1F8
        jmp     FUN_0047ab90
    }
}
