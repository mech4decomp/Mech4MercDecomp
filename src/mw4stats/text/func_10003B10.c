/*
 * FUN_10003b10 (14 B, __cdecl) - indirect virtual call through [ECX].
 * Transcribed from MW4Stats.dll reference bytes.
 */

__declspec(naked) void FUN_10003b10(void)
{
    __asm {
        mov     ecx, dword ptr [esp+0x8]
        mov     edx, dword ptr [esp+0x4]
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax]
        ret
    }
}
