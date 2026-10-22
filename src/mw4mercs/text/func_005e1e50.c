/*
 * FUN_005e1e50 (11 B) — Constructor: sets vtable pointer at [ECX] to
 * 0x788918, then tail-jumps to FUN_005f89d0.
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005f89d0(void);

__declspec(naked) void FUN_005e1e50(void)
{
    __asm {
        mov     dword ptr [ecx], 0x788918
        jmp     FUN_005f89d0
    }
}
