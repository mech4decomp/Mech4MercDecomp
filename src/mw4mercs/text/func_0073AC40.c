/*
 * FUN_0073AC40 (19 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_007b73e0;

__declspec(naked) void FUN_0073AC40(void)
{
    __asm {
        mov    ecx, dword ptr [g_007b73e0]
        xor    eax, eax
        test   ecx, ecx
        sete   al
        mov    dword ptr [g_007b73e0], eax
        ret
    }
}
