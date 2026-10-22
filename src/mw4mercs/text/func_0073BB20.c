/*
 * FUN_0073BB20 (18 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_007b73f8;

__declspec(naked) void FUN_0073BB20(void)
{
    __asm {
        mov    ecx, dword ptr [g_007b73f8]
        xor    eax, eax
        cmp    ecx, 0x800000
        sete   al
        ret
    }
}
