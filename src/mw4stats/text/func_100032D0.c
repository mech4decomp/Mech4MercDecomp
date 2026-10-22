/*
 * MW4Stats.dll - FUN_100032d0 (0x100032D0, 4 B, __fastcall)
 * Getter: return *(this + 4).
 * Transcribed from MW4Stats.dll reference bytes.
 */

__declspec(naked) void __cdecl FUN_100032d0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 4]
        ret
    }
}
