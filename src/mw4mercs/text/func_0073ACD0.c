/*
 * FUN_0073ACD0 (19 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_008aae64;

__declspec(naked) void FUN_0073ACD0(void)
{
    __asm {
        mov    ecx, dword ptr [g_008aae64]
        xor    eax, eax
        test   ecx, ecx
        sete   al
        mov    dword ptr [g_008aae64], eax
        ret
    }
}
