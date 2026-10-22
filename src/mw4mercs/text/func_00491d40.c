/*
 * FUN_00491d40 (4 B) — __thiscall getter: returns *(this+0x20).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00491d40(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x20]
        ret
    }
}
