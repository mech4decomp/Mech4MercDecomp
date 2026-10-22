/*
 * FUN_00491cd0 (4 B) — __thiscall getter: returns *(this+0x24).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00491cd0(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x24]
        ret
    }
}
