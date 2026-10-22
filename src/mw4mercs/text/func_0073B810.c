/*
 * FUN_0073B810 (35 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int g_007b73dc;
extern int g_008aaef0;

__declspec(naked) void FUN_0073B810(void)
{
    __asm {
        mov    eax, dword ptr [g_007b73dc]
        sub    eax, 0x640
        neg    eax
        sbb    eax, eax
        and    eax, 0x640
        mov    dword ptr [g_007b73dc], eax
        mov    dword ptr [g_008aaef0], 1
        ret
    }
}
