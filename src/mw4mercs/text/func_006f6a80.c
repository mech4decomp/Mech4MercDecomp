/*
 * Getter: returns dword at this+0x4.
 *
 * __thiscall-style (ecx = this), RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_006f6a80(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 4]
        ret
    }
}
