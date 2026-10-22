/*
 * FUN_0073B0C0 (31 bytes true extent) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int g_008aaeb4;
extern int g_0087b688;
extern int g_0085b610;
extern int g_0087c5b4;

__declspec(naked) void FUN_0073B0C0(void)
{
    __asm {
        mov    eax, dword ptr [g_008aaeb4]
        mov    dword ptr [g_0087b688], 3
        mov    dword ptr [g_0085b610], eax
        mov    dword ptr [g_0087c5b4], 0
        ret
    }
}
