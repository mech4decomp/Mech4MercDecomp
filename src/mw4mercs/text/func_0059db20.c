void __stdcall FUN_004084E0(void *ptr);

__declspec(naked) void func_0059DB20(void)
{
    __asm {
        mov eax, [esp+4]
        test eax, eax
        je skip
        push eax
        call FUN_004084E0
        pop ecx
skip:
        ret 8
    }
}
