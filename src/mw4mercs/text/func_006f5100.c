// FUN_006F5100 (3 bytes)
// ret 4
// __stdcall no-op, RET 4 (1 param).
__declspec(naked) void func_006f5100(void)
{
    __asm {
        ret 4
    }
}
