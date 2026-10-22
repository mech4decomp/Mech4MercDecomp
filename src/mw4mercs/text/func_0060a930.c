/* func_0060a930 - animation-blend subsystem */
extern void __cdecl FUN_0060a9d0(void);

__declspec(naked) void func_0060a930(void)
{
    __asm {
        mov eax, dword ptr [esp+0x4]
        push eax
        push 0x2
        call FUN_0060a9d0
        ret 0x8
    }
}
