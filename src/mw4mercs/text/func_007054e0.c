/* FUN_007054e0 - zero two globals */

extern unsigned int g_857f38; /* 0x00857f38 */
extern unsigned int g_857f3c; /* 0x00857f3c */

__declspec(naked) void __cdecl FUN_007054e0(void)
{
    __asm {
        xor eax, eax
        mov dword ptr [g_857f38], eax
        mov dword ptr [g_857f3c], eax
        ret
    }
}
