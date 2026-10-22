/*
 * func_0073AE40 - toggle byte flag at global 0x7b7069
 */

extern char g_7b7069;

__declspec(naked) void func_0073AE40()
{
    __asm {
        mov     al, byte ptr [g_7b7069]
        test    al, al
        sete    al
        mov     byte ptr [g_7b7069], al
        ret
    }
}
