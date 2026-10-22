/*
 * FUN_00416c60 (11 B) — __fastcall destructor: sets vtable 0x76d510,
 * tail-jumps to FUN_00415c40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415c40(void);

__declspec(naked) void FUN_00416c60(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76d510
        jmp     FUN_00415c40
    }
}
