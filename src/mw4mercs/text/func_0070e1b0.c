/* func_0070e1b0 - FUN_0070e1b0 - 30 bytes: app-init hook wrapper */

extern void __cdecl FUN_0070e1a0(void);

__declspec(naked) void func_0070e1b0(void)
{
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push 0x4
        push eax
        call FUN_0070e1a0
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push ecx
        push edx
        call FUN_0070e1a0
        ret 0xc
    }
}
