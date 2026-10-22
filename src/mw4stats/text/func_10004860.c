/*
 * MW4Stats.dll - FUN_10004860 (0x10004860, 10 B, __thiscall)
 * Stores stack arg into this[4].
 * Transcribed from MW4Stats.dll reference bytes.
 */
__declspec(naked) void FUN_10004860(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        mov     dword ptr [ecx+0x4], eax
        ret     0x4
    }
}
