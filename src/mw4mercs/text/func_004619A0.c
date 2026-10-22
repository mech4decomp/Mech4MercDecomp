/*
 * FUN_004619A0 (21 bytes) - .text data block 0x461985.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076eee8;
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004619A0(void)
{
    __asm {
        push   offset g_0076eee8
        call   FUN_006fab90
        add    esp, 4
        test   eax, eax
        je     L_ret
        int    3
L_ret:
        ret    0x2c
    }
}
