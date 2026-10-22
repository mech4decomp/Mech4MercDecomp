/*
 * func_0073ABC0 - flag setter on globals 0x8aae7c / 0x8aae80
 */

extern int g_8aae7c;
extern int g_8aae80;

__declspec(naked) void func_0073ABC0()
{
    __asm {
        mov     ecx, dword ptr [g_8aae7c]
        xor     eax, eax
        test    ecx, ecx
        sete    al
        test    eax, eax
        mov     dword ptr [g_8aae7c], eax
        je      skip
        mov     dword ptr [g_8aae80], 0
    skip:
        ret
    }
}
