/*
 * func_004BB74D - assert/log wrapper (stdcall, ret 4)
 * Pushes a string, calls the assert handler, returns 0
 * (leading NOPs are alignment padding within the block)
 */

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void func_004BB74D()
{
    __asm {
        nop
        nop
        nop
        push    0x7710c0
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        je      skip
        int     3
    skip:
        xor     al, al
        ret     4
    }
}
