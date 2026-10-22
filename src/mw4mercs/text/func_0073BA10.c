/*
 * FUN_0073BA10 (18 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_007b73dc;

__declspec(naked) void FUN_0073BA10(void)
{
    __asm {
        mov    ecx, dword ptr [g_007b73dc]
        xor    eax, eax
        cmp    ecx, 0x400
        sete   al
        ret
    }
}
