/*
 * FUN_005d9960 (11 B) — __thiscall. Sets vtable ptr 0x7882a4 at this->[0]
 * then tail-jumps to FUN_004dfdc0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dfdc0(void);

__declspec(naked) void __cdecl FUN_005d9960(void)
{
    __asm {
        mov     dword ptr [ecx], 0x7882a4
        jmp     FUN_004dfdc0
    }
}
