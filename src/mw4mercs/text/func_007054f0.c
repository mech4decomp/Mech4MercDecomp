/* FUN_007054f0 - call FUN_0075dbbe with function pointer 0x705500 */

extern char g_705500;      /* 0x00705500 */

extern int __cdecl FUN_0075dbbe(void);

__declspec(naked) void __cdecl FUN_007054f0(void)
{
    __asm {
        push offset g_705500
        call FUN_0075dbbe
        pop ecx
        ret
    }
}
