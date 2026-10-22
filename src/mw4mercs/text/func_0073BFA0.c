/*
 * FUN_0073BFA0 (14 bytes true extent) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int g_008aaeb4;

__declspec(naked) void FUN_0073BFA0(void)
{
    __asm {
        mov    ecx, dword ptr [g_008aaeb4]
        xor    eax, eax
        test   ecx, ecx
        setne  al
        ret
    }
}
