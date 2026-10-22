/*
 * MW4Stats.dll - FUN_100047d0 (0x100047D0, 24 B, __cdecl)
 * Wrapper: FUN_100061a0(param_1, param_2, &stack0x0000000c).
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_100061a0(void);

__declspec(naked) void FUN_100047d0(void)
{
    __asm {
        mov ecx, dword ptr [esp+0x8]
        mov edx, dword ptr [esp+0x4]
        lea eax, [esp+0xc]
        push eax
        push ecx
        push edx
        call FUN_100061a0
        add esp, 0xc
        ret
    }
}
