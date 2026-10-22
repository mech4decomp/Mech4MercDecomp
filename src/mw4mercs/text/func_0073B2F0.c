/*
 * FUN_0073B2F0 (19 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_008aaebc;

__declspec(naked) void FUN_0073B2F0(void)
{
    __asm {
        mov    ecx, dword ptr [g_008aaebc]
        xor    eax, eax
        test   ecx, ecx
        sete   al
        mov    dword ptr [g_008aaebc], eax
        ret
    }
}
