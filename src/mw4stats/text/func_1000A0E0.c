/*
 * MW4Stats.dll - FUN_1000a0e0 (0x1000A0E0, 15 B, __stdcall)
 * free(param). IAT call through 0x100210ec.
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void (*g_100210ec)(void);

__declspec(naked) void FUN_1000a0e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_100210ec]
        pop     ecx
        ret     4
    }
}
