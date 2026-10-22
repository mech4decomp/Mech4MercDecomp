/*
 * func_0073AE70 - toggle a flag bit in global 0x8aae5c
 */

extern int g_8aae5c;

__declspec(naked) void func_0073AE70()
{
    __asm {
        mov     eax, dword ptr [g_8aae5c]
        xor     eax, 1
        test    al, 1
        mov     dword ptr [g_8aae5c], eax
        je      skip
        and     eax, 0xfffffffb
        mov     dword ptr [g_8aae5c], eax
    skip:
        ret
    }
}
