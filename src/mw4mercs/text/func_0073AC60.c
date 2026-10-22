/*
 * FUN_0073AC60 (19 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_008aaee4;

__declspec(naked) void FUN_0073AC60(void)
{
    __asm {
        mov    ecx, dword ptr [g_008aaee4]
        xor    eax, eax
        test   ecx, ecx
        sete   al
        mov    dword ptr [g_008aaee4], eax
        ret
    }
}
