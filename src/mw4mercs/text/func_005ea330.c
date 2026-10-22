/*
 * FUN_005ea330 (11 B) — __thiscall. Sets vtable ptr 0x78992c on this (ECX),
 * then tail-jumps to FUN_005f07e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f07e0(void);

__declspec(naked) void __stdcall FUN_005ea330(void)
{
    __asm {
        mov     dword ptr [ecx], 0x78992c
        jmp     FUN_005f07e0
    }
}
