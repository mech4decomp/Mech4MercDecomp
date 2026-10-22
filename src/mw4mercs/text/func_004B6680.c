/*
 * FUN_004B6680 (21 bytes) - .text data block 0x4B6602.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007708f0;
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004B6680(void)
{
    __asm {
        push   offset g_007708f0
        call   FUN_006fab90
        add    esp, 4
        test   eax, eax
        je     L_ret
        int    3
L_ret:
        ret    4
    }
}
