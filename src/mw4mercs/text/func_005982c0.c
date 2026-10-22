/*
 * FUN_005982C0 (extent 0x5982c0-0x5982cb) - thunk: *arg = *this, ret 4,
 * trailing alignment nop.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void func_005982C0(void)
{
    __asm {
        mov ecx, [ecx]
        mov eax, [esp+4]
        mov [eax], ecx
        ret 4
        nop
    }
}
