/* FUN_00476870 - MLR helper (37 B, __thiscall, 1 arg) */

extern void __cdecl FUN_0047ac10(void);

__declspec(naked) void func_00476870(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+0x8]
        push esi
        call FUN_0047ac10
        mov eax, dword ptr [esi]
        push 0x4
        lea ecx, [esp+0xc]
        push ecx
        mov ecx, esi
        mov dword ptr [esp+0x10], 0x0
        call dword ptr [eax+0x24]
        pop esi
        ret 0x4
    }
}
