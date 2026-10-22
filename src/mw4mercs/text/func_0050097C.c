/*
 * func_0050097C - assert/log wrapper (stdcall, ret 8)
 * Pushes a string, calls the assert handler, returns void
 * (leading NOPs are alignment padding within the block)
 */

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void func_0050097C()
{
    __asm {
        nop
        nop
        nop
        nop
        push    0x776288
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        je      skip
        int     3
    skip:
        ret     8
    }
}
