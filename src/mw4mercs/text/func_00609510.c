/* func_00609510 - animation-blend subsystem */
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00609ab0(void);
extern void __cdecl FUN_00609a70(void);

__declspec(naked) void func_00609510(void)
{
    __asm {
        push esi
        mov esi, ecx
        lea eax, [esp+0x8]
        push eax
        lea ecx, [esi+0x14]
        call FUN_00416b60
        test eax, eax
        jz L_609546
        fld dword ptr [eax+0x18]
        mov edx, dword ptr [eax+0x10]
        push ecx
        mov ecx, dword ptr [eax+0x14]
        fstp dword ptr [esp]
        push ecx
        push edx
        mov ecx, esi
        call FUN_00609ab0
        mov eax, dword ptr [esp+0x8]
        push eax
        mov ecx, esi
        call FUN_00609a70
L_609546:
        pop esi
        ret 0x4
    }
}
