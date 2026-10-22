/*
 * FUN_0073BFE0 (30 bytes true extent) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern char g_008aadbc;
extern void __cdecl FUN_0073A250(void);
extern void __cdecl FUN_0073A2E0(void);

__declspec(naked) void FUN_0073BFE0(void)
{
    __asm {
        mov    dl, byte ptr [g_008aadbc]
        test   dl, dl
        sete   al
        test   al, al
        mov    byte ptr [g_008aadbc], al
        je     L_73bff9
        jmp    FUN_0073A250
L_73bff9:
        jmp    FUN_0073A2E0
    }
}
