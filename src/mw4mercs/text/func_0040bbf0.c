/*
 * FUN_0040bbf0 (11 B) — __fastcall: sets vtable 0x76d030 at [ecx], then
 * tail-jumps to FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00415380(void);

__declspec(naked) void FUN_0040bbf0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76d030
        jmp     FUN_00415380
    }
}
