/*
 * MW4Stats.dll - FUN_1000a0f0 (0x1000A0F0, 17 B, __stdcall)
 * malloc(param). IAT call through 0x100210f8.
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void (*g_100210f8)(void);

__declspec(naked) void FUN_1000a0f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_100210f8]
        add     esp, 4
        ret     4
    }
}
