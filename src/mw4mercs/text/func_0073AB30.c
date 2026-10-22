/*
 * func_0073AB30 - flag setter on globals 0x8aaeac / 0x8aaea8
 */

extern int g_8aaea8;
extern int g_8aaeac;

__declspec(naked) void func_0073AB30()
{
    __asm {
        mov     ecx, dword ptr [g_8aaeac]
        xor     eax, eax
        test    ecx, ecx
        sete    al
        test    eax, eax
        mov     dword ptr [g_8aaeac], eax
        je      skip
        mov     dword ptr [g_8aaea8], 0
    skip:
        ret
    }
}
