/*
 * FUN_0073C010 (30 bytes true extent) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern char g_008aa289;
extern void __cdecl FUN_00733570(void);
extern void __cdecl FUN_007335C0(void);

__declspec(naked) void FUN_0073C010(void)
{
    __asm {
        mov    dl, byte ptr [g_008aa289]
        test   dl, dl
        sete   al
        test   al, al
        mov    byte ptr [g_008aa289], al
        je     L_73c029
        jmp    FUN_00733570
L_73c029:
        jmp    FUN_007335C0
    }
}
