/*
 * func_0073B090 - flag setter on globals 0x8aaea0 / 0x8aae9c
 */

extern int g_8aaea0;
extern int g_8aae9c;

__declspec(naked) void func_0073B090()
{
    __asm {
        mov     ecx, dword ptr [g_8aaea0]
        xor     eax, eax
        test    ecx, ecx
        sete    al
        test    eax, eax
        mov     dword ptr [g_8aaea0], eax
        je      skip
        mov     dword ptr [g_8aae9c], 0
    skip:
        ret
    }
}
