/*
 * FUN_004BA9B0 (20 bytes) - .text data block 0x4BA95A.
 */
#pragma warning(disable : 4035 4793)

extern int g_007b34c8;

__declspec(naked) void FUN_004BA9B0(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 0x18]
        shr    eax, 2
        and    eax, 0x3f
        mov    edx, dword ptr [eax*4 + g_007b34c8]
        mov    dword ptr [ecx + 0x1c], edx
        ret
    }
}
