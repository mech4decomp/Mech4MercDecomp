/*
 * FUN_00643040 (11 B) — __thiscall: sets this->vtable = 0x792600 then
 * tail-jumps to FUN_00561730 (scalar deleting destructor / teardown).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00561730(void);

__declspec(naked) void FUN_00643040(void)
{
    __asm {
        mov     dword ptr [ecx], 0x792600
        jmp     FUN_00561730
    }
}
