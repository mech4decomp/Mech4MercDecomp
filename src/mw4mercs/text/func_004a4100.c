/* FUN_004a4100 - MLR (MidLevelRenderer) singleton teardown, cdecl */
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);

extern int g_dword_7da984;   /* 0x007da984 */

__declspec(naked) void func_004a4100(void)
{
    __asm {
        push esi
        mov esi, dword ptr [g_dword_7da984]
        test esi, esi
        jz L_a411b
        mov ecx, esi
        call FUN_00415200
        push esi
        call FUN_004084e0
        add esp, 0x4
L_a411b:
        mov dword ptr [g_dword_7da984], 0x0
        pop esi
        ret
    }
}
