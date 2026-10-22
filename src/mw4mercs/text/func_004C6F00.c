/*
 * FUN_004C6F00 (9 B) -- __thiscall-style dispatch.
 * Clears bit 2 of [ecx+0x18], then jumps to vtable slot 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004C6F00(void)
{
    __asm {
        and     dword ptr [ecx + 0x18], 0xFFFFFFFB
        mov     eax, dword ptr [ecx]
        jmp     dword ptr [eax + 0x10]
    }
}
