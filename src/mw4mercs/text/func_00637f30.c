/* func_00637f30.c - ABL interpreter region: teardown of "WeaponUpdates" object */

extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void *);
extern int g_007f2d20;

__declspec(naked) void func_00637f30(void)
{
    __asm {
        push esi
        mov  esi, dword ptr [g_007f2d20]
        test esi, esi
        jz   L_skip
        mov  ecx, esi
        call FUN_00415e30
        push esi
        call FUN_004084e0
        add  esp, 0x4
L_skip:
        mov  dword ptr [g_007f2d20], 0
        pop  esi
        ret
    }
}
