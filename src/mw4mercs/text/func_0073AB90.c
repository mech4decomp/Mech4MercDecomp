/*
 * func_0073AB90 - flag setter on globals 0x8aae78 / 0x8aae74
 */

extern int g_8aae74;
extern int g_8aae78;

__declspec(naked) void func_0073AB90()
{
    __asm {
        mov     ecx, dword ptr [g_8aae78]
        xor     eax, eax
        test    ecx, ecx
        sete    al
        test    eax, eax
        mov     dword ptr [g_8aae78], eax
        je      skip
        mov     dword ptr [g_8aae74], 0
    skip:
        ret
    }
}
