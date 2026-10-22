/*
 * FUN_005aa860 (11 B) — Constructor: sets vtable pointer at [ECX] to
 * 0x007854F4, then tail-jumps to FUN_005ed0b0.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005ed0b0(void);

__declspec(naked) void __fastcall FUN_005aa860(void *param)
{
    __asm {
        mov     dword ptr [ecx], 0x7854F4
        jmp     FUN_005ed0b0
    }
}
