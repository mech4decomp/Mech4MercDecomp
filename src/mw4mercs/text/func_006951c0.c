/*
 * FUN_006951c0 (4 B) -- thiscall-style getter: returns the dword at
 * [ecx+0x34] (a member field of the object in ecx).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006951c0(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x34]
        ret
    }
}
