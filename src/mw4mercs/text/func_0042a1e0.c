/* FUN_0042a1e0 - MLRSpriteCloud destructor/free */
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);
extern int g_007b96c8;

__declspec(naked) void func_0042a1e0(void)
{
    __asm {
        push esi
        mov esi, dword ptr [g_007b96c8]
        test esi, esi
        jz L_42a1fb
        mov ecx, esi
        call FUN_00415200
        push esi
        call FUN_004084e0
        add esp, 0x4
L_42a1fb:
        mov dword ptr [g_007b96c8], 0x0
        pop esi
        ret
    }
}
