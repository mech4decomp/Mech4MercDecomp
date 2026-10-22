/*
 * FUN_0073B330 (20 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_008aae40;

__declspec(naked) void FUN_0073B330(void)
{
    __asm {
        mov    ecx, dword ptr [g_008aae40]
        xor    eax, eax
        cmp    ecx, 1
        setne  al
        mov    dword ptr [g_008aae40], eax
        ret
    }
}
