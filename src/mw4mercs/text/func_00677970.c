/* FUN_00677970 - HUD spatial-hash grid region: virtual dispatch + helper call */
extern void __cdecl FUN_00674770(void *p);

__declspec(naked) void func_00677970(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+0x8]
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        push 0x3c
        call dword ptr [eax+0x14]
        push esi
        call FUN_00674770
        add esp, 0x4
        pop esi
        ret
    }
}
