/*
 * FUN_005e3450 (11 B) — Vtable-set + tail call.
 *
 * __fastcall (ECX = this). Sets [this] = 0x788df8, then
 * tail-jumps to FUN_005e6de0 (this still in ECX).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005e6de0(void);

__declspec(naked) void __fastcall FUN_005e3450(void)
{
    __asm {
        mov     dword ptr [ecx], 0x788df8
        jmp     FUN_005e6de0
    }
}
