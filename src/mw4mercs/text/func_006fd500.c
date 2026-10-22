// FUN_006FD500 (5 bytes)
// xor eax, eax; ret 8
// __stdcall: returns 0, RET 8 (2 params).
__declspec(naked) void func_006fd500(void)
{
    __asm {
        xor eax, eax
        ret 8
    }
}
