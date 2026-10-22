/*
 * FUN_0073B220 (19 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_008aaea4;

__declspec(naked) void FUN_0073B220(void)
{
    __asm {
        mov    ecx, dword ptr [g_008aaea4]
        xor    eax, eax
        test   ecx, ecx
        sete   al
        mov    dword ptr [g_008aaea4], eax
        ret
    }
}
