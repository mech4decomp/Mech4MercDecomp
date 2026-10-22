/* FUN_00454f20 - MLR_I_DeT_TMesh shutdown (RET) */

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4850(void);

extern int g_7b98e0;
extern int g_7b98e4;

__declspec(naked) void func_00454f20(void)
{
    __asm {
        push esi
        mov esi, dword ptr [g_7b98e0]
        test esi, esi
        jz L_0x454f3b
        mov ecx, esi
        call FUN_00415200
        push esi
        call FUN_004084e0
        add esp, 0x4
    L_0x454f3b:
        mov eax, dword ptr [g_7b98e4]
        push 0x1
        push eax
        mov dword ptr [g_7b98e0], 0x0
        call FUN_006f4850
        mov dword ptr [g_7b98e4], 0x0
        pop esi
        ret
    }
}
