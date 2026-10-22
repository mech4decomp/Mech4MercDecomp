/*
 * FUN_005b69a0 (11 B) — __fastcall (ECX = this). Sets vtable pointer then
 * tail-jumps to FUN_005e6de0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005e6de0(void);

__declspec(naked) void __stdcall FUN_005b69a0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x7866f4
        jmp     FUN_005e6de0
    }
}
