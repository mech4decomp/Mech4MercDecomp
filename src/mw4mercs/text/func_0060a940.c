/* func_0060a940 - animation-blend subsystem */
extern void __cdecl FUN_0060a9d0(void);

__declspec(naked) void func_0060a940(void)
{
    __asm {
        mov eax, dword ptr [esp+0x4]
        push eax
        push 0x3
        call FUN_0060a9d0
        ret 0x8
    }
}
