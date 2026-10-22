/*
 * FUN_00409600 (11 B) — __fastcall destructor stub: sets vtable 0x76cdfc
 * then tail-jumps to FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_00409600(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76cdfc
        jmp     FUN_00415380
    }
}
