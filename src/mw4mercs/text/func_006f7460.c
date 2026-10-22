/*
 * Getter: returns byte at this+0x1e.
 *
 * __thiscall-style (ecx = this), RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_006f7460(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x1e]
        ret
    }
}
