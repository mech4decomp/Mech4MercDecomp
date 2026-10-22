/* FUN_004766a0 - MLR class destructor (30 B, __thiscall, 1 arg) */

extern void __cdecl FUN_00476810(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void func_004766a0(void)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_00476810
        test byte ptr [esp+0x8], 0x1
        jz L4766b8
        push esi
        call FUN_004084e0
        add esp, 0x4
L4766b8:
        mov eax, esi
        pop esi
        ret 0x4
    }
}
