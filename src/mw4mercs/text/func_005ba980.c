/*
 * FUN_005ba980 (11 B) — __fastcall (ECX = this).
 *
 * Installs vtable 0x786dfc at [this], then tail-jumps to FUN_005e6de0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005e6de0(void);

__declspec(naked) void __stdcall FUN_005ba980(void)
{
    __asm {
        mov     dword ptr [ecx], 0x786dfc
        jmp     FUN_005e6de0
    }
}
