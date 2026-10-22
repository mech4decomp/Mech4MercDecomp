/*
 * FUN_00414B60 (19 bytes) - .text data block 0x414B1B.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076d2b0;
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00414B60(void)
{
    __asm {
        push   offset g_0076d2b0
        call   FUN_006fab90
        add    esp, 4
        test   eax, eax
        je     L_ret
        int    3
L_ret:
        ret
    }
}
