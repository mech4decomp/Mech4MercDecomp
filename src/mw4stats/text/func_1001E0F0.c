/*
 * MW4Stats.dll - FUN_1001e0f0 (0x1001E0F0, 17 B, __stdcall)
 * InterlockedIncrement((LONG*)(param_1 + 0x10)).
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void *g_10021054; /* IAT: InterlockedIncrement */

__declspec(naked) void __cdecl FUN_1001e0f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        add     eax, 0x10
        push    eax
        call    dword ptr [g_10021054]
        ret     0x4
    }
}
