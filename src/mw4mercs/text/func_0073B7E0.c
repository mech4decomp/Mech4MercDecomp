/*
 * FUN_0073B7E0 (35 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int g_007b73dc;
extern int g_008aaef0;

__declspec(naked) void FUN_0073B7E0(void)
{
    __asm {
        mov    eax, dword ptr [g_007b73dc]
        sub    eax, 0x500
        neg    eax
        sbb    eax, eax
        and    eax, 0x500
        mov    dword ptr [g_007b73dc], eax
        mov    dword ptr [g_008aaef0], 1
        ret
    }
}
