/* FUN_00417860 - destroys the object in g_7b8c20 (FUN_00415e30 + free),
 * then clears g_7b8c20.
 */
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);
extern int g_7b8c20;

__declspec(naked) void FUN_00417860(void)
{
    __asm {
        push esi
        mov esi, dword ptr [g_7b8c20]
        test esi, esi
        jz L_7b
        mov ecx, esi
        call FUN_00415e30
        push esi
        call FUN_004084e0
        add esp, 4
    L_7b:
        mov dword ptr [g_7b8c20], 0
        pop esi
        ret
    }
}
