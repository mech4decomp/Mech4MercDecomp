/*
 * func_0073AEF0 - flag setter on globals 0x8aae88 / 0x8aae8c
 */

extern int g_8aae88;
extern int g_8aae8c;

__declspec(naked) void func_0073AEF0()
{
    __asm {
        mov     ecx, dword ptr [g_8aae88]
        xor     eax, eax
        test    ecx, ecx
        sete    al
        test    eax, eax
        mov     dword ptr [g_8aae88], eax
        je      skip
        mov     dword ptr [g_8aae8c], 0
    skip:
        ret
    }
}
