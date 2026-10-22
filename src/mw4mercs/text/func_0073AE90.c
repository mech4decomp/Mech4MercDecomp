/*
 * func_0073AE90 - toggle a flag bit in global 0x8aae5c
 */

extern int g_8aae5c;

__declspec(naked) void func_0073AE90()
{
    __asm {
        mov     eax, dword ptr [g_8aae5c]
        xor     eax, 2
        test    al, 2
        mov     dword ptr [g_8aae5c], eax
        je      skip
        and     eax, 0xfffffff7
        mov     dword ptr [g_8aae5c], eax
    skip:
        ret
    }
}
