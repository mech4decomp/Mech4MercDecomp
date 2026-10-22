/*
 * func_0073AF20 - flag setter on globals 0x8aae8c / 0x8aae88
 */

extern int g_8aae88;
extern int g_8aae8c;

__declspec(naked) void func_0073AF20()
{
    __asm {
        mov     ecx, dword ptr [g_8aae8c]
        xor     eax, eax
        test    ecx, ecx
        sete    al
        test    eax, eax
        mov     dword ptr [g_8aae8c], eax
        je      skip
        mov     dword ptr [g_8aae88], 0
    skip:
        ret
    }
}
