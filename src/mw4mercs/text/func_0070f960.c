/* func_0070f960: gosScript final-region init. Zeroes global 0x008aaeb8. */

extern int g_008aaeb8;

__declspec(naked) void func_0070f960(void)
{
    __asm {
        mov dword ptr [g_008aaeb8], 0
        ret
    }
}
