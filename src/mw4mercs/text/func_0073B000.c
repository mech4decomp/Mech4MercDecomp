/*
 * FUN_0073B000 (20 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_007b73d4;

__declspec(naked) void FUN_0073B000(void)
{
    __asm {
        mov    ecx, dword ptr [g_007b73d4]
        xor    eax, eax
        test   ecx, ecx
        setne  al
        dec    eax
        mov    dword ptr [g_007b73d4], eax
        ret
    }
}
