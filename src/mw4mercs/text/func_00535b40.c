// FUN_00535B40 (5 bytes)
// xor eax, eax; xor edx, edx; ret
// Returns 0 in eax:edx (64-bit zero).
// __stdcall, no params (ret without immediate).
__declspec(naked) void func_00535b40(void)
{
    __asm {
        xor eax, eax
        xor edx, edx
        ret
    }
}
