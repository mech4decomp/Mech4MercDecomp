/*
 * MW4Stats.dll - FUN_100044D0 (0x100044D0, 18 B, __thiscall)
 * Stores two stack args into this[0] and this[4].
 * Transcribed from MW4Stats.dll reference bytes.
 */
__declspec(naked) void FUN_100044D0(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp+0x4]
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax+0x4], edx
        ret     0x8
    }
}
