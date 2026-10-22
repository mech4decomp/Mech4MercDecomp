/*
 * Getter: returns dword at this+0x34.
 *
 * __thiscall-style (ecx = this), RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_006f7540(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x34]
        ret
    }
}
