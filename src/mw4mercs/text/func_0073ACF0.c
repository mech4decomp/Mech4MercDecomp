/*
 * func_0073ACF0 - flag setter on globals 0x8aae68 / 0x8aae70
 */

extern int g_8aae68;
extern int g_8aae70;

__declspec(naked) void func_0073ACF0()
{
    __asm {
        mov     ecx, dword ptr [g_8aae68]
        xor     eax, eax
        test    ecx, ecx
        sete    al
        test    eax, eax
        mov     dword ptr [g_8aae68], eax
        je      skip
        mov     dword ptr [g_8aae70], 0
    skip:
        ret
    }
}
