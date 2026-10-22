/* FUN_00454ec0 - MLR_I_DeT_TMesh init (RET) */

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

extern int g_7b958c;
extern int g_7b98e4;
extern int g_7d98f8;
extern int g_7b98e0;

__declspec(naked) void func_00454ec0(void)
{
    __asm {
        mov eax, dword ptr [g_7b958c]
        push esi
        push eax
        push 0x0
        push 0x76eb3c
        call FUN_006f4710
        push 0x18
        mov dword ptr [g_7b98e4], eax
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz L_0x454f0c
        mov ecx, dword ptr [g_7d98f8]
        push ecx
        push 0x76eb18
        push 0x64
        mov ecx, esi
        call FUN_004151c0
        mov dword ptr [esi + 0x14], 0x455510
        mov dword ptr [g_7b98e0], esi
        pop esi
        ret
    L_0x454f0c:
        mov dword ptr [g_7b98e0], 0x0
        pop esi
        ret
    }
}
