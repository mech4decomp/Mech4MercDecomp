/*
 * FUN_0040aa40 (11 B) — __fastcall: sets vtable 0x76cf64 at [ecx], then
 * tail-jumps to FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_0040aa40(void)
{
    __asm {
        mov     dword ptr [ecx], 0x76cf64
        jmp     FUN_00415380
    }
}
