/* FUN_00678410 - HUD spatial-hash grid region: virtual dispatch + helper call */
extern void __cdecl FUN_00501eb0(void *p);

__declspec(naked) void func_00678410(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+0x8]
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        push 0x1c
        call dword ptr [eax+0x14]
        push esi
        call FUN_00501eb0
        add esp, 0x4
        pop esi
        ret
    }
}
