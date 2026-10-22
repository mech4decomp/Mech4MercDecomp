// thunk_FUN_0052e010 (5 bytes)
// jmp 0x0052E010 (e9 bb fe ff ff)
// Unconditional jump to FUN_0052E010.
void func_0052e010(void);

__declspec(naked) void func_0052e150(void)
{
    __asm {
        jmp func_0052e010
    }
}
