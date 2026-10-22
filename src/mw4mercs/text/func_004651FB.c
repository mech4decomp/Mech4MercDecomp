/*
 * func_004651FB - thiscall assert/log wrapper (stdcall, ret 0x2c)
 * Sets [ecx+0x68]=1, pushes a string, calls the assert handler
 * (leading NOPs are alignment padding within the block)
 */

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void func_004651FB()
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        push    0x76eee8
        mov     byte ptr [ecx + 0x68], 1
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        je      skip
        int     3
    skip:
        ret     0x2c
    }
}
