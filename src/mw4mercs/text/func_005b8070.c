/*
 * FUN_005b8070 (11 B) — Constructor: sets vtable pointer at [ECX] then
 * tail-jumps to FUN_00415380.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00415380(void);

__declspec(naked) void FUN_005b8070(void)
{
    __asm {
        mov     dword ptr [ecx], 0x7869D0
        jmp     FUN_00415380
    }
}
