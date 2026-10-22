/*
 * FUN_0073B020 (20 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_007b73d4;

__declspec(naked) void FUN_0073B020(void)
{
    __asm {
        mov    eax, dword ptr [g_007b73d4]
        dec    eax
        neg    eax
        sbb    eax, eax
        and    eax, 2
        dec    eax
        mov    dword ptr [g_007b73d4], eax
        ret
    }
}
