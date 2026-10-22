/*
 * func_0073B280 - toggle byte flag at global 0x7b7068
 */

extern char g_7b7068;

__declspec(naked) void func_0073B280()
{
    __asm {
        mov     al, byte ptr [g_7b7068]
        test    al, al
        sete    al
        mov     byte ptr [g_7b7068], al
        ret
    }
}
