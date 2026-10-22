/*
 * func_0073BA70 - predicate on global 0x7b73f4
 * Returns 1 if [0x7b73f4] == 0
 */

extern int g_7b73f4;

__declspec(naked) void func_0073BA70()
{
    __asm {
        mov     ecx, dword ptr [g_7b73f4]
        xor     eax, eax
        test    ecx, ecx
        sete    al
        ret
    }
}
