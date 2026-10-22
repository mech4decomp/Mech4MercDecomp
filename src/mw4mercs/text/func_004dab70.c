extern void __stdcall FUN_004179f0(void);

__declspec(naked) void __stdcall FUN_004dab70(void)
{
    __asm {
        add     ecx, 0xbc
        jmp     FUN_004179f0
    }
}
