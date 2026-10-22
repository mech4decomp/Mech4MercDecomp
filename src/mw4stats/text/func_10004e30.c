/*
 * MW4Stats.dll - FUN_10004e30 (0x10004E30, 24 B, __cdecl)
 * Wrapper: FUN_10006430([esp+4], [esp+8], [esp+0xc]).
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10006430(void);

__declspec(naked) void FUN_10004e30(void)
{
    __asm {
        mov eax, dword ptr [esp+0xc]
        mov ecx, dword ptr [esp+0x8]
        mov edx, dword ptr [esp+0x4]
        push eax
        push ecx
        push edx
        call FUN_10006430
        add esp, 0xc
        ret
    }
}
