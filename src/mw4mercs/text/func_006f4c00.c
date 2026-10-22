// FUN_006F4C00 (3 bytes)
// ret 0x10
// __stdcall no-op, RET 16 (4 params).
__declspec(naked) void func_006f4c00(void)
{
    __asm {
        ret 0x10
    }
}
