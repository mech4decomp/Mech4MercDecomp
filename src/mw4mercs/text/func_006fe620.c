// FUN_006FE620 (3 bytes)
// xor eax, eax; ret
// Returns 0.
__declspec(naked) void func_006fe620(void)
{
    __asm {
        xor eax, eax
        ret
    }
}
