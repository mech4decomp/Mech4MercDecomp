/*
 * FUN_0073AD20 (20 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_008aae6c;

__declspec(naked) void FUN_0073AD20(void)
{
    __asm {
        mov    ecx, dword ptr [g_008aae6c]
        xor    eax, eax
        cmp    ecx, 1
        setne  al
        mov    dword ptr [g_008aae6c], eax
        ret
    }
}
