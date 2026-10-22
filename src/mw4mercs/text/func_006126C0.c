/*
 * func_006126C0 - assert/log wrapper (stdcall, ret 0xc)
 * Pushes a string, calls the assert handler, returns -1
 */

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void func_006126C0()
{
    __asm {
        push    0x78c214
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        je      skip
        int     3
    skip:
        or      eax, 0xffffffff
        ret     0xc
    }
}
