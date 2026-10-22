/*
 * func_0073AB00 - flag setter on globals 0x8aaea8 / 0x8aaeac
 */

extern int g_8aaea8;
extern int g_8aaeac;

__declspec(naked) void func_0073AB00()
{
    __asm {
        mov     ecx, dword ptr [g_8aaea8]
        xor     eax, eax
        test    ecx, ecx
        sete    al
        test    eax, eax
        mov     dword ptr [g_8aaea8], eax
        je      skip
        mov     dword ptr [g_8aaeac], 0
    skip:
        ret
    }
}
