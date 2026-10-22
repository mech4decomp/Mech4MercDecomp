/*
 * FUN_004B6190 (21 bytes) - .text data block 0x4B60F2.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00770848;
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004B6190(void)
{
    __asm {
        push   offset g_00770848
        call   FUN_006fab90
        add    esp, 4
        test   eax, eax
        je     L_ret
        int    3
L_ret:
        ret    4
    }
}
