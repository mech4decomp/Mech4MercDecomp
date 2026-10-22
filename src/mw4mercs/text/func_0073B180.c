/*
 * FUN_0073B180 (20 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_0087b688;

__declspec(naked) void FUN_0073B180(void)
{
    __asm {
        mov    ecx, dword ptr [g_0087b688]
        xor    eax, eax
        cmp    ecx, 1
        setne  al
        mov    dword ptr [g_0087b688], eax
        ret
    }
}
