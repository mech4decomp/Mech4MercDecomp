/* FUN_00682d80 - HUD element list scan returning max float (__thiscall) */
extern void __cdecl FUN_00682d20(void);

__declspec(naked) void FUN_00682d80(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax + 0x3f8]
        mov dword ptr [esp + 0x8], 0x0
        jmp short L97
L95:
        fstp st(0)
L97:
        test esi, esi
        jz short Lbe
        mov eax, dword ptr [esi]
        test eax, eax
        mov esi, dword ptr [esi + 0x4]
        jz short Lbe
        push eax
        call FUN_00682d20
        fcom dword ptr [esp + 0xc]
        add esp, 0x4
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jne short L95
        fstp dword ptr [esp + 0x8]
        jmp short L97
Lbe:
        fld dword ptr [esp + 0x8]
        pop esi
        ret
    }
}
