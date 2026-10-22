/*
 * func_005009C0 - assert/log wrapper (stdcall, ret 0x10)
 * Pushes a string, calls the assert handler, returns 0
 */

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void func_005009C0()
{
    __asm {
        push    0x776288
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        je      skip
        int     3
    skip:
        xor     al, al
        ret     0x10
    }
}
