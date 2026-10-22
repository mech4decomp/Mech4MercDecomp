/*
 * FUN_005af0a0 (11 B) — Constructor: sets vtable pointer at [ECX] to
 * 0x785ad0, then tail-jumps to FUN_004d9db0.
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d9db0(void);

__declspec(naked) void __stdcall FUN_005af0a0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x785AD0
        jmp     FUN_004d9db0
    }
}
