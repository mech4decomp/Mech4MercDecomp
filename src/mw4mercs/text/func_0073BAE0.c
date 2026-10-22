/*
 * FUN_0073BAE0 (14 bytes true extent) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int g_007b73f4;

__declspec(naked) void FUN_0073BAE0(void)
{
    __asm {
        mov    ecx, dword ptr [g_007b73f4]
        xor    eax, eax
        cmp    ecx, -1
        sete   al
        ret
    }
}
