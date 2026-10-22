/* FUN_00679e50 - HUD region */
extern void __cdecl FUN_00675620(void *p);

__declspec(naked) void func_00679e50(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        push 0x80
        call dword ptr [eax + 0x14]
        push esi
        call FUN_00675620
        add esp, 0x4
        pop esi
        ret
    }
}
