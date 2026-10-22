/*
 * func_0073AEB0 - toggle a flag bit in global 0x8aae5c
 */

extern int g_8aae5c;

__declspec(naked) void func_0073AEB0()
{
    __asm {
        mov     eax, dword ptr [g_8aae5c]
        xor     eax, 4
        test    al, 4
        mov     dword ptr [g_8aae5c], eax
        je      skip
        and     eax, 0xfffffffe
        mov     dword ptr [g_8aae5c], eax
    skip:
        ret
    }
}
