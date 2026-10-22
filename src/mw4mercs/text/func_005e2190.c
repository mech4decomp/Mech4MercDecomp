/*
 * FUN_005e2190 (11 B) — Constructor: sets vtable pointer at [ECX] to
 * 0x788A4C, then tail-jumps to FUN_005e3450.
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005e3450(void);

__declspec(naked) void FUN_005e2190(void)
{
    __asm {
        mov     dword ptr [ecx], 0x788A4C
        jmp     FUN_005e3450
    }
}
