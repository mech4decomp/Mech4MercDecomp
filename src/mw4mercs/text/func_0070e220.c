/* func_0070e220 - FUN_0070e220 - 13 bytes: app-init hook wrapper */

extern void __cdecl FUN_0070e210(void);

__declspec(naked) void func_0070e220(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call FUN_0070e210
        ret 0x8
    }
}
