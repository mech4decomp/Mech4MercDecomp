/*
 * Getter: returns byte at this+0x28.
 *
 * __thiscall-style (ecx = this), RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_006f74e0(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x28]
        ret
    }
}
