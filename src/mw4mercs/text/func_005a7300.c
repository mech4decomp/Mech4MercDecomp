/*
 * FUN_005a7300 (11 B) — Vtable-setter + tail-call.
 *
 * Sets the vtable pointer at [ECX] to 0x784c00, then tail-calls
 * FUN_005ed0b0.
 *
 * __fastcall (ECX = this), tail-call via JMP.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005ed0b0(void);

__declspec(naked) void __fastcall FUN_005a7300(void)
{
    __asm {
        mov     dword ptr [ecx], 0x784c00
        jmp     FUN_005ed0b0
    }
}
