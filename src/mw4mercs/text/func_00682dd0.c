/* FUN_00682dd0 - HUD element list scan returning min float (__thiscall) */
extern void __cdecl FUN_00682d20(void);
extern float g_76c5b0;

__declspec(naked) void FUN_00682dd0(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov eax, dword ptr [eax + 0x3f8]
        test eax, eax
        push esi
        jz short Lde8
        mov ecx, dword ptr [eax]
        test ecx, ecx
        mov esi, dword ptr [eax + 0x4]
        jnz short Ldf0
Lde8:
        fld dword ptr [g_76c5b0]
        pop esi
        ret
Ldf0:
        push ecx
        call FUN_00682d20
        fstp dword ptr [esp + 0xc]
        add esp, 0x4
        jmp short Le01
Ldff:
        fstp st(0)
Le01:
        test esi, esi
        jz short Le28
        mov eax, dword ptr [esi]
        test eax, eax
        mov esi, dword ptr [esi + 0x4]
        jz short Le28
        push eax
        call FUN_00682d20
        fcom dword ptr [esp + 0xc]
        add esp, 0x4
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz short Ldff
        fstp dword ptr [esp + 0x8]
        jmp short Le01
Le28:
        fld dword ptr [esp + 0x8]
        pop esi
        ret
    }
}
